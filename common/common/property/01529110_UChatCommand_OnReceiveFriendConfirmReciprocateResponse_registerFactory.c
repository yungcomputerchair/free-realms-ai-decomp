// addr: 0x01529110
// name: UChatCommand_OnReceiveFriendConfirmReciprocateResponse_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void
   UChatCommand_OnReceiveFriendConfirmReciprocateResponse_registerFactory(void) */

void UChatCommand_OnReceiveFriendConfirmReciprocateResponse_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the UChat friend-confirm-reciprocate response factory under
                       component id 0x201. */
  factoryFn = UChatCommand_OnReceiveFriendConfirmReciprocateResponse_create;
  typeId_ = 0x201;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

