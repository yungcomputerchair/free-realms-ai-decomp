// addr: 0x014fdb50
// name: CommandObject_SendCardIntroductions_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_SendCardIntroductions_registerFactory(void) */

void CommandObject_SendCardIntroductions_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CommandObject_SendCardIntroductions command object factory
                       under component/opcode 0xde. The wrapper passes the allocator thunk to
                       ComponentFactory_initSingleton and the secondary registry call. */
  factoryFn = CommandObject_SendCardIntroductions_createAsCommandObject;
  typeId_ = 0xde;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

