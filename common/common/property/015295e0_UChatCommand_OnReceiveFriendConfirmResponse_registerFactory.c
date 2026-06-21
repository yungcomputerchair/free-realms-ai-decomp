// addr: 0x015295e0
// name: UChatCommand_OnReceiveFriendConfirmResponse_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UChatCommand_OnReceiveFriendConfirmResponse_registerFactory(void) */

void UChatCommand_OnReceiveFriendConfirmResponse_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the UChat friend-confirm response factory under component id 0x1f2.
                        */
  factoryFn = UChatCommand_OnReceiveFriendConfirmResponse_create;
  typeId_ = 0x1f2;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

