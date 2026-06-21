// addr: 0x0147c9f0
// name: CancellableStateMachineState_ctorWithMachine
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
CancellableStateMachineState_ctorWithMachine(undefined4 *param_1,void *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CancellableStateMachineState with a state machine/context
                       argument, sets the vtable and name, and clears its cancellable member. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a02f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  StateMachineState_ctor(param_1,param_2);
  local_4 = 0;
  *param_1 = CancellableStateMachineState::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 7),
             "CancellableStateMachineState",0x1c);
  param_1[0x3d] = 0;
  ExceptionList = local_c;
  return param_1;
}

