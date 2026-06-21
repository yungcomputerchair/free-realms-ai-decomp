// addr: 0x01475890
// name: DiscardCardState_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall DiscardCardState_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Default-constructs DiscardCardState: calls the cancellable state base ctor,
                       installs DiscardCardState::vftable, sets the state name string, and zeros its
                       fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169f776;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  *param_1 = DiscardCardState::vftable;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  local_4 = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 7),
             "DiscardCardState",0x10);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x42] = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined1 *)((int)param_1 + 0x10d) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x41] = 0;
  ExceptionList = local_c;
  return param_1;
}

