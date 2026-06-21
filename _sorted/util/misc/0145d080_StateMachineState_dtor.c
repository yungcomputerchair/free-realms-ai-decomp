// addr: 0x0145d080
// name: StateMachineState_dtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall StateMachineState_dtor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Destructor/cleanup for StateMachineState: installs vtable, frees several
                       string/vector members, clears state fields, and runs base cleanups. */
  puStack_8 = &LAB_0169cd46;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *param_1 = StateMachineState::vftable;
  param_1[2] = 0;
  param_1[0x3a] = 0;
  local_4 = 6;
  if (0xf < (uint)param_1[0x37]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x32]);
  }
  param_1[0x37] = 0xf;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  local_4 = 5;
  if (0xf < (uint)param_1[0x30]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x2b]);
  }
  param_1[0x30] = 0xf;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  local_4 = 4;
  if (0xf < (uint)param_1[0x29]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x24]);
  }
  param_1[0x29] = 0xf;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  MessageText_dtor(uVar1);
  local_4._0_1_ = 2;
  MessageText_dtor();
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0xf < (uint)param_1[0x14]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xf]);
  }
  param_1[0x14] = 0xf;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < (uint)param_1[0xd]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[8]);
  }
  param_1[0xd] = 0xf;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = PersistentComponent::vftable;
  *param_1 = PersistentBase::vftable;
  ExceptionList = local_c;
  return;
}

