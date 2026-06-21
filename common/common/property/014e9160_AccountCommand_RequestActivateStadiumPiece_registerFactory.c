// addr: 0x014e9160
// name: AccountCommand_RequestActivateStadiumPiece_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void AccountCommand_RequestActivateStadiumPiece_registerFactory(void) */

void AccountCommand_RequestActivateStadiumPiece_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for
                       AccountCommand_RequestActivateStadiumPiece under type id 0x218 and installs
                       the allocator callback. */
  factoryFn = AccountCommand_RequestActivateStadiumPiece_create;
  typeId_ = 0x218;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

