// addr: 0x013bcc80
// name: UChatCommand_RequestIgnoreStatus_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UChatCommand_RequestIgnoreStatus_registerFactory(void) */

void UChatCommand_RequestIgnoreStatus_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the factory callback for UChatCommand_RequestIgnoreStatus. The
                       callback allocates 0x54 bytes and constructs the command. */
  factoryFn = FUN_013bcc20;
  typeId_ = 0x1ed;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

