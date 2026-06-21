// addr: 0x014e6120
// name: ArchCommand_GetArchetypeID_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ArchCommand_GetArchetypeID_registerFactory(void) */

void ArchCommand_GetArchetypeID_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x1c0 with the component factory using the allocator thunk
                       for ArchCommand_GetArchetypeID. */
  factoryFn = ArchCommand_GetArchetypeID_create;
  typeId_ = 0x1c0;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

