// addr: 0x014fbcc0
// name: CommandObject_SuppressGameText_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_SuppressGameText_registerFactory(void) */

void CommandObject_SuppressGameText_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for CommandObject_SuppressGameText under type
                       id 0x147 and installs the allocator callback. */
  factoryFn = CommandObject_SuppressGameText_createAsCommandObject;
  typeId_ = 0x147;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

