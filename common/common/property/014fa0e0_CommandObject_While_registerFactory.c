// addr: 0x014fa0e0
// name: CommandObject_While_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_While_registerFactory(void) */

void CommandObject_While_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for CommandObject_While under type id 0x197
                       and installs the allocator callback. */
  factoryFn = CommandObject_While_createAsCommandObject;
  typeId_ = 0x197;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

