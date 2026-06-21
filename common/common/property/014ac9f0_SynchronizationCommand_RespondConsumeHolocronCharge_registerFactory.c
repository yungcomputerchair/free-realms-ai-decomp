// addr: 0x014ac9f0
// name: SynchronizationCommand_RespondConsumeHolocronCharge_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void SynchronizationCommand_RespondConsumeHolocronCharge_registerFactory(void)
    */

void SynchronizationCommand_RespondConsumeHolocronCharge_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers SynchronizationCommand_RespondConsumeHolocronCharge with the
                       component factory under command/type id 0x23e, pairing the id with its
                       allocator and then finalizing the registration. */
  factoryFn = FUN_014ac990;
  typeId_ = 0x23e;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

