// addr: 0x01470160
// name: GetSimultaneousTargetState_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GetSimultaneousTargetState_ctor(void * this, undefined4 arg_) */

void * __thiscall GetSimultaneousTargetState_ctor(void *this,undefined4 arg_)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs GetSimultaneousTargetState, initializes its base state, installs
                       the vtable, initializes string members, and assigns the state name string.
                       Evidence is GetSimultaneousTargetState::vftable and referenced string
                       "GetSimultaneousTargetState". */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169ede4;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctorWithMachine(arg_);
  local_4 = 0;
  *(undefined ***)this = GetSimultaneousTargetState::vftable;
  FUN_01247380(uVar1);
  local_4._0_1_ = 1;
  FUN_005258fb();
  local_4 = CONCAT31(local_4._1_3_,2);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "GetSimultaneousTargetState",0x1a);
  ExceptionList = local_c;
  return this;
}

