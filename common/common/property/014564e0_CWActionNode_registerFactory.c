// addr: 0x014564e0
// name: CWActionNode_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWActionNode_registerFactory(void) */

void CWActionNode_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CWActionNode factory callback with the component/property
                       factory registries. The callback at 01456480 allocates the object and calls
                       the constructor at 01455e70. */
  factoryFn = CWActionNode_create;
  typeId_ = 0x222ed;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

