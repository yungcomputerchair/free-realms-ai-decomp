// addr: 0x014e4c60
// name: DeckCommand_PopulateOnlineDeckData_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void DeckCommand_PopulateOnlineDeckData_registerFactory(void) */

void DeckCommand_PopulateOnlineDeckData_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x16b with the component factory using the allocator thunk
                       for DeckCommand_PopulateOnlineDeckData. */
  factoryFn = DeckCommand_PopulateOnlineDeckData_create;
  typeId_ = 0x16b;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

