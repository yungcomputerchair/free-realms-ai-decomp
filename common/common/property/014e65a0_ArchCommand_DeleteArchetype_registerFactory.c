// addr: 0x014e65a0
// name: ArchCommand_DeleteArchetype_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ArchCommand_DeleteArchetype_registerFactory(void) */

void ArchCommand_DeleteArchetype_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x1c2 with the component factory using the allocator thunk
                       for ArchCommand_DeleteArchetype. */
  factoryFn = ArchCommand_DeleteArchetype_create;
  typeId_ = 0x1c2;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

