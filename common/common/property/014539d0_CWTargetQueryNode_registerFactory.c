// addr: 0x014539d0
// name: CWTargetQueryNode_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWTargetQueryNode_registerFactory(void) */

void CWTargetQueryNode_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CWTargetQueryNode factory callback with the component/property
                       factory registries. The callback at 01453970 allocates the object and calls
                       the constructor at 014537c0. */
  factoryFn = CWTargetQueryNode_create;
  typeId_ = 0x222f5;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

