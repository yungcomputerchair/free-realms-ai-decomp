// addr: 0x014ad1a0
// name: SynchronizationCommand_UnlockTournament_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void SynchronizationCommand_UnlockTournament_registerFactory(void) */

void SynchronizationCommand_UnlockTournament_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers SynchronizationCommand_UnlockTournament with the component factory
                       under command/type id 0x1dd, pairing the id with its allocator and then
                       finalizing the registration. */
  factoryFn = SynchronizationCommand_UnlockTournament_create;
  typeId_ = 0x1dd;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

