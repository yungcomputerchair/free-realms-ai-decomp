// addr: 0x014fb8d0
// name: CommandObject_UIEffect_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_UIEffect_registerFactory(void) */

void CommandObject_UIEffect_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for CommandObject_UIEffect under type id
                       0x1d8 and installs the allocator callback. */
  factoryFn = CommandObject_UIEffect_createAsCommandObject;
  typeId_ = 0x1d8;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

