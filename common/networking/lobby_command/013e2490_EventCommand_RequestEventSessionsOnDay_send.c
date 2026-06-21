// addr: 0x013e2490
// name: EventCommand_RequestEventSessionsOnDay_send
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EventCommand_RequestEventSessionsOnDay_send(undefined4 day_, undefined4
   month_, undefined4 year_) */

void EventCommand_RequestEventSessionsOnDay_send(int day_,int month_,int year_)

{
  uint uVar1;
  int iVar2;
  void *handle;
  undefined1 local_28 [8];
  int local_20;
  int local_1c;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds and sends an EventCommand_RequestEventSessionsOnDay with three
                       date/session fields and the current display action id. Evidence is
                       ctor/setField8/setFieldC/setField10, EventCommand_setDisplayActionId, and
                       command-handle release. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168d278;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  local_20 = day_;
  local_1c = month_;
  local_18 = year_;
  FUN_013e2220(local_28,&local_20);
  DisplayActionManager_ensureSingleton();
  iVar2 = FUN_012d08e0(uVar1);
  if (iVar2 != 0) {
    EventCommand_RequestEventSessionsOnDay_ctor(&local_20);
    local_4 = 0;
    uVar1 = FUN_013a3480();
    EventCommand_setDisplayActionId(&local_20,uVar1);
    EventCommand_RequestEventSessionsOnDay_setField8(&local_20,day_);
    EventCommand_RequestEventSessionsOnDay_setFieldC(&local_20,month_);
    EventCommand_RequestEventSessionsOnDay_setField10(&local_20,year_);
    DisplayActionManager_ensureSingleton();
    CommandHandle_releaseIfPresent(handle);
    local_4 = 0xffffffff;
    EventCommand_RequestEventSessionsOnDay_dtor(&local_20);
  }
  ExceptionList = local_c;
  return;
}

