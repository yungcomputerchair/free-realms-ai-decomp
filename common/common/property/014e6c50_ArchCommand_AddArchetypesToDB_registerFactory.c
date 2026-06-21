// addr: 0x014e6c50
// name: ArchCommand_AddArchetypesToDB_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ArchCommand_AddArchetypesToDB_registerFactory(void) */

void ArchCommand_AddArchetypesToDB_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x1c3 with the component factory using the allocator thunk
                       for ArchCommand_AddArchetypesToDB. */
  factoryFn = ArchCommand_AddArchetypesToDB_create;
  typeId_ = 0x1c3;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

