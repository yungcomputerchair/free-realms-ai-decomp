// addr: 0x014fd390
// name: CommandObject_SetPhaseDialog_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_SetPhaseDialog_registerFactory(void) */

void CommandObject_SetPhaseDialog_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CommandObject_SetPhaseDialog command object factory under
                       component/opcode 0x180. The wrapper passes the allocator thunk to
                       ComponentFactory_initSingleton and the secondary registry call. */
  factoryFn = FUN_014fd310;
  typeId_ = 0x180;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

