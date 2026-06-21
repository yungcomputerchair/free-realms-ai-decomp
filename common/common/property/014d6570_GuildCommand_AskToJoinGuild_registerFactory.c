// addr: 0x014d6570
// name: GuildCommand_AskToJoinGuild_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GuildCommand_AskToJoinGuild_registerFactory(void) */

void GuildCommand_AskToJoinGuild_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x1a8 with the component factory using allocator thunk
                       014d6510. The thunk constructs an instance whose constructor installs
                       GuildCommand_AskToJoinGuild::vftable. */
  factoryFn = GuildCommand_AskToJoinGuild_create;
  typeId_ = 0x1a8;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

