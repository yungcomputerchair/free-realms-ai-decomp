// addr: 0x0144eaf0
// name: CWHandleResponseState_ctorWithMachine
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWHandleResponseState_ctorWithMachine(void * this, void * machine) */

void * __thiscall CWHandleResponseState_ctorWithMachine(void *this,void *machine)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CWHandleResponseState with a base/machine argument, installs
                       vftable, and assigns the state name string. Evidence is vftable and string.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169b328;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  HandleResponseState_copy_ctor(this,machine);
  local_4 = 0;
  *(undefined ***)this = CWHandleResponseState::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "CWHandleResponseState",0x15);
  ExceptionList = local_c;
  return this;
}

