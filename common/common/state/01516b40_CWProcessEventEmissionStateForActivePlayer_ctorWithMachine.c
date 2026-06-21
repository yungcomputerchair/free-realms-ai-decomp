// addr: 0x01516b40
// name: CWProcessEventEmissionStateForActivePlayer_ctorWithMachine
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWProcessEventEmissionStateForActivePlayer_ctorWithMachine(void * this,
   void * machine) */

void * __thiscall
CWProcessEventEmissionStateForActivePlayer_ctorWithMachine(void *this,void *machine)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CWProcessEventEmissionStateForActivePlayer with a base/machine
                       argument, installs vftable, and assigns the state name string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b7728;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ProcessEventEmissionStateForActivePlayer_ctorWithMachine(this,machine);
  local_4 = 0;
  *(undefined ***)this = CWProcessEventEmissionStateForActivePlayer::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "CWProcessEventEmissionStateForActivePlayer",0x2a);
  ExceptionList = local_c;
  return this;
}

