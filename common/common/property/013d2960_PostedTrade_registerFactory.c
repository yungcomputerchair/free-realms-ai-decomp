// addr: 0x013d2960
// name: PostedTrade_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PostedTrade_registerFactory(void) */

void PostedTrade_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the PostedTrade persistent component factory. The registered
                       constructor allocates 0x108 bytes and initializes PostedTrade::vftable. */
  factoryFn = PostedTrade_create;
  typeId_ = 0x194;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

