// addr: 0x013d79c0
// name: Poll_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Poll_registerFactory(void) */

void Poll_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the Poll persistent component factory. The constructor path
                       initializes PersistentComponent/PersistentBase and Poll::vftable with poll
                       fields. */
  factoryFn = Poll_create;
  typeId_ = 0x185;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

