// addr: 0x01440bf0
// name: UChatCommand_RequestRemoveIgnore_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UChatCommand_RequestRemoveIgnore_registerFactory(void) */

void UChatCommand_RequestRemoveIgnore_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the UChatCommand_RequestRemoveIgnore component factory for id 0x1ef
                       by passing its allocator thunk to ComponentFactory_initSingleton and the
                       secondary registration helper. */
  factoryFn = FUN_01440b90;
  typeId_ = 0x1ef;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

