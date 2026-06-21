// addr: 0x0150eed0
// name: CommandObject_AddSuppressEffect_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_AddSuppressEffect_registerFactory(void) */

void CommandObject_AddSuppressEffect_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CommandObject_AddSuppressEffect command object factory under
                       component/opcode 0xd9. The wrapper passes the allocator thunk to
                       ComponentFactory_initSingleton and the secondary registry call. */
  factoryFn = FUN_0150ee50;
  typeId_ = 0xd9;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

