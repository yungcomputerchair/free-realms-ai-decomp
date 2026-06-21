// addr: 0x015154e0
// name: IntroduceCardState_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * IntroduceCardState_ctor(void * this) */

void * __fastcall IntroduceCardState_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs IntroduceCardState, installs vftable, and assigns the state name
                       string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b71c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *(undefined ***)this = IntroduceCardState::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "IntroduceCardState",0x12);
  ExceptionList = local_c;
  return this;
}

