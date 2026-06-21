// addr: 0x015047f0
// name: CommandObject_Move_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_Move_registerFactory(void) */

void CommandObject_Move_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CommandObject_Move command object factory under
                       component/opcode 0xc9. The wrapper passes the allocator thunk to
                       ComponentFactory_initSingleton and the secondary registry call. */
  factoryFn = CommandObject_Move_createAsCommandObject;
  typeId_ = 0xc9;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

