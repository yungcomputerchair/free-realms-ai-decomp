// addr: 0x014e7850
// name: AccountCommand_RespondUpdateStadium_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void AccountCommand_RespondUpdateStadium_registerFactory(void) */

void AccountCommand_RespondUpdateStadium_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x21d with the component factory using the allocator thunk
                       for AccountCommand_RespondUpdateStadium. */
  factoryFn = AccountCommand_RespondUpdateStadium_create;
  typeId_ = 0x21d;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

