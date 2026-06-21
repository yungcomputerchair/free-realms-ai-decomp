// addr: 0x012c1380
// name: SynchronizationService_sendUpdateCommand
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void SynchronizationService_sendUpdateCommand(void) */

void SynchronizationService_sendUpdateCommand(void)

{
  void *handle;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a temporary SynchronizationCommand_Update, sends/releases it, then
                       runs its destructor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166e398;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SynchronizationCommand_Update_ctor(DAT_01b839d8 ^ (uint)local_14);
  local_4 = 0;
  DisplayActionManager_ensureSingleton();
  CommandHandle_releaseIfPresent(handle);
  local_4 = 0xffffffff;
  SynchronizationCommand_Update_dtor(local_14);
  ExceptionList = local_c;
  return;
}

