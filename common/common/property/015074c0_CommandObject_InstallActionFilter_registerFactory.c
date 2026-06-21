// addr: 0x015074c0
// name: CommandObject_InstallActionFilter_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_InstallActionFilter_registerFactory(void) */

void CommandObject_InstallActionFilter_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CommandObject_InstallActionFilter command object factory under
                       component/opcode 0xd4. The wrapper passes the allocator thunk to
                       ComponentFactory_initSingleton and the secondary registry call. */
  factoryFn = CommandObject_InstallActionFilter_createAsCommandObject;
  typeId_ = 0xd4;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

