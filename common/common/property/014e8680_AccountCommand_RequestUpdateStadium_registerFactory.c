// addr: 0x014e8680
// name: AccountCommand_RequestUpdateStadium_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void AccountCommand_RequestUpdateStadium_registerFactory(void) */

void AccountCommand_RequestUpdateStadium_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x21c with the component factory using the allocator thunk
                       for AccountCommand_RequestUpdateStadium. */
  factoryFn = AccountCommand_RequestUpdateStadium_create;
  typeId_ = 0x21c;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

