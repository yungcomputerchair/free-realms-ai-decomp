// addr: 0x0139e230
// name: PlayerPlayArea_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PlayerPlayArea_registerFactory(void) */

void PlayerPlayArea_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the PlayerPlayArea factory callback in the factory tables. The
                       callback allocates 0x54 bytes and constructs PlayerPlayArea. */
  factoryFn = PlayerPlayArea_createEmbedded;
  typeId_ = 0xae;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

