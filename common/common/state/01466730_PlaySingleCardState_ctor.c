// addr: 0x01466730
// name: PlaySingleCardState_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PlaySingleCardState_ctor(void * this) */

void * __fastcall PlaySingleCardState_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a PlaySingleCardState by constructing the base state, installing
                       its vtable, and setting the state name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169dde6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
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

