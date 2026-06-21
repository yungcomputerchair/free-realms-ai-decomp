// addr: 0x01418170
// name: ReturnValueMap_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ReturnValueMap_registerFactory(void) */

void ReturnValueMap_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers ReturnValueMap with the component/packet factory under type id
                       0x179. The registered maker allocates the class and calls the constructor for
                       that vtable-backed type. */
  factoryFn = FUN_01418110;
  typeId_ = 0x179;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

