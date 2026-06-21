// addr: 0x0152b920
// name: UChatCommand_RequestSetFriendComment_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UChatCommand_RequestSetFriendComment_registerFactory(void) */

void UChatCommand_RequestSetFriendComment_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the factory constructor for UChatCommand_RequestSetFriendComment.
                       It binds the component id to the thunk that allocates and constructs the
                       command object. */
  factoryFn = UChatCommand_RequestSetFriendComment_create;
  typeId_ = 0x1f0;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

