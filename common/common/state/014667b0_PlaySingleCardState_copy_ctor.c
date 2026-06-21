// addr: 0x014667b0
// name: PlaySingleCardState_copy_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PlaySingleCardState_copy_ctor(void * this, void * other) */

void * __thiscall PlaySingleCardState_copy_ctor(void *this,void *other)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a PlaySingleCardState and assigns its vtable and state name.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169de26;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctorWithMachine(other);
  *(undefined ***)this = PlaySingleCardState::vftable;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  local_4 = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "PlaySingleCardState",0x13);
  ExceptionList = local_c;
  return this;
}

