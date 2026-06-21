// addr: 0x01450ad0
// name: CWActionPlayedState_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWActionPlayedState_ctor(void * this) */

void * __fastcall CWActionPlayedState_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a CWActionPlayedState by constructing the ActionPlayedState base,
                       installing its vtable, zeroing its extra fields, and setting the state name.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169b658;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ActionPlayedState_ctor(this);
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

