// addr: 0x014b4540
// name: MatchCommand_SetBid_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void MatchCommand_SetBid_registerFactory(void) */

void MatchCommand_SetBid_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers MatchCommand_SetBid with the component factory under command/type
                       id 100, pairing the id with its allocator and then finalizing the
                       registration. */
  factoryFn = MatchCommand_SetBid_create;
  typeId_ = 100;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

