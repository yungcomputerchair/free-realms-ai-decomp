// addr: 0x013cec00
// name: Deck_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Deck_registerFactory(void) */

void Deck_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the Deck persistent component factory. Its constructor thunk
                       allocates a Deck and initializes Deck::vftable. */
  factoryFn = FUN_013ceb90;
  typeId_ = 0x2e;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

