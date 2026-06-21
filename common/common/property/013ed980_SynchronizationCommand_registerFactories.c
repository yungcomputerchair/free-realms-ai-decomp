// addr: 0x013ed980
// name: SynchronizationCommand_registerFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void SynchronizationCommand_registerFactories(void) */

void SynchronizationCommand_registerFactories(void)

{
                    /* Registers all SynchronizationCommand factory classes. */
  SynchronizationCommand_registerFactory();
  SynchronizationCommand_AddNonTradable_registerFactory();
  SynchronizationCommand_Complete_registerFactory();
  SynchronizationCommand_ProcessBulkFulfillment_registerFactory();
  SynchronizationCommand_ProcessFulfillment_registerFactory();
  SynchronizationCommand_RemoveInstances_registerFactory();
  SynchronizationCommand_RemoveNonTradable_registerFactory();
  SynchronizationCommand_SendInstances_registerFactory();
  SynchronizationCommand_SetDesired_registerFactory();
  SynchronizationCommand_SetModID_registerFactory();
  SynchronizationCommand_Start_registerFactory();
  SynchronizationCommand_StartDelivery_registerFactory();
  SynchronizationCommand_StartInstances_registerFactory();
  SynchronizationCommand_Update_registerFactory();
  SynchronizationCommand_ChangeFlags_registerFactory();
  SynchronizationCommand_LockTournament_registerFactory();
  SynchronizationCommand_UnlockTournament_registerFactory();
  SynchronizationCommand_RequestAttachHolocron_registerFactory();
  SynchronizationCommand_RespondAttachHolocron_registerFactory();
  SynchronizationCommand_RequestConsumeHolocronCharge_registerFactory();
  SynchronizationCommand_RespondConsumeHolocronCharge_registerFactory();
  return;
}

