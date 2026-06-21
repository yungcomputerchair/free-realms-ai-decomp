// addr: 0x014e7d30
// name: AccountCommand_RespondStadiumInfo_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void AccountCommand_RespondStadiumInfo_registerFactory(void) */

void AccountCommand_RespondStadiumInfo_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x21b with the component factory using the allocator thunk
                       for AccountCommand_RespondStadiumInfo. */
  factoryFn = AccountCommand_RespondStadiumInfo_create;
  typeId_ = 0x21b;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

