// addr: 0x01407df0
// name: AccountCommand_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void AccountCommand_registerFactory(void) */

void AccountCommand_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers AccountCommand with the component/packet factory under type id
                       0x71. The registered maker allocates the class and calls the constructor for
                       that vtable-backed type. */
  factoryFn = FUN_01407d90;
  typeId_ = 0x71;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

