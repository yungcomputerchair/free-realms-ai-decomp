// addr: 0x0152c0d0
// name: UChatCommand_RequestAddFriend_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UChatCommand_RequestAddFriend_registerFactory(void) */

void UChatCommand_RequestAddFriend_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory constructor for
                       UChatCommand_RequestAddFriend. The registered thunk allocates and constructs
                       the command object with its default string and flag fields. */
  factoryFn = UChatCommand_RequestAddFriend_create;
  typeId_ = 0x1e9;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

