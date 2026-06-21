// addr: 0x014d6080
// name: GuildCommand_AskToJoinGuildResponse_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GuildCommand_AskToJoinGuildResponse_registerFactory(void) */

void GuildCommand_AskToJoinGuildResponse_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x1a9 with the component factory using allocator thunk
                       014d6020. The thunk constructs an instance whose constructor installs
                       GuildCommand_AskToJoinGuildResponse::vftable. */
  factoryFn = GuildCommand_AskToJoinGuildResponse_create;
  typeId_ = 0x1a9;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

