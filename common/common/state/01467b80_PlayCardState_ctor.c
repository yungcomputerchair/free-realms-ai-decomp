// addr: 0x01467b80
// name: PlayCardState_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PlayCardState_ctor(void * this) */

void * __fastcall PlayCardState_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a PlayCardState by constructing the base state, installing its
                       vtable, and setting the state name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169e038;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
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

