// addr: 0x0131bda0
// name: FUN_0131bda0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_0131bda0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *_Memory;
  int iVar4;
  int iVar5;
  int iStack_8;
  int iStack_4;
  
                    /* Resets a manager-like object by releasing an active virtual object, clearing
                       a vector range, then clearing a tree of owned entries. */
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x1d4))(*(undefined4 *)(param_1 + 0x10));
    (**(code **)(**(int **)(param_1 + 0xc) + 0x94))();
    (**(code **)(**(int **)(param_1 + 0xc) + 0x98))();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  uVar1 = *(uint *)(param_1 + 0x28);
  if (uVar1 < *(uint *)(param_1 + 0x24)) {
    FUN_00d83c2d();
  }
  uVar2 = *(uint *)(param_1 + 0x24);
  if (*(uint *)(param_1 + 0x28) < uVar2) {
    FUN_00d83c2d();
  }
  FUN_0041f5e6(&iStack_8,param_1 + 0x20,uVar2,param_1 + 0x20,uVar1);
  iStack_4 = **(int **)(param_1 + 0x18);
  iStack_8 = param_1 + 0x14;
  while( true ) {
    iVar5 = iStack_4;
    iVar4 = iStack_8;
    iVar3 = *(int *)(param_1 + 0x18);
    if ((iStack_8 == 0) || (iStack_8 != param_1 + 0x14)) {
      FUN_00d83c2d();
    }
    if (iVar5 == iVar3) break;
    if (iVar4 == 0) {
      FUN_00d83c2d();
    }
    if (iVar5 == *(int *)(iVar4 + 4)) {
      FUN_00d83c2d();
    }
    if (*(int *)(iVar5 + 0x10) != 0) {
      if (iVar5 == *(int *)(iVar4 + 4)) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)(iVar5 + 0x10) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(iVar5 + 0x10))(1);
      }
    }
    FUN_0131b540();
  }
  _Memory = *(void **)(*(int *)(param_1 + 0x18) + 4);
  if (*(char *)((int)_Memory + 0x15) == '\0') {
    FUN_0131b9c0(*(undefined4 *)((int)_Memory + 8));
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(int *)(*(int *)(param_1 + 0x18) + 4) = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(int *)(*(int *)(param_1 + 0x18) + 8) = *(int *)(param_1 + 0x18);
  return;
}

