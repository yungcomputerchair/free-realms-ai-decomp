// addr: 0x014fa9c0
// name: CommandObject_WaitFor_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_WaitFor_registerFactory(void) */

void CommandObject_WaitFor_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for CommandObject_WaitFor under type id 0x18c
                       and installs the allocator callback. */
  factoryFn = FUN_014fa940;
  typeId_ = 0x18c;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

