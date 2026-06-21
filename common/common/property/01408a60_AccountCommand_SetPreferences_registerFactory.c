// addr: 0x01408a60
// name: AccountCommand_SetPreferences_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void AccountCommand_SetPreferences_registerFactory(void) */

void AccountCommand_SetPreferences_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers AccountCommand_SetPreferences with the component/packet factory
                       under type id 0x76. The registered maker allocates the class and calls the
                       constructor for that vtable-backed type. */
  factoryFn = FUN_01408a00;
  typeId_ = 0x76;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

