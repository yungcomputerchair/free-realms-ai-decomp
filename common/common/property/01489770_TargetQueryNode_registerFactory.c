// addr: 0x01489770
// name: TargetQueryNode_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void TargetQueryNode_registerFactory(void) */

void TargetQueryNode_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the TargetQueryNode factory callback with the component/property
                       factory registries. The callback at 01489710 allocates the object and calls
                       the constructor at 01489270. */
  factoryFn = TargetQueryNode_create;
  typeId_ = 0x4b;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

