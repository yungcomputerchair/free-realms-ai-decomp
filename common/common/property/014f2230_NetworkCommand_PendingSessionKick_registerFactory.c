// addr: 0x014f2230
// name: NetworkCommand_PendingSessionKick_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void NetworkCommand_PendingSessionKick_registerFactory(void) */

void NetworkCommand_PendingSessionKick_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the NetworkCommand_PendingSessionKick factory callback under type
                       id 0x1fc. */
  factoryFn = NetworkCommand_PendingSessionKick_create;
  typeId_ = 0x1fc;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

