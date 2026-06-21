// addr: 0x014a5070
// name: TradeCommand_StartTradeSync_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TradeCommand_StartTradeSync_registerFactory(void) */

void TradeCommand_StartTradeSync_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the TradeCommand_StartTradeSync allocation factory under
                       component/property type id 0x110. The wrapper calls
                       ComponentFactory_initSingleton and the paired registry hook with a callback
                       whose constructor installs TradeCommand_StartTradeSync::vftable. */
  factoryFn = FUN_014a5010;
  typeId_ = 0x110;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

