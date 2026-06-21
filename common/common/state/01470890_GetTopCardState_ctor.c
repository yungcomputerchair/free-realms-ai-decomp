// addr: 0x01470890
// name: GetTopCardState_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GetTopCardState_ctor(void * this) */

void * __fastcall GetTopCardState_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GetTopCardState by constructing the base state, installing its
                       vtable, and assigning the state name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169ef08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *(undefined ***)this = GetTopCardState::vftable;
  *(undefined4 *)((int)this + 0xf8) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "GetTopCardState",0xf);
  ExceptionList = local_c;
  return this;
}

