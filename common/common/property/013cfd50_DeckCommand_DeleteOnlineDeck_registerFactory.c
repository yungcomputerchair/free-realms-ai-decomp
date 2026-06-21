// addr: 0x013cfd50
// name: DeckCommand_DeleteOnlineDeck_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void DeckCommand_DeleteOnlineDeck_registerFactory(void) */

void DeckCommand_DeleteOnlineDeck_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the DeckCommand_DeleteOnlineDeck command factory with the component
                       factory. The registered thunk constructs an object whose ctor sets
                       DeckCommand_DeleteOnlineDeck::vftable. */
  factoryFn = DeckCommand_DeleteOnlineDeck_create;
  typeId_ = 0x16a;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

