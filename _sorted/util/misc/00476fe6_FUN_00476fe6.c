// addr: 0x00476fe6
// name: FUN_00476fe6
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00476fe6(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
                    /* Releases/reset a large owner object: clears several small fields, walks a
                       container deleting nodes, releases pointers at 0x44/0x20/0x24, updates
                       manager lists, and zeros back-pointers. No class/file evidence, so left
                       unnamed. */
  FUN_00476e70(param_1 + 0x1cc);
  FUN_00476e70(param_1 + 0x1d0);
  FUN_00476e70(param_1 + 0x1c4);
  FUN_00476e70(param_1 + 0x1c8);
  FUN_00476e70(param_1 + 0x1d4);
  FUN_00476e70(param_1 + 0x1d8);
  FUN_00476e70(param_1 + 0x1dc);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffff3;
  iVar1 = param_1 + 0x34;
  FUN_0045d60b(**(undefined4 **)(param_1 + 0x38),iVar1);
  local_10 = local_18;
  local_c = local_14;
  FUN_0045d60b(*(undefined4 *)(param_1 + 0x38),iVar1);
  cVar4 = FUN_0045d134(&local_18);
  iVar3 = param_1;
  iVar2 = local_8;
  while (local_8 = iVar3, cVar4 == '\0') {
    FUN_004644df();
    FUN_004730b4(&local_8);
    FUN_0045db95();
    FUN_0045d60b(*(undefined4 *)(param_1 + 0x38),iVar1);
    cVar4 = FUN_0045d134(&local_18);
    iVar3 = local_8;
    iVar2 = local_8;
  }
  local_8 = iVar2;
  FUN_0046ad8a();
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_0046fa3f();
    if (*(int **)(param_1 + 0x44) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x44) + 0x10))(0);
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    if (*(int **)(param_1 + 0x20) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x20) + 4))(1);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_00459af8();
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    local_8 = param_1;
    FUN_0046490e(*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x48),*(int *)(param_1 + 0x40) + 0x40);
    FUN_0046490e(*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x44),*(int *)(param_1 + 0x40) + 0x40);
    uVar5 = FUN_0045ed08(local_14,local_c,&local_8);
    local_14 = uVar5;
    FUN_0046490e(*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x48),*(int *)(param_1 + 0x40) + 0x40);
    cVar4 = FUN_0045d15f(&local_10);
    if (cVar4 == '\0') {
      FUN_0046ac77(&local_18,local_18,uVar5);
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

