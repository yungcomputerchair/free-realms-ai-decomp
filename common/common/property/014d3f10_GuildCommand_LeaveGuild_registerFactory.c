// addr: 0x014d3f10
// name: GuildCommand_LeaveGuild_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GuildCommand_LeaveGuild_registerFactory(void) */

void GuildCommand_LeaveGuild_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x1a7 with the component factory using allocator thunk
                       014d3eb0. The thunk constructs an instance whose constructor installs
                       GuildCommand_LeaveGuild::vftable. */
  factoryFn = GuildCommand_LeaveGuild_create;
  typeId_ = 0x1a7;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

