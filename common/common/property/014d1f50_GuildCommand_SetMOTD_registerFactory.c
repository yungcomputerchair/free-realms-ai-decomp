// addr: 0x014d1f50
// name: GuildCommand_SetMOTD_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GuildCommand_SetMOTD_registerFactory(void) */

void GuildCommand_SetMOTD_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x1d2 with the component factory using allocator thunk
                       014d1ef0. The thunk constructs an instance whose constructor installs
                       GuildCommand_SetMOTD::vftable. */
  factoryFn = GuildCommand_SetMOTD_create;
  typeId_ = 0x1d2;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

