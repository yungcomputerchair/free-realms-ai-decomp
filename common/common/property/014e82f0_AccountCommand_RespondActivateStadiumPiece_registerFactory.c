// addr: 0x014e82f0
// name: AccountCommand_RespondActivateStadiumPiece_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void AccountCommand_RespondActivateStadiumPiece_registerFactory(void) */

void AccountCommand_RespondActivateStadiumPiece_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x219 with the component factory using the allocator thunk
                       for AccountCommand_RespondActivateStadiumPiece. */
  factoryFn = AccountCommand_RespondActivateStadiumPiece_create;
  typeId_ = 0x219;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

