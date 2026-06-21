// addr: 0x01453740
// name: CWValueNode_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWValueNode_registerFactory(void) */

void CWValueNode_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CWValueNode factory callback with the component/property
                       factory registries. The callback at 014536e0 allocates the object and calls
                       the constructor at 014534f0. */
  factoryFn = FUN_014536e0;
  typeId_ = 0x222fa;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

