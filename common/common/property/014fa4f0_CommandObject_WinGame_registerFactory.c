// addr: 0x014fa4f0
// name: CommandObject_WinGame_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_WinGame_registerFactory(void) */

void CommandObject_WinGame_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for CommandObject_WinGame under type id 0x182
                       and installs the allocator callback. */
  factoryFn = CommandObject_WinGame_createAsCommandObject;
  typeId_ = 0x182;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

