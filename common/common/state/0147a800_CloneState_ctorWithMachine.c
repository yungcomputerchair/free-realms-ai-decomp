// addr: 0x0147a800
// name: CloneState_ctorWithMachine
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall CloneState_ctorWithMachine(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CloneState with a state machine/context argument, then sets
                       CloneState::vftable, name, and zeroed member fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169ff78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctorWithMachine(param_2);
  local_4 = 0;
  *param_1 = CloneState::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 7),
             "CloneState",10);
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  ExceptionList = local_c;
  return param_1;
}

