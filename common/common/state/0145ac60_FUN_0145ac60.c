// addr: 0x0145ac60
// name: FUN_0145ac60
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __fastcall FUN_0145ac60(int param_1)

{
  uint uVar1;
  void *env;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169c9c8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  FUN_013815c0(2);
  FUN_012fa910(uVar1);
  local_4 = 0;
  uVar1 = CommandObjectList_evaluateToValueData((void *)(param_1 + 0xfc),env);
  local_4 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_c;
  return uVar1 & 0xff;
}

