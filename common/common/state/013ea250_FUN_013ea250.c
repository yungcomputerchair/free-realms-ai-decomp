// addr: 0x013ea250
// name: FUN_013ea250
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_013ea250(void)

{
  void *handle;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Generic library/game/deserialization helper with insufficient state-method
                       evidence; body is container manipulation, factory/display-action setup,
                       account/lobby lookup, or broad game utility logic. */
  puStack_8 = &LAB_0168e5e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  DisplayActionManager_ensureSingleton();
  LobbyCommand_Concede_ctor(local_28);
  local_4._0_1_ = 1;
  CommandHandle_releaseIfPresent(handle);
  DisplayActionManager_scheduleTimedAction(0,0,0xffffffff,0);
  local_4 = (uint)local_4._1_3_ << 8;
  LobbyCommand_Concede_dtor(local_28);
  local_4 = 0xffffffff;
  FUN_013e9bd0();
  ExceptionList = local_c;
  return;
}

