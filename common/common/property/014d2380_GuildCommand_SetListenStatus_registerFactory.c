// addr: 0x014d2380
// name: GuildCommand_SetListenStatus_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GuildCommand_SetListenStatus_registerFactory(void) */

void GuildCommand_SetListenStatus_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x1ad with the component factory using allocator thunk
                       014d2320. The thunk constructs an instance whose constructor installs
                       GuildCommand_SetListenStatus::vftable. */
  factoryFn = GuildCommand_SetListenStatus_create;
  typeId_ = 0x1ad;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

