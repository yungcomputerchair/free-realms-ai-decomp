// addr: 0x014d42d0
// name: GuildCommand_Kick_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GuildCommand_Kick_registerFactory(void) */

void GuildCommand_Kick_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x1aa with the component factory using allocator thunk
                       014d4270. The thunk constructs an instance whose constructor installs
                       GuildCommand_Kick::vftable. */
  factoryFn = GuildCommand_Kick_create;
  typeId_ = 0x1aa;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

