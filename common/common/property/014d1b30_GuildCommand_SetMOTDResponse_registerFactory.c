// addr: 0x014d1b30
// name: GuildCommand_SetMOTDResponse_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GuildCommand_SetMOTDResponse_registerFactory(void) */

void GuildCommand_SetMOTDResponse_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x1d4 with the component factory using allocator thunk
                       014d1ad0. The thunk constructs an instance whose constructor installs
                       GuildCommand_SetMOTDResponse::vftable. */
  factoryFn = GuildCommand_SetMOTDResponse_create;
  typeId_ = 0x1d4;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

