// addr: 0x01410e70
// name: CWGameTurn_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWGameTurn_registerFactory(void) */

void CWGameTurn_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers CWGameTurn with the component/packet factory under type id 0x222e4.
                       The registered maker allocates the class and calls the constructor for that
                       vtable-backed type. */
  factoryFn = FUN_01410e00;
  typeId_ = 0x222e4;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

