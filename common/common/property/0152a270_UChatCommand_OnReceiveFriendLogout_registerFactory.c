// addr: 0x0152a270
// name: UChatCommand_OnReceiveFriendLogout_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UChatCommand_OnReceiveFriendLogout_registerFactory(void) */

void UChatCommand_OnReceiveFriendLogout_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory constructor for
                       UChatCommand_OnReceiveFriendLogout. It associates id 500 with the
                       allocator/constructor thunk. */
  factoryFn = UChatCommand_OnReceiveFriendLogout_create;
  typeId_ = 500;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

