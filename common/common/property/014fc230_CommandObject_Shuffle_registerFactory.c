// addr: 0x014fc230
// name: CommandObject_Shuffle_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_Shuffle_registerFactory(void) */

void CommandObject_Shuffle_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for CommandObject_Shuffle under type id 0xb6
                       and installs the allocator callback. */
  factoryFn = CommandObject_Shuffle_createAsCommandObject;
  typeId_ = 0xb6;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

