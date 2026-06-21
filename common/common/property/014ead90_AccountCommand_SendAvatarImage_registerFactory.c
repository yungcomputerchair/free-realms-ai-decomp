// addr: 0x014ead90
// name: AccountCommand_SendAvatarImage_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void AccountCommand_SendAvatarImage_registerFactory(void) */

void AccountCommand_SendAvatarImage_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for AccountCommand_SendAvatarImage under type
                       id 0x1f6 and installs the allocator callback. */
  factoryFn = AccountCommand_SendAvatarImage_create;
  typeId_ = 0x1f6;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

