// addr: 0x01455df0
// name: CWActionPlayNode_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWActionPlayNode_registerFactory(void) */

void CWActionPlayNode_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CWActionPlayNode factory callback with the component/property
                       factory registries. The callback at 01455d90 allocates the object and calls
                       the constructor at 01455980. */
  factoryFn = CWActionPlayNode_create;
  typeId_ = 0x222f6;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

