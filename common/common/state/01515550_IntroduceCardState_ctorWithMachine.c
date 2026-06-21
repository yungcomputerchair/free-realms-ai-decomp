// addr: 0x01515550
// name: IntroduceCardState_ctorWithMachine
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * IntroduceCardState_ctorWithMachine(void * this, void * machine) */

void * __thiscall IntroduceCardState_ctorWithMachine(void *this,void *machine)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs IntroduceCardState with a base/machine argument, installs vftable,
                       and assigns the state name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b71f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctorWithMachine(machine);
  local_4 = 0;
  *(undefined ***)this = IntroduceCardState::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "IntroduceCardState",0x12);
  ExceptionList = local_c;
  return this;
}

