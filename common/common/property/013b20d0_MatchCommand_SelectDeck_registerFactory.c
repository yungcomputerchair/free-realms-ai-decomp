// addr: 0x013b20d0
// name: MatchCommand_SelectDeck_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void MatchCommand_SelectDeck_registerFactory(void) */

void MatchCommand_SelectDeck_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the factory callback for MatchCommand_SelectDeck. The callback
                       allocates 0x30 bytes and constructs the command. */
  factoryFn = MatchCommand_SelectDeck_create;
  typeId_ = 0x65;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

