// addr: 0x01410030
// name: CWCard_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWCard_registerFactory(void) */

void CWCard_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers CWCard with the component/packet factory under type id 0x222e1. The
                       registered maker allocates the class and calls the constructor for that
                       vtable-backed type. */
  factoryFn = CWCard_createPlayElementSubobject;
  typeId_ = 0x222e1;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

