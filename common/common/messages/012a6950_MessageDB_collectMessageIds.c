// addr: 0x012a6950
// name: MessageDB_collectMessageIds
// subsystem: common/common/messages
// source (binary assert): common/common/messages/MessageDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool MessageDB_collectMessageIds(void * outIds, int version_) */

bool __thiscall MessageDB_collectMessageIds(void *this,void *outIds,int version_)

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
  
                    /* Ensures the version is loaded, walks the message-name map for that version,
                       and appends each record id to the output vector. It rejects version -1. */
  iVar4 = version_;
  if (version_ == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\messages\\MessageDB.cpp",100);
  }
  MessageDB_openStorageForVersion(this,iVar4);
  iStack_20 = RuleSetNameMap_findOrInsert(&version_);
  iStack_1c = **(int **)(iStack_20 + 4);
  while( true ) {
    iVar5 = iStack_1c;
    iVar4 = iStack_20;
    iVar6 = RuleSetNameMap_findOrInsert(&version_);
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
    uVar1 = *(uint *)((int)outIds + 4);
    if ((uVar1 == 0) ||
       ((uint)((int)(*(int *)((int)outIds + 0xc) - uVar1) >> 2) <=
        (uint)((int)(*(int *)((int)outIds + 8) - uVar1) >> 2))) {
      uVar3 = *(uint *)((int)outIds + 8);
      if (uVar3 < uVar1) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc
                (auStack_10,outIds,uVar3,(undefined4 *)(iVar5 + 0xc));
      StdRbTreeIterator32_advance(&iStack_20);
    }
    else {
      puVar2 = *(undefined4 **)((int)outIds + 8);
      *puVar2 = *(undefined4 *)(iVar5 + 0xc);
      *(undefined4 **)((int)outIds + 8) = puVar2 + 1;
      StdRbTreeIterator32_advance(&iStack_20);
    }
  }
  return true;
}

