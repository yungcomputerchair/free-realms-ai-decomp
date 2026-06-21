// addr: 0x014e5210
// name: ArchCommand_ValidateUsername_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ArchCommand_ValidateUsername_registerFactory(void) */

void ArchCommand_ValidateUsername_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x1c4 with the component factory using the allocator thunk
                       for ArchCommand_ValidateUsername. */
  factoryFn = ArchCommand_ValidateUsername_create;
  typeId_ = 0x1c4;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

