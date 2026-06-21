// addr: 0x0141c6e0
// name: GetTargetState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GetTargetState_registerFactory(void) */

void GetTargetState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers GetTargetState with the component/packet factory under type id
                       0xfa. The registered maker allocates the class and calls the constructor for
                       that vtable-backed type. */
  factoryFn = GetTargetState_create;
  typeId_ = 0xfa;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

