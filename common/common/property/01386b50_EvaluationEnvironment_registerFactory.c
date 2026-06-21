// addr: 0x01386b50
// name: EvaluationEnvironment_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EvaluationEnvironment_registerFactory(void) */

void EvaluationEnvironment_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the EvaluationEnvironment factory callback. The callback allocates
                       0x94 bytes and calls the constructor that installs
                       EvaluationEnvironment::vftable. */
  factoryFn = EvaluationEnvironment_create;
  typeId_ = 0xaa;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

