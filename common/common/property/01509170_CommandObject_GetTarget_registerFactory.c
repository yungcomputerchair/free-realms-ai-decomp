// addr: 0x01509170
// name: CommandObject_GetTarget_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_GetTarget_registerFactory(void) */

void CommandObject_GetTarget_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CommandObject_GetTarget command object factory under
                       component/opcode 0xd6. The wrapper passes the allocator thunk to
                       ComponentFactory_initSingleton and the secondary registry call. */
  factoryFn = CommandObject_GetTarget_createAsCommandObject;
  typeId_ = 0xd6;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

