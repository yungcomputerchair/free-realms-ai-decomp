// addr: 0x013dfd00
// name: EventCommand_dispatchDontPlayIfAvailable_alt
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EventCommand_dispatchDontPlayIfAvailable_alt(void) */

void EventCommand_dispatchDontPlayIfAvailable_alt(void)

{
  uint uVar1;
  int iVar2;
  void *handle;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Duplicate-shaped helper that dispatches EventCommand_SendDontPlay when the
                       display action manager is available, then releases the temporary command
                       handle. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168d0c8;
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

