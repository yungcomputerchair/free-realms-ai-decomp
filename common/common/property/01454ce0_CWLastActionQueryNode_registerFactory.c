// addr: 0x01454ce0
// name: CWLastActionQueryNode_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWLastActionQueryNode_registerFactory(void) */

void CWLastActionQueryNode_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CWLastActionQueryNode factory callback with the
                       component/property factory registries. The callback at 01454c80 allocates the
                       object and calls the constructor at 01454ae0. */
  factoryFn = CWLastActionQueryNode_create;
  typeId_ = 0x222f3;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

