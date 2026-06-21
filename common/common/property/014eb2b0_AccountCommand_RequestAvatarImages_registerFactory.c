// addr: 0x014eb2b0
// name: AccountCommand_RequestAvatarImages_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void AccountCommand_RequestAvatarImages_registerFactory(void) */

void AccountCommand_RequestAvatarImages_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for AccountCommand_RequestAvatarImages under
                       type id 0x1f5 and installs the allocator callback. */
  factoryFn = AccountCommand_RequestAvatarImages_create;
  typeId_ = 0x1f5;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

