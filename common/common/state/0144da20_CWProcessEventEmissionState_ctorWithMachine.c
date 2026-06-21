// addr: 0x0144da20
// name: CWProcessEventEmissionState_ctorWithMachine
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWProcessEventEmissionState_ctorWithMachine(void * this, void *
   machine) */

void * __thiscall CWProcessEventEmissionState_ctorWithMachine(void *this,void *machine)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CWProcessEventEmissionState with a base/machine argument, installs
                       vftable, and assigns the state name string. Evidence is vftable and string.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169b038;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ProcessEventEmissionState_copy_ctor(this,machine);
  local_4 = 0;
  *(undefined ***)this = CWProcessEventEmissionState::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "CWProcessEventEmissionState",0x1b);
  ExceptionList = local_c;
  return this;
}

