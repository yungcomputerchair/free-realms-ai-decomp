// addr: 0x014e73b0
// name: ArchCommand_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ArchCommand_registerFactory(void) */

void ArchCommand_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x1bf with the component factory using the allocator thunk
                       for the base ArchCommand. */
  factoryFn = ArchCommand_create;
  typeId_ = 0x1bf;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

