// addr: 0x0147aaa0
// name: FUN_0147aaa0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __fastcall FUN_0147aaa0(int param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds a temporary helper/context, validates an indexed collection at
                       this+0x10c/0x110, and returns FUN_012faa80 on field this+0xe8. Exact state
                       method is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a0008;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  FUN_013815c0(2);
  FUN_012fa910(uVar1);
  local_4 = 0;
  if (*(int *)(param_1 + 0x10c) == 0) {
    FUN_00d83c2d();
  }
  if (*(uint *)(*(int *)(param_1 + 0x10c) + 8) <= *(uint *)(param_1 + 0x110)) {
    FUN_00d83c2d();
  }
  uVar1 = CommandObjectList_evaluateToValueData
                    ((void *)**(undefined4 **)(param_1 + 0x110),*(void **)(param_1 + 0xe8));
  local_4 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_c;
  return uVar1 & 0xff;
}

