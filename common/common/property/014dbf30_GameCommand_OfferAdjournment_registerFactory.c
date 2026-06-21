// addr: 0x014dbf30
// name: GameCommand_OfferAdjournment_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_OfferAdjournment_registerFactory(void) */

void GameCommand_OfferAdjournment_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x108 with the component factory using allocator thunk
                       014dbed0. The thunk constructs an instance whose constructor installs
                       GameCommand_OfferAdjournment::vftable. */
  factoryFn = GameCommand_OfferAdjournment_create;
  typeId_ = 0x108;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

