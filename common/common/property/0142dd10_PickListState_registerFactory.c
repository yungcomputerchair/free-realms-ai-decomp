// addr: 0x0142dd10
// name: PickListState_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PickListState_registerFactory(void) */

void PickListState_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers PickListState with the component/packet factory under type id
                       0x13e. The registered maker allocates the class and calls the constructor for
                       that vtable-backed type. */
  factoryFn = PickListState_create;
  typeId_ = 0x13e;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

