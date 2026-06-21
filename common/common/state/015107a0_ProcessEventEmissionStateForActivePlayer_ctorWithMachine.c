// addr: 0x015107a0
// name: ProcessEventEmissionStateForActivePlayer_ctorWithMachine
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ProcessEventEmissionStateForActivePlayer_ctorWithMachine(void * this,
   void * machine) */

void * __thiscall ProcessEventEmissionStateForActivePlayer_ctorWithMachine(void *this,void *machine)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs ProcessEventEmissionStateForActivePlayer with a base/machine
                       argument, installs vftable, initializes fields, and assigns the state name.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b68d4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctorWithMachine(machine);
  *(undefined ***)this = ProcessEventEmissionStateForActivePlayer::vftable;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  local_4 = 2;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "ProcessEventEmissionState",0x19);
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined1 *)((int)this + 0x130) = 0;
  *(undefined1 *)((int)this + 0x138) = 1;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined1 *)((int)this + 0x131) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  ExceptionList = local_c;
  return this;
}

