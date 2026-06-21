// addr: 0x0142a640
// name: ValidActionFilter_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ValidActionFilter_registerFactory(void) */

void ValidActionFilter_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers ValidActionFilter with the component/packet factory under type id
                       0xd5. The registered maker allocates the class and calls the constructor for
                       that vtable-backed type. */
  factoryFn = ValidActionFilter_create;
  typeId_ = 0xd5;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

