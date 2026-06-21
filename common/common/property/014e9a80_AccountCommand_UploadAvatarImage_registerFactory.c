// addr: 0x014e9a80
// name: AccountCommand_UploadAvatarImage_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void AccountCommand_UploadAvatarImage_registerFactory(void) */

void AccountCommand_UploadAvatarImage_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for AccountCommand_UploadAvatarImage under
                       type id 0x1f7 and installs the allocator callback. */
  factoryFn = AccountCommand_UploadAvatarImage_create;
  typeId_ = 0x1f7;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

