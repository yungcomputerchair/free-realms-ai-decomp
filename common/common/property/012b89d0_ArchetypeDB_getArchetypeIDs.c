// addr: 0x012b89d0
// name: ArchetypeDB_getArchetypeIDs
// subsystem: common/common/property
// source (binary assert): common/common/property/ArchetypeDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ArchetypeDB_getArchetypeIDs(void * outIDs, int version) */

bool __thiscall ArchetypeDB_getArchetypeIDs(void *this,void *outIDs,int version)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 auStack_8 [8];
  
                    /* Ensures the ArchetypeDB data for the requested version is loaded, then walks
                       the archetype map and appends each key/ID into the output vector. It asserts
                       version is not -1 and uses ArchetypeDB.cpp map begin/end helpers. */
  iVar4 = version;
  if (version == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\ArchetypeDB.cpp",0x2c7);
  }
  ArchetypeDB_openStorageForVersion(this,iVar4);
  iVar4 = ArchetypeDB_PropertyValueMap_findOrInsertSecond(&version);
  puVar6 = *(undefined4 **)(iVar4 + 4);
  if (*(undefined4 **)(iVar4 + 8) < puVar6) {
    FUN_00d83c2d();
  }
  while( true ) {
    iVar5 = ArchetypeDB_PropertyValueMap_findOrInsertSecond(&version);
    puVar1 = *(undefined4 **)(iVar5 + 8);
    if (puVar1 < *(undefined4 **)(iVar5 + 4)) {
      FUN_00d83c2d();
    }
    if (iVar4 != iVar5) {
      FUN_00d83c2d();
    }
    if (puVar6 == puVar1) break;
    if (*(undefined4 **)(iVar4 + 8) <= puVar6) {
      FUN_00d83c2d();
    }
    uVar2 = *(uint *)((int)outIDs + 4);
    if ((uVar2 == 0) ||
       ((uint)((int)(*(int *)((int)outIDs + 0xc) - uVar2) >> 2) <=
        (uint)((int)(*(int *)((int)outIDs + 8) - uVar2) >> 2))) {
      uVar3 = *(uint *)((int)outIDs + 8);
      if (uVar3 < uVar2) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(auStack_8,outIDs,uVar3,puVar6);
    }
    else {
      puVar1 = *(undefined4 **)((int)outIDs + 8);
      *puVar1 = *puVar6;
      *(undefined4 **)((int)outIDs + 8) = puVar1 + 1;
    }
    if (*(undefined4 **)(iVar4 + 8) <= puVar6) {
      FUN_00d83c2d();
    }
    puVar6 = puVar6 + 4;
  }
  return true;
}

