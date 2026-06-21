// addr: 0x0152b250
// name: UChatCommand_RequestRemoveFriend_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UChatCommand_RequestRemoveFriend_registerFactory(void) */

void UChatCommand_RequestRemoveFriend_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory constructor for
                       UChatCommand_RequestRemoveFriend. It associates the class's allocation thunk
                       with its component id. */
  factoryFn = UChatCommand_RequestRemoveFriend_create;
  typeId_ = 0x1ee;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

