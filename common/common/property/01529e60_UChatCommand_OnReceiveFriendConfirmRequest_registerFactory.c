// addr: 0x01529e60
// name: UChatCommand_OnReceiveFriendConfirmRequest_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UChatCommand_OnReceiveFriendConfirmRequest_registerFactory(void) */

void UChatCommand_OnReceiveFriendConfirmRequest_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory constructor for
                       UChatCommand_OnReceiveFriendConfirmRequest. It binds the command id to the
                       allocator thunk that constructs the class. */
  factoryFn = UChatCommand_OnReceiveFriendConfirmRequest_create;
  typeId_ = 0x1f1;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

