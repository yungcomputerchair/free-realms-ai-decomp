// addr: 0x01467c00
// name: PlayCardState_copy_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PlayCardState_copy_ctor(void * this, void * other) */

void * __thiscall PlayCardState_copy_ctor(void *this,void *other)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a PlayCardState and assigns its vtable and state name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169e068;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctorWithMachine(other);
  local_4 = 0;
  *(undefined ***)this = PlayCardState::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "PlayCardState",0xd);
  *(undefined1 *)((int)this + 0xf8) = 0;
  *(undefined1 *)((int)this + 0xf9) = 0;
  ExceptionList = local_c;
  return this;
}

