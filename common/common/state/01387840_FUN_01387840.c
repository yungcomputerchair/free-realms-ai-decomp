// addr: 0x01387840
// name: FUN_01387840
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_01387840(int param_1)

{
  char cVar1;
  uint key_;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01683470;
  local_c = ExceptionList;
  key_ = DAT_01b839d8 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    FUN_012fa910();
    local_4 = 0;
    cVar1 = FUN_013833c0(0xd,local_24);
    if (cVar1 == '\0') {
      FUN_012fa910();
      local_4._0_1_ = 1;
      param_1 = PlayElement_getId();
      FUN_01300680(6);
      FUN_0042c155(&param_1);
      param_1 = 0xd;
      EvaluationEnvironment_getOrCreateReturnValue(&param_1,key_);
      FUN_013010e0(local_18);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_01300cd0();
    }
    else {
      FUN_01300db0();
      param_1 = PlayElement_getId();
      FUN_01300680(6);
      FUN_0042c155(&param_1);
      param_1 = 0xd;
      EvaluationEnvironment_getOrCreateReturnValue(&param_1,key_);
      FUN_013010e0(local_24);
    }
    local_4 = 0xffffffff;
    FUN_01300cd0();
  }
  ExceptionList = local_c;
  return;
}

