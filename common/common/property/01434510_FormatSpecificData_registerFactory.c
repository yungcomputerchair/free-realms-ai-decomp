// addr: 0x01434510
// name: FormatSpecificData_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void FormatSpecificData_registerFactory(void) */

void FormatSpecificData_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers FormatSpecificData with the component/packet factory under type id
                       0x13. The registered maker allocates the class and calls the constructor for
                       that vtable-backed type. */
  factoryFn = FUN_014344b0;
  typeId_ = 0x13;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

