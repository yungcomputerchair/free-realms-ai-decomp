// addr: 0x0140bee0
// name: SynchronizationCommand_RequestConsumeHolocronCharge_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void SynchronizationCommand_RequestConsumeHolocronCharge_registerFactory(void)
    */

void SynchronizationCommand_RequestConsumeHolocronCharge_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers SynchronizationCommand_RequestConsumeHolocronCharge with the
                       component/packet factory under type id 0x23d. The registered maker allocates
                       the class and calls the constructor for that vtable-backed type. */
  factoryFn = FUN_0140be80;
  typeId_ = 0x23d;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

