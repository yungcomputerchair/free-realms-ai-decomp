// addr: 0x01356600
// name: FUN_01356600
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_01356600(int param_1,undefined4 param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds or assigns an output object from the signed integer at this+100,
                       clamping negative values to zero before passing it to a constructor/helper at
                       012cd3c0. The owning class and output type are not evident. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167d939;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  formatIntToString(param_2,iVar1,DAT_01b839d8 ^ (uint)&stack0xffffffec);
  ExceptionList = local_c;
  return param_2;
}

