// addr: 0x0147c980
// name: CancellableStateMachineState_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall CancellableStateMachineState_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Default-constructs CancellableStateMachineState by constructing the
                       StateMachineState base, installing its vtable, setting its name, and clearing
                       the cancel flag/member. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a02c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  StateMachineState_ctor(param_1);
  local_4 = 0;
  *param_1 = CancellableStateMachineState::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 7),
             "CancellableStateMachineState",0x1c);
  param_1[0x3d] = 0;
  ExceptionList = local_c;
  return param_1;
}

