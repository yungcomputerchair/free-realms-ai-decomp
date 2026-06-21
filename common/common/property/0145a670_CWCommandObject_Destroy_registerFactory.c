// addr: 0x0145a670
// name: CWCommandObject_Destroy_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWCommandObject_Destroy_registerFactory(void) */

void CWCommandObject_Destroy_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the CWCommandObject_Destroy factory callback with the
                       component/property factory registries. The callback at 0145a5f0 allocates the
                       object and calls the constructor at 0145a470. */
  factoryFn = CWCommandObject_Destroy_createAsCommandObject;
  typeId_ = 0x222fb;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

