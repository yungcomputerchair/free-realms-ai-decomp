// addr: 0x014d0a80
// name: GuildCommand_TransferGuild_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GuildCommand_TransferGuild_registerFactory(void) */

void GuildCommand_TransferGuild_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x1a5 with the component factory using allocator thunk
                       014d0a20. The thunk constructs an instance whose constructor installs
                       GuildCommand_TransferGuild::vftable. */
  factoryFn = GuildCommand_TransferGuild_create;
  typeId_ = 0x1a5;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

