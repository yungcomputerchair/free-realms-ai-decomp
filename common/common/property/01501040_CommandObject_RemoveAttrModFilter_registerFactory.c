// addr: 0x01501040
// name: CommandObject_RemoveAttrModFilter_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_RemoveAttrModFilter_registerFactory(void) */

void CommandObject_RemoveAttrModFilter_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CommandObject_RemoveAttrModFilter command object factory under
                       component/opcode 0xdc. The wrapper passes the allocator thunk to
                       ComponentFactory_initSingleton and the secondary registry call. */
  factoryFn = CommandObject_RemoveAttrModFilter_createAsCommandObject;
  typeId_ = 0xdc;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

