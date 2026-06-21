// addr: 0x014d2bd0
// name: GuildCommand_Remove_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GuildCommand_Remove_registerFactory(void) */

void GuildCommand_Remove_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x1ac with the component factory using allocator thunk
                       014d2b70. The thunk constructs an instance whose constructor installs
                       GuildCommand_Remove::vftable. */
  factoryFn = GuildCommand_Remove_create;
  typeId_ = 0x1ac;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

