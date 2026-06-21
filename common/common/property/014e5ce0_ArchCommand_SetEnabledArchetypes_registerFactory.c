// addr: 0x014e5ce0
// name: ArchCommand_SetEnabledArchetypes_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ArchCommand_SetEnabledArchetypes_registerFactory(void) */

void ArchCommand_SetEnabledArchetypes_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x1d5 with the component factory using the allocator thunk
                       for ArchCommand_SetEnabledArchetypes. */
  factoryFn = ArchCommand_SetEnabledArchetypes_create;
  typeId_ = 0x1d5;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

