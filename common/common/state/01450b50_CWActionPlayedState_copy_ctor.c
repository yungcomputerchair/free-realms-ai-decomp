// addr: 0x01450b50
// name: CWActionPlayedState_copy_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWActionPlayedState_copy_ctor(void * this, void * other) */

void * __thiscall CWActionPlayedState_copy_ctor(void *this,void *other)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a CWActionPlayedState, installing the vtable, zeroing extra
                       fields, and assigning the state name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169b688;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ActionPlayedState_copy_ctor(this,other);
  local_4 = 0;
  *(undefined ***)this = CWActionPlayedState::vftable;
  *(undefined4 *)((int)this + 0x19c) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "CWActionPlayedState",0x13);
  *(undefined1 *)((int)this + 0x1a0) = 0;
  ExceptionList = local_c;
  return this;
}

