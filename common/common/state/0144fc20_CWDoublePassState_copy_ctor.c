// addr: 0x0144fc20
// name: CWDoublePassState_copy_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWDoublePassState_copy_ctor(void * this, void * other) */

void * __thiscall CWDoublePassState_copy_ctor(void *this,void *other)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a CWDoublePassState from another instance, then installs its
                       vtable and state name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169b568;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CWDoublePassState_ctor(other);
  local_4 = 0;
  *(undefined ***)this = CWDoublePassState::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "CWDoublePassState",0x11);
  ExceptionList = local_c;
  return this;
}

