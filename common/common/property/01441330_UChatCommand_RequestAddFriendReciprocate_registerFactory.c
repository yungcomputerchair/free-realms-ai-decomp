// addr: 0x01441330
// name: UChatCommand_RequestAddFriendReciprocate_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UChatCommand_RequestAddFriendReciprocate_registerFactory(void) */

void UChatCommand_RequestAddFriendReciprocate_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the UChatCommand_RequestAddFriendReciprocate component factory for
                       id 0x1fd by passing its allocator thunk to ComponentFactory_initSingleton and
                       the secondary registration helper. */
  factoryFn = FUN_014412c0;
  typeId_ = 0x1fd;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

