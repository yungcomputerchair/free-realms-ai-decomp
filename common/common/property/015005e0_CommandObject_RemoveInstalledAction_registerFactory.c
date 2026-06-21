// addr: 0x015005e0
// name: CommandObject_RemoveInstalledAction_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_RemoveInstalledAction_registerFactory(void) */

void CommandObject_RemoveInstalledAction_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CommandObject_RemoveInstalledAction command object factory
                       under component/opcode 0x1b6. The wrapper passes the allocator thunk to
                       ComponentFactory_initSingleton and the secondary registry call. */
  factoryFn = CommandObject_RemoveInstalledAction_createAsCommandObject;
  typeId_ = 0x1b6;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

