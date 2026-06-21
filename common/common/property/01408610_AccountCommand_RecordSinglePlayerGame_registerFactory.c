// addr: 0x01408610
// name: AccountCommand_RecordSinglePlayerGame_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void AccountCommand_RecordSinglePlayerGame_registerFactory(void) */

void AccountCommand_RecordSinglePlayerGame_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers AccountCommand_RecordSinglePlayerGame with the component/packet
                       factory under type id 0x1e7. The registered maker allocates the class and
                       calls the constructor for that vtable-backed type. */
  factoryFn = FUN_014085b0;
  typeId_ = 0x1e7;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

