// addr: 0x0144fbb0
// name: CWDoublePassState_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWDoublePassState_ctor(void * this) */

void * __fastcall CWDoublePassState_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a CWDoublePassState by constructing the DoublePassState base,
                       installing its vtable, and setting the state name string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169b538;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  DoublePassState_ctor(this);
  local_4 = 0;
  *(undefined ***)this = CWDoublePassState::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "CWDoublePassState",0x11);
  ExceptionList = local_c;
  return this;
}

