// addr: 0x0150e1d0
// name: CommandObject_AlternateMultiAction_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_AlternateMultiAction_registerFactory(void) */

void CommandObject_AlternateMultiAction_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CommandObject_AlternateMultiAction command object factory under
                       component/opcode 0x114. The wrapper passes the allocator thunk to
                       ComponentFactory_initSingleton and the secondary registry call. */
  factoryFn = CommandObject_AlternateMultiAction_create;
  typeId_ = 0x114;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

