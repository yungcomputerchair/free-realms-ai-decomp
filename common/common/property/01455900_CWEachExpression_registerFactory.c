// addr: 0x01455900
// name: CWEachExpression_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWEachExpression_registerFactory(void) */

void CWEachExpression_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CWEachExpression factory callback with the component/property
                       factory registries. The callback at 014558a0 allocates the object and calls
                       the constructor at 014556d0. */
  factoryFn = CWEachExpression_create;
  typeId_ = 0x222f1;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

