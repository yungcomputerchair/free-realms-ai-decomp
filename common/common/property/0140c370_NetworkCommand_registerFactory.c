// addr: 0x0140c370
// name: NetworkCommand_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void NetworkCommand_registerFactory(void) */

void NetworkCommand_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers NetworkCommand with the component/packet factory under type id
                       0x36. The registered maker allocates the class and calls the constructor for
                       that vtable-backed type. */
  factoryFn = NetworkCommand_create;
  typeId_ = 0x36;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

