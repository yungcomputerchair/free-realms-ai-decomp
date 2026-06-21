// addr: 0x0144ee00
// name: CWDrawCardState_copy_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWDrawCardState_copy_ctor(void * this, void * other) */

void * __thiscall CWDrawCardState_copy_ctor(void *this,void *other)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a CWDrawCardState by invoking the DrawCardState copy
                       constructor, installing the CWDrawCardState vtable, and setting the state
                       name string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169b418;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  DrawCardState_copy_ctor(this,other);
  local_4 = 0;
  *(undefined ***)this = CWDrawCardState::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "CWDrawCardState",0xf);
  ExceptionList = local_c;
  return this;
}

