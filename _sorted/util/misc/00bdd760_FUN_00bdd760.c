// addr: 0x00bdd760
// name: FUN_00bdd760
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00bdd760(int param_1,int param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SoeUtil::Array resize/ensure-size helper for ClientProgressiveQuestSlot-like
                       0x24-byte elements; grows storage and updates count. No exact method
                       evidence. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015ef8f1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_00bdd3a0(param_2,1);
  }
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = param_2;
  if (iVar1 < param_2) {
    param_2 = param_2 - iVar1;
    do {
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  ExceptionList = local_c;
  return;
}

