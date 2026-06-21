// addr: 0x014ace40
// name: SynchronizationCommand_RespondAttachHolocron_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void SynchronizationCommand_RespondAttachHolocron_registerFactory(void) */

void SynchronizationCommand_RespondAttachHolocron_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers SynchronizationCommand_RespondAttachHolocron with the component
                       factory under command/type id 0x23c, pairing the id with its allocator and
                       then finalizing the registration. */
  factoryFn = FUN_014acde0;
  typeId_ = 0x23c;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

