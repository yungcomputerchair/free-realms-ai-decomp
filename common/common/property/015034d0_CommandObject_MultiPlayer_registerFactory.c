// addr: 0x015034d0
// name: CommandObject_MultiPlayer_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_MultiPlayer_registerFactory(void) */

void CommandObject_MultiPlayer_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CommandObject_MultiPlayer command object factory under
                       component/opcode 0xe3. The wrapper passes the allocator thunk to
                       ComponentFactory_initSingleton and the secondary registry call. */
  factoryFn = CommandObject_MultiPlayer_createAsCommandObject;
  typeId_ = 0xe3;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

