// addr: 0x014ad650
// name: SynchronizationCommand_LockTournament_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void SynchronizationCommand_LockTournament_registerFactory(void) */

void SynchronizationCommand_LockTournament_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers SynchronizationCommand_LockTournament with the component factory
                       under command/type id 0x1dc, pairing the id with its allocator and then
                       finalizing the registration. */
  factoryFn = SynchronizationCommand_LockTournament_create;
  typeId_ = 0x1dc;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

