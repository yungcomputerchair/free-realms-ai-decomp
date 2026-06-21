// addr: 0x014f9960
// name: Order_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Order_registerFactory(void) */

void Order_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for Order under type id 0x1ba and installs
                       the allocator callback. */
  factoryFn = Order_create;
  typeId_ = 0x1ba;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

