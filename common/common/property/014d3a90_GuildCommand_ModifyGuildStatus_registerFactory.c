// addr: 0x014d3a90
// name: GuildCommand_ModifyGuildStatus_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GuildCommand_ModifyGuildStatus_registerFactory(void) */

void GuildCommand_ModifyGuildStatus_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x1d1 with the component factory using allocator thunk
                       014d3a30. The thunk constructs an instance whose constructor installs
                       GuildCommand_ModifyGuildStatus::vftable. */
  factoryFn = GuildCommand_ModifyGuildStatus_create;
  typeId_ = 0x1d1;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

