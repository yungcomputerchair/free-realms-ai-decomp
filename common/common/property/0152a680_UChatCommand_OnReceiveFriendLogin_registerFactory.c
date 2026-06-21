// addr: 0x0152a680
// name: UChatCommand_OnReceiveFriendLogin_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UChatCommand_OnReceiveFriendLogin_registerFactory(void) */

void UChatCommand_OnReceiveFriendLogin_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory constructor for
                       UChatCommand_OnReceiveFriendLogin. It binds the numeric component id to the
                       creation thunk. */
  factoryFn = UChatCommand_OnReceiveFriendLogin_create;
  typeId_ = 499;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

