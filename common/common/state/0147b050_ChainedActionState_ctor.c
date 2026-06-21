// addr: 0x0147b050
// name: ChainedActionState_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall ChainedActionState_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Default-constructs ChainedActionState, including embedded containers, then
                       assigns the state name and clears state/action-chain fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a0100;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  *param_1 = ChainedActionState::vftable;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  local_4._1_3_ = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  local_4._0_1_ = 3;
  FUN_012fa910();
  local_4 = CONCAT31(local_4._1_3_,4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 7),
             "ChainedActionState",0x12);
  param_1[0x3a] = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  param_1[0x49] = 0;
  ExceptionList = local_c;
  return param_1;
}

