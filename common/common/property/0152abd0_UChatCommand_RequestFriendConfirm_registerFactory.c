// addr: 0x0152abd0
// name: UChatCommand_RequestFriendConfirm_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UChatCommand_RequestFriendConfirm_registerFactory(void) */

void UChatCommand_RequestFriendConfirm_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the factory constructor for UChatCommand_RequestFriendConfirm. The
                       registered thunk allocates the command object and initializes its string
                       fields and defaults. */
  factoryFn = UChatCommand_RequestFriendConfirm_create;
  typeId_ = 0x1eb;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

