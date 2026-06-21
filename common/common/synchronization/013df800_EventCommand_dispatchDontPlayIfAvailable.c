// addr: 0x013df800
// name: EventCommand_dispatchDontPlayIfAvailable
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EventCommand_dispatchDontPlayIfAvailable(void) */

void EventCommand_dispatchDontPlayIfAvailable(void)

{
  uint uVar1;
  int iVar2;
  void *handle;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* If the DisplayActionManager/service is available, constructs an
                       EventCommand_SendDontPlay, wraps it in a command handle, dispatches it, and
                       releases the handle. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168cfe8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  DisplayActionManager_ensureSingleton();
  iVar2 = FUN_012d08e0(uVar1);
  if (iVar2 != 0) {
    EventCommand_SendDontPlay_ctor(local_14);
    local_4 = 0;
    uVar1 = FUN_013a3480();
    EventCommand_setDisplayActionId(local_14,uVar1);
    DisplayActionManager_ensureSingleton();
    CommandHandle_releaseIfPresent(handle);
    local_4 = 0xffffffff;
    EventCommand_SendDontPlay_dtor(local_14);
  }
  ExceptionList = local_c;
  return;
}

