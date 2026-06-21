// addr: 0x013bb160
// name: UChatCommand_RequestFriendStatus_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UChatCommand_RequestFriendStatus_registerFactory(void) */

void UChatCommand_RequestFriendStatus_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the factory callback for UChatCommand_RequestFriendStatus. The
                       callback allocates 0x54 bytes and constructs the command. */
  factoryFn = FUN_013bb100;
  typeId_ = 0x1ec;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

