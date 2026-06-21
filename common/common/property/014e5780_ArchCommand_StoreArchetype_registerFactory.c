// addr: 0x014e5780
// name: ArchCommand_StoreArchetype_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ArchCommand_StoreArchetype_registerFactory(void) */

void ArchCommand_StoreArchetype_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x1c1 with the component factory using the allocator thunk
                       for ArchCommand_StoreArchetype. */
  factoryFn = ArchCommand_StoreArchetype_create;
  typeId_ = 0x1c1;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

