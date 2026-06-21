// addr: 0x0142b2d0
// name: CommandObject_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_registerFactory(void) */

void CommandObject_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers CommandObject with the component/packet factory under type id 0xb2.
                       The registered maker allocates the class and calls the constructor for that
                       vtable-backed type. */
  factoryFn = CommandObject_create;
  typeId_ = 0xb2;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

