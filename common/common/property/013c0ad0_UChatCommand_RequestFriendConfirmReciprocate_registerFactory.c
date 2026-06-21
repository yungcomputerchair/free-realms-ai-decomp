// addr: 0x013c0ad0
// name: UChatCommand_RequestFriendConfirmReciprocate_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UChatCommand_RequestFriendConfirmReciprocate_registerFactory(void) */

void UChatCommand_RequestFriendConfirmReciprocate_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the factory callback for
                       UChatCommand_RequestFriendConfirmReciprocate. The callback allocates 0x84
                       bytes and constructs that command. */
  factoryFn = FUN_013c0a60;
  typeId_ = 0x1fe;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

