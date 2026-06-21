// addr: 0x01529a50
// name: UChatCommand_OnReceiveFriendConfirmReciprocateRequest_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void
   UChatCommand_OnReceiveFriendConfirmReciprocateRequest_registerFactory(void) */

void UChatCommand_OnReceiveFriendConfirmReciprocateRequest_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the factory constructor for
                       UChatCommand_OnReceiveFriendConfirmReciprocateRequest with the component
                       factory. The wrapper passes component id 0x200 and the allocator/constructor
                       thunk that builds the class vtable. */
  factoryFn = UChatCommand_OnReceiveFriendConfirmReciprocateRequest_create;
  typeId_ = 0x200;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

