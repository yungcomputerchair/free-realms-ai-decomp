// addr: 0x014e3410
// name: ECommCommand_OrderHistory_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ECommCommand_OrderHistory_registerFactory(void) */

void ECommCommand_OrderHistory_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x1b8 with the component factory using the allocator thunk
                       for ECommCommand_OrderHistory. */
  factoryFn = ECommCommand_OrderHistory_create;
  typeId_ = 0x1b8;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

