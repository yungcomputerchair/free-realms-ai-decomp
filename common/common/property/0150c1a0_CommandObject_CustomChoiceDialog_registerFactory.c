// addr: 0x0150c1a0
// name: CommandObject_CustomChoiceDialog_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_CustomChoiceDialog_registerFactory(void) */

void CommandObject_CustomChoiceDialog_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CommandObject_CustomChoiceDialog command object factory under
                       component/opcode 0xe0. The wrapper passes the allocator thunk to
                       ComponentFactory_initSingleton and the secondary registry call. */
  factoryFn = CommandObject_CustomChoiceDialog_create;
  typeId_ = 0xe0;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

