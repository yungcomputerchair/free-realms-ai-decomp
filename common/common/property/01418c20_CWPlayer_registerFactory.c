// addr: 0x01418c20
// name: CWPlayer_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWPlayer_registerFactory(void) */

void CWPlayer_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers CWPlayer with the component/packet factory under type id 0x222e5.
                       The registered maker allocates the class and calls the constructor for that
                       vtable-backed type. */
  factoryFn = CWPlayer_create;
  typeId_ = 0x222e5;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

