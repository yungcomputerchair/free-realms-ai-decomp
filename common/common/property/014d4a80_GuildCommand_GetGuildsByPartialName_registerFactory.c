// addr: 0x014d4a80
// name: GuildCommand_GetGuildsByPartialName_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GuildCommand_GetGuildsByPartialName_registerFactory(void) */

void GuildCommand_GetGuildsByPartialName_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x1cd with the component factory using allocator thunk
                       014d4a20. The thunk constructs an instance whose constructor installs
                       GuildCommand_GetGuildsByPartialName::vftable. */
  factoryFn = GuildCommand_GetGuildsByPartialName_create;
  typeId_ = 0x1cd;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

