// addr: 0x014fae90
// name: CommandObject_UnreadyCard_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandObject_UnreadyCard_registerFactory(void) */

void CommandObject_UnreadyCard_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the component factory for CommandObject_UnreadyCard under type id
                       0x178 and installs the allocator callback. */
  factoryFn = CommandObject_UnreadyCard_create;
  typeId_ = 0x178;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

