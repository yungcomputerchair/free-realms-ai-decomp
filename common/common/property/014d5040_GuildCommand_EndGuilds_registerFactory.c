// addr: 0x014d5040
// name: GuildCommand_EndGuilds_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GuildCommand_EndGuilds_registerFactory(void) */

void GuildCommand_EndGuilds_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x1a2 with the component factory using allocator thunk
                       014d4fe0. The thunk constructs an instance whose constructor installs
                       GuildCommand_EndGuilds::vftable. */
  factoryFn = GuildCommand_EndGuilds_create;
  typeId_ = 0x1a2;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

