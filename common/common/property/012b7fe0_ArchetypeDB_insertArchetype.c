// addr: 0x012b7fe0
// name: ArchetypeDB_insertArchetype
// subsystem: common/common/property
// source (binary assert): common/common/property/ArchetypeDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchetypeDB_insertArchetype(void * archetype, int version) */

void ArchetypeDB_insertArchetype(void *archetype,int version)

{
  uint uVar1;
  void *this;
  int iVar2;
  void *this_00;
  int *piVar3;
  undefined4 *puVar4;
  int *unaff_EBP;
  undefined1 *vec;
  void **ppvVar5;
  undefined1 auStack_8 [8];
  
                    /* Ensures the version-specific ArchetypeDB state is initialized, optionally
                       lets the archetype finish setup, and inserts the Archetype pointer into the
                       live archetype map. The key appears to come from the archetype/id helper for
                       the selected version. */
  iVar2 = version;
  if (version == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\ArchetypeDB.cpp",0x1db);
  }
  this = archetype;
  if (archetype == (void *)0x0) {
    FUN_012f5a60("archetype","..\\common\\common\\property\\ArchetypeDB.cpp",0x1dd);
  }
  Archetype_setDatabaseID(this,iVar2);
  iVar2 = FUN_013795c0();
  if (iVar2 == 0) {
    (**(code **)(*(int *)this + 0x40))();
  }
  archetype = (void *)FUN_013795c0();
  iVar2 = ArchetypeDB_PropertyValueMap_findOrInsertFirst(&version);
  uVar1 = *(uint *)(iVar2 + 8);
  if (uVar1 < *(uint *)(iVar2 + 4)) {
    FUN_00d83c2d();
  }
  ppvVar5 = &archetype;
  vec = auStack_8;
  this_00 = (void *)ArchetypeDB_PropertyValueMap_findOrInsertFirst(&version);
  piVar3 = ArchetypeDB_idVector_lowerBound(this_00,vec,(int *)ppvVar5,unaff_EBP);
  if ((*piVar3 == 0) || (*piVar3 != iVar2)) {
    FUN_00d83c2d();
  }
  if (piVar3[1] == uVar1) {
    archetype = (void *)FUN_013795c0();
    ppvVar5 = &archetype;
    ArchetypeDB_PropertyValueMap_findOrInsertFirst(&version);
    puVar4 = (undefined4 *)ArchetypeDB_idVector_getMappedValuePtr((int *)ppvVar5);
    *puVar4 = this;
  }
  return;
}

