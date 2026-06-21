// addr: 0x01506750
// name: CommandObject_IntroduceCard_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_IntroduceCard_registerFactory(void) */

void CommandObject_IntroduceCard_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CommandObject_IntroduceCard command object factory under
                       component/opcode 0x173. The wrapper passes the allocator thunk to
                       ComponentFactory_initSingleton and the secondary registry call. */
  factoryFn = CommandObject_IntroduceCard_createAsCommandObject;
  typeId_ = 0x173;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

