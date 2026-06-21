// addr: 0x014139f0
// name: HandleResponseState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void HandleResponseState_registerFactory(void) */

void HandleResponseState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers HandleResponseState with the component/packet factory under type id
                       0xfd. The registered maker allocates the class and calls the constructor for
                       that vtable-backed type. */
  factoryFn = HandleResponseState_create;
  typeId_ = 0xfd;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

