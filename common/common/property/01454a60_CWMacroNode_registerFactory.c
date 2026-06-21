// addr: 0x01454a60
// name: CWMacroNode_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWMacroNode_registerFactory(void) */

void CWMacroNode_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CWMacroNode factory callback with the component/property
                       factory registries. The callback at 01454a00 allocates the object and calls
                       the constructor at 014547a0. */
  factoryFn = CWMacroNode_create;
  typeId_ = 0x222ec;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

