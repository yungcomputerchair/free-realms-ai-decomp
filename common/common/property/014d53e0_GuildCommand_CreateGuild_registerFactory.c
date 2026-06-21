// addr: 0x014d53e0
// name: GuildCommand_CreateGuild_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GuildCommand_CreateGuild_registerFactory(void) */

void GuildCommand_CreateGuild_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x1a6 with the component factory using allocator thunk
                       014d5380. The thunk constructs an instance whose constructor installs
                       GuildCommand_CreateGuild::vftable. */
  factoryFn = GuildCommand_CreateGuild_create;
  typeId_ = 0x1a6;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

