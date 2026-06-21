// addr: 0x01471220
// name: ExecuteRuleState_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ExecuteRuleState_ctor(void * this) */

void * __fastcall ExecuteRuleState_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an ExecuteRuleState by constructing the base state, installing its
                       vtable, and assigning the state name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169f088;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *(undefined ***)this = ExecuteRuleState::vftable;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined1 *)((int)this + 0xfc) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "ExecuteRuleState",0x10);
  ExceptionList = local_c;
  return this;
}

