// addr: 0x012b80e0
// name: ArchetypeDB_removeArchetypeEntry
// subsystem: common/common/property
// source (binary assert): common/common/property/ArchetypeDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchetypeDB_removeArchetypeEntry(void * this, void * key, int version) */

void __thiscall ArchetypeDB_removeArchetypeEntry(void *this,void *key,int version)

{
  uint uVar1;
  int *extraout_EAX;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  int *unaff_EBP;
  int unaff_EDI;
  undefined1 *vec;
  void **ppvVar5;
  undefined1 local_8 [8];
  
                    /* Removes an archetype entry for a version/key pair: it validates the version,
                       finds the per-version map node, destroys the stored archetype object if
                       present, and erases the map entry. Evidence is ArchetypeDB.cpp's 'v != -1'
                       assert plus the destructor call through the stored pointer before the erase
                       helper. */
  if (version == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\ArchetypeDB.cpp",0x1ea);
  }
  iVar2 = *(int *)((int)this + 0x10);
  ArchetypeDB_EntryTree_lowerBound((void *)((int)this + 0xc),local_8,&version);
  if (((void *)*extraout_EAX == (void *)0x0) || ((void *)*extraout_EAX != (void *)((int)this + 0xc))
     ) {
    FUN_00d83c2d();
  }
  if (extraout_EAX[1] != iVar2) {
    iVar2 = ArchetypeDB_PropertyValueMap_findOrInsertFirst(&version);
    uVar1 = *(uint *)(iVar2 + 8);
    if (uVar1 < *(uint *)(iVar2 + 4)) {
      FUN_00d83c2d();
    }
    ppvVar5 = &key;
    vec = local_8;
    pvVar3 = (void *)ArchetypeDB_PropertyValueMap_findOrInsertFirst(&version);
    piVar4 = ArchetypeDB_idVector_lowerBound(pvVar3,vec,(int *)ppvVar5,unaff_EBP);
    if ((*piVar4 == 0) || (*piVar4 != iVar2)) {
      FUN_00d83c2d();
    }
    if (piVar4[1] == uVar1) {
      ppvVar5 = &key;
      ArchetypeDB_PropertyValueMap_findOrInsertFirst(&version);
      piVar4 = (int *)ArchetypeDB_idVector_getMappedValuePtr((int *)ppvVar5);
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)(1);
      }
      ppvVar5 = &key;
      pvVar3 = (void *)ArchetypeDB_PropertyValueMap_findOrInsertFirst(&version);
      ArchetypeDB_idVector_eraseKey(pvVar3,ppvVar5,unaff_EDI);
    }
  }
  return;
}

