// addr: 0x014d1620
// name: GuildCommand_ShowMOTD_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GuildCommand_ShowMOTD_registerFactory(void) */

void GuildCommand_ShowMOTD_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x1d3 with the component factory using allocator thunk
                       014d15c0. The thunk constructs an instance whose constructor installs
                       GuildCommand_ShowMOTD::vftable. */
  factoryFn = GuildCommand_ShowMOTD_create;
  typeId_ = 0x1d3;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

