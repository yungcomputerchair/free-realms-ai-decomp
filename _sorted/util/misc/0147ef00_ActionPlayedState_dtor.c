// addr: 0x0147ef00
// name: ActionPlayedState_dtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall ActionPlayedState_dtor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Destructor/cleanup for ActionPlayedState; installs vtable, frees owned
                       storage, destroys members, and runs CancellableStateMachineState cleanup. */
  puStack_8 = &LAB_016a0692;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *param_1 = ActionPlayedState::vftable;
  local_4 = 2;
  if ((void *)param_1[0x5d] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x5d]);
  }
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  MessageText_dtor(uVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  MessageText_dtor();
  local_4 = 0xffffffff;
  FUN_0147c520();
  ExceptionList = local_c;
  return;
}

