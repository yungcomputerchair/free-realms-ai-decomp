// addr: 0x0144d1e0
// name: CWStartOfGameState_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWStartOfGameState_ctor(void * this) */

void * __fastcall CWStartOfGameState_ctor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CWStartOfGameState, installs vftable, initializes members, and
                       assigns state name string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169ae66;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  StateMachineState_ctor(this);
  local_4 = 0;
  *(undefined ***)this = CWStartOfGameState::vftable;
  *(undefined4 *)((int)this + 0xf4) = 0;
  FUN_0129d6c0(uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "CWStartOfGameState",0x12);
  ExceptionList = local_c;
  return this;
}

