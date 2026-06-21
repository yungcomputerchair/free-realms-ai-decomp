// addr: 0x01402170
// name: MessageText_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void MessageText_registerFactory(void) */

void MessageText_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers MessageText with the component factory under type id 0x151, using
                       its allocation/constructor thunk. */
  factoryFn = FUN_01402110;
  typeId_ = 0x151;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

