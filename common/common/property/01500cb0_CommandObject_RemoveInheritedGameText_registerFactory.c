// addr: 0x01500cb0
// name: CommandObject_RemoveInheritedGameText_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_RemoveInheritedGameText_registerFactory(void) */

void CommandObject_RemoveInheritedGameText_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CommandObject_RemoveInheritedGameText command object factory
                       under component/opcode 0xe2. The wrapper passes the allocator thunk to
                       ComponentFactory_initSingleton and the secondary registry call. */
  factoryFn = CommandObject_RemoveInheritedGameText_createAsCommandObject;
  typeId_ = 0xe2;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

