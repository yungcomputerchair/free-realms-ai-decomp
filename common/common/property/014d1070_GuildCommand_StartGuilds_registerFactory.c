// addr: 0x014d1070
// name: GuildCommand_StartGuilds_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GuildCommand_StartGuilds_registerFactory(void) */

void GuildCommand_StartGuilds_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x1a4 with the component factory using allocator thunk
                       014d1010. The thunk constructs an instance whose constructor installs
                       GuildCommand_StartGuilds::vftable. */
  factoryFn = GuildCommand_StartGuilds_create;
  typeId_ = 0x1a4;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

