// addr: 0x012bd2b0
// name: ActionDB_collectActionIds
// subsystem: common/common/property
// source (binary assert): common/common/property/ActionDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionDB_collectActionIds(void * outActionIds, int version) */

bool __thiscall ActionDB_collectActionIds(void *this,void *outActionIds,int version)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack_20;
  int iStack_1c;
  int iStack_14;
  undefined1 auStack_10 [12];
  
                    /* Validates the ActionDB version and walks the version's action-index map,
                       appending each node's stored action id/index into the caller-provided vector.
                       Evidence is the ActionDB.cpp assert 'v != -1' and the repeated vector push of
                       node+0xc values after FUN_012bccd0(version). */
  iVar4 = version;
  if (version == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\ActionDB.cpp",0x1fd);
  }
  ActionDB_openStorageForVersion(this,iVar4);
  iStack_20 = RuleSetNameMap_findOrInsert(&version);
  iStack_1c = **(int **)(iStack_20 + 4);
  while( true ) {
    iVar5 = iStack_1c;
    iVar4 = iStack_20;
    iVar6 = RuleSetNameMap_findOrInsert(&version);
    iStack_14 = *(int *)(iVar6 + 4);
    if ((iVar4 == 0) || (iVar4 != iVar6)) {
      FUN_00d83c2d();
    }
    if (iVar5 == iStack_14) break;
    if (iVar4 == 0) {
      FUN_00d83c2d();
    }
    if (iVar5 == *(int *)(iVar4 + 4)) {
      FUN_00d83c2d();
    }
    uVar1 = *(uint *)((int)outActionIds + 4);
    if ((uVar1 == 0) ||
       ((uint)((int)(*(int *)((int)outActionIds + 0xc) - uVar1) >> 2) <=
        (uint)((int)(*(int *)((int)outActionIds + 8) - uVar1) >> 2))) {
      uVar3 = *(uint *)((int)outActionIds + 8);
      if (uVar3 < uVar1) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc
                (auStack_10,outActionIds,uVar3,(undefined4 *)(iVar5 + 0xc));
      StdRbTreeIterator32_advance(&iStack_20);
    }
    else {
      puVar2 = *(undefined4 **)((int)outActionIds + 8);
      *puVar2 = *(undefined4 *)(iVar5 + 0xc);
      *(undefined4 **)((int)outActionIds + 8) = puVar2 + 1;
      StdRbTreeIterator32_advance(&iStack_20);
    }
  }
  return true;
}

