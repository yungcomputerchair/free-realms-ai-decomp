// addr: 0x01475230
// name: DoublePassState_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DoublePassState_ctor(void * this) */

void * __fastcall DoublePassState_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a DoublePassState, initializing the cancellable/base state,
                       internal lists, vtable, name, and default flags. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169f654;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *(undefined ***)this = DoublePassState::vftable;
  FUN_0129d6c0();
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  local_4 = CONCAT31((int3)((uint)local_4 >> 8),2);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "DoublePassState",0xf);
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined1 *)((int)this + 0x124) = 1;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  ExceptionList = local_c;
  return this;
}

