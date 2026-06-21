// addr: 0x013e7b80
// name: EventCommand_requestEventSessionInfoIfNeeded
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_requestEventSessionInfoIfNeeded(void * sessionId, bool
   alreadyRequested_) */

void EventCommand_requestEventSessionInfoIfNeeded(void *sessionId,bool alreadyRequested_)

{
  uint uVar1;
  int iVar2;
  void *handle;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* When the display action manager is available and the flag is false,
                       constructs and dispatches EventCommand_RequestEventSessionInfo for the
                       supplied id, then releases the command handle. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168dfe8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  DisplayActionManager_ensureSingleton();
  iVar2 = FUN_012d08e0(uVar1);
  if ((iVar2 != 0) && (alreadyRequested_ == false)) {
    EventCommand_RequestEventSessionInfo_ctor(local_18);
    local_4 = 0;
    uVar1 = FUN_013a3480();
    EventCommand_setDisplayActionId(local_18,uVar1);
    FUN_0144b2b0(local_18,(int)sessionId);
    DisplayActionManager_ensureSingleton();
    CommandHandle_releaseIfPresent(handle);
    FUN_0042c155(&sessionId);
    local_4 = 0xffffffff;
    EventCommand_RequestEventSessionInfo_dtor(local_18);
  }
  ExceptionList = local_c;
  return;
}

