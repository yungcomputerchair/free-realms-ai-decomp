// addr: 0x014b5930
// name: MatchCommand_BidPlaced_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void MatchCommand_BidPlaced_registerFactory(void) */

void MatchCommand_BidPlaced_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers MatchCommand_BidPlaced with the component factory under
                       command/type id 0x7d, pairing the id with its allocator and then finalizing
                       the registration. */
  factoryFn = MatchCommand_BidPlaced_create;
  typeId_ = 0x7d;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

