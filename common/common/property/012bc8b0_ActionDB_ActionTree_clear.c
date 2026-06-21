// addr: 0x012bc8b0
// name: ActionDB_ActionTree_clear
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActionDB_ActionTree_clear(void * tree) */

void __fastcall ActionDB_ActionTree_clear(void *tree)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Memory;
  int iVar4;
  int local_10;
  int local_c;
  
                    /* Destroys and clears all nodes in the ActionDB action tree. */
  iVar1 = **(int **)((int)tree + 0x2c);
  while( true ) {
    iVar2 = *(int *)((int)tree + 0x2c);
    if (tree == (void *)0xffffffd8) {
      FUN_00d83c2d();
    }
    if (iVar1 == iVar2) {
      FUN_012bc4a0(*(undefined4 *)(*(int *)((int)tree + 0x2c) + 4));
      *(int *)(*(int *)((int)tree + 0x2c) + 4) = *(int *)((int)tree + 0x2c);
      *(undefined4 *)((int)tree + 0x30) = 0;
      *(undefined4 *)*(undefined4 *)((int)tree + 0x2c) = *(undefined4 *)((int)tree + 0x2c);
      *(int *)(*(int *)((int)tree + 0x2c) + 8) = *(int *)((int)tree + 0x2c);
      return;
    }
    if (tree == (void *)0xffffffd8) {
      FUN_00d83c2d();
    }
    if (iVar1 == *(int *)((int)tree + 0x2c)) {
      FUN_00d83c2d();
    }
    local_c = **(int **)(iVar1 + 0x14);
    local_10 = iVar1 + 0x10;
    while( true ) {
      iVar4 = local_c;
      iVar2 = local_10;
      if (iVar1 == *(int *)((int)tree + 0x2c)) {
        FUN_00d83c2d();
      }
      iVar3 = *(int *)(iVar1 + 0x14);
      if ((iVar2 == 0) || (iVar2 != iVar1 + 0x10)) {
        FUN_00d83c2d();
      }
      if (iVar4 == iVar3) break;
      if (iVar2 == 0) {
        FUN_00d83c2d();
      }
      if (iVar4 == *(int *)(iVar2 + 4)) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)(iVar4 + 0x10) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(iVar4 + 0x10))(1);
      }
      PropertyTreeIterator15_increment(&local_10);
    }
    if (iVar1 == *(int *)((int)tree + 0x2c)) {
      FUN_00d83c2d();
    }
    _Memory = *(void **)(*(int *)(iVar1 + 0x14) + 4);
    if (*(char *)((int)_Memory + 0x15) == '\0') break;
    *(int *)(*(int *)(iVar1 + 0x14) + 4) = *(int *)(iVar1 + 0x14);
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)*(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar1 + 0x14);
    *(int *)(*(int *)(iVar1 + 0x14) + 8) = *(int *)(iVar1 + 0x14);
    FUN_012ba770();
  }
  FUN_012bab20(*(undefined4 *)((int)_Memory + 8));
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}

