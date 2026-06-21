// addr: 0x014700b0
// name: GetSimultaneousTargetState_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GetSimultaneousTargetState_ctor(void * this) */

void * __fastcall GetSimultaneousTargetState_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs GetSimultaneousTargetState, initializes base cancellable state and
                       helper members, installs vftable, and assigns name string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169eda4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *(undefined ***)this = GetSimultaneousTargetState::vftable;
  FUN_01247380();
  local_4._0_1_ = 1;
  FUN_005258fb();
  local_4 = CONCAT31(local_4._1_3_,2);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "GetSimultaneousTargetState",0x1a);
  ExceptionList = local_c;
  return this;
}

