// addr: 0x014ff590
// name: CommandObject_RemoveSuppressEffect_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_RemoveSuppressEffect_registerFactory(void) */

void CommandObject_RemoveSuppressEffect_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CommandObject_RemoveSuppressEffect command object factory under
                       component/opcode 0xda. The wrapper passes the allocator thunk to
                       ComponentFactory_initSingleton and the secondary registry call. */
  factoryFn = FUN_014ff510;
  typeId_ = 0xda;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

