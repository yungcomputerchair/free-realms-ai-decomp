// addr: 0x014405b0
// name: UChatCommand_RequestRemoveFriendReciprocate_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UChatCommand_RequestRemoveFriendReciprocate_registerFactory(void) */

void UChatCommand_RequestRemoveFriendReciprocate_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the UChatCommand_RequestRemoveFriendReciprocate component factory
                       for id 0x1ff by passing its allocator thunk to ComponentFactory_initSingleton
                       and the secondary registration helper. */
  factoryFn = FUN_01440550;
  typeId_ = 0x1ff;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

