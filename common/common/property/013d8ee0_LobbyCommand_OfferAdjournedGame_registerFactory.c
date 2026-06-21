// addr: 0x013d8ee0
// name: LobbyCommand_OfferAdjournedGame_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_OfferAdjournedGame_registerFactory(void) */

void LobbyCommand_OfferAdjournedGame_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_OfferAdjournedGame command factory. The allocation
                       thunk constructs an object with LobbyCommand_OfferAdjournedGame::vftable. */
  factoryFn = FUN_013d8e80;
  typeId_ = 0x109;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

