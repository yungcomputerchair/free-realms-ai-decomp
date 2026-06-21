// addr: 0x01475950
// name: DiscardCardState_ctorWithMachine
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall DiscardCardState_ctorWithMachine(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs DiscardCardState with a state machine/context argument, then
                       installs DiscardCardState::vftable and initializes its name and members. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169f7b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctorWithMachine(param_2);
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

