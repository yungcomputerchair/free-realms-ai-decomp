// addr: 0x014f9c00
// name: OrderItem_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void OrderItem_registerFactory(void) */

void OrderItem_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for OrderItem under type id 0x1bb and
                       installs the allocator callback. */
  factoryFn = OrderItem_create;
  typeId_ = 0x1bb;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

