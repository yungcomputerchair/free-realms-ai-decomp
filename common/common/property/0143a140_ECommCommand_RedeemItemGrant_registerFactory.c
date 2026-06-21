// addr: 0x0143a140
// name: ECommCommand_RedeemItemGrant_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ECommCommand_RedeemItemGrant_registerFactory(void) */

void ECommCommand_RedeemItemGrant_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the ECommCommand_RedeemItemGrant component factory for id 0x1b9 by
                       passing its allocator thunk to ComponentFactory_initSingleton and the
                       secondary registration helper. */
  factoryFn = ECommCommand_RedeemItemGrant_create;
  typeId_ = 0x1b9;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

