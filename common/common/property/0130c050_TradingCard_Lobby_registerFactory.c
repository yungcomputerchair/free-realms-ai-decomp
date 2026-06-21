// addr: 0x0130c050
// name: TradingCard_Lobby_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TradingCard_Lobby_registerFactory(void) */

void TradingCard_Lobby_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the TradingCard::Lobby allocation factory in the property/component
                       factory tables. The callback constructs an object with TradingCard::Lobby
                       vtables. */
  factoryFn = FUN_0130bff0;
  typeId_ = 0x67;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

