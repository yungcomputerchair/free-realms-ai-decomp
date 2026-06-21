// addr: 0x014dba90
// name: GameCommand_OfferDraw_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_OfferDraw_registerFactory(void) */

void GameCommand_OfferDraw_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0xa2 with the component factory using allocator thunk
                       014dba30. The thunk constructs an instance whose constructor installs
                       GameCommand_OfferDraw::vftable. */
  factoryFn = GameCommand_OfferDraw_create;
  typeId_ = 0xa2;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

