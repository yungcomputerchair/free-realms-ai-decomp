// addr: 0x01463c00
// name: ReshuffleState_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ReshuffleState_ctor(void * this) */

void * __fastcall ReshuffleState_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a ReshuffleState by constructing the StateMachineState base,
                       installing its vtable, and assigning the state name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169d7f6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = ReshuffleState::vftable;
  *(undefined4 *)((int)this + 0x110) = 0xf;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined1 *)((int)this + 0xfc) = 0;
  local_4 = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "ReshuffleState",0xe);
  ExceptionList = local_c;
  return this;
}

