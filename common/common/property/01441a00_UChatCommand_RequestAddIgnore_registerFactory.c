// addr: 0x01441a00
// name: UChatCommand_RequestAddIgnore_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UChatCommand_RequestAddIgnore_registerFactory(void) */

void UChatCommand_RequestAddIgnore_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the UChatCommand_RequestAddIgnore component factory for id 0x1ea by
                       passing its allocator thunk to ComponentFactory_initSingleton and the
                       secondary registration helper. */
  factoryFn = FUN_014419a0;
  typeId_ = 0x1ea;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

