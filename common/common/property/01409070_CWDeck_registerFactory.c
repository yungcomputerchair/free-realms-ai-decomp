// addr: 0x01409070
// name: CWDeck_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWDeck_registerFactory(void) */

void CWDeck_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers CWDeck with the component/packet factory under type id 0x222e2. The
                       registered maker allocates the class and calls the constructor for that
                       vtable-backed type. */
  factoryFn = CWDeck_create_01409000;
  typeId_ = 0x222e2;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

