// addr: 0x0144d280
// name: CWStartOfGameState_ctorWithMachine
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWStartOfGameState_ctorWithMachine(void * this, void * machine) */

void * __thiscall CWStartOfGameState_ctorWithMachine(void *this,void *machine)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CWStartOfGameState with a machine/base argument, installs vftable,
                       initializes members, and assigns state name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169aea6;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  StateMachineState_ctor(this,machine);
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

