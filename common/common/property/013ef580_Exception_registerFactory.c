// addr: 0x013ef580
// name: Exception_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Exception_registerFactory(void) */

void Exception_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the Exception persistent component factory. The registered
                       constructor initializes PersistentComponent/PersistentBase state and sets
                       Exception::vftable. */
  factoryFn = Exception_create;
  typeId_ = 0x83;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

