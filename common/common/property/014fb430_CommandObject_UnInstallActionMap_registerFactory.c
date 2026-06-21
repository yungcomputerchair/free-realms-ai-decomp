// addr: 0x014fb430
// name: CommandObject_UnInstallActionMap_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_UnInstallActionMap_registerFactory(void) */

void CommandObject_UnInstallActionMap_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for CommandObject_UnInstallActionMap under
                       type id 0xcb and installs the allocator callback. */
  factoryFn = CommandObject_UnInstallActionMap_createAsCommandObject;
  typeId_ = 0xcb;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

