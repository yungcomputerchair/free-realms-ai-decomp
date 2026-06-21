// addr: 0x013d0360
// name: DeckCommand_AddOnlineDeck_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void DeckCommand_AddOnlineDeck_registerFactory(void) */

void DeckCommand_AddOnlineDeck_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the DeckCommand_AddOnlineDeck command factory. The constructor
                       thunk allocates the object and initializes
                       DeckCommand_AddOnlineDeck::vftable. */
  factoryFn = DeckCommand_AddOnlineDeck_create;
  typeId_ = 0x169;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

