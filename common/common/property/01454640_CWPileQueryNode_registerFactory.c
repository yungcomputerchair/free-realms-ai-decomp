// addr: 0x01454640
// name: CWPileQueryNode_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWPileQueryNode_registerFactory(void) */

void CWPileQueryNode_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CWPileQueryNode factory callback with the component/property
                       factory registries. The callback at 014545e0 allocates the object and calls
                       the constructor at 01454440. */
  factoryFn = FUN_014545e0;
  typeId_ = 0x222f0;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

