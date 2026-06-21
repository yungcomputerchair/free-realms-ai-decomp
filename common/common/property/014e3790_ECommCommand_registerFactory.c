// addr: 0x014e3790
// name: ECommCommand_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ECommCommand_registerFactory(void) */

void ECommCommand_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x1b7 with the component factory using the allocator thunk
                       for the base ECommCommand. */
  factoryFn = FUN_014e3730;
  typeId_ = 0x1b7;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

