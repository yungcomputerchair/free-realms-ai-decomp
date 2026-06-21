// addr: 0x014d5ab0
// name: GuildCommand_Chat_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GuildCommand_Chat_registerFactory(void) */

void GuildCommand_Chat_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x1d0 with the component factory using allocator thunk
                       014d5a50. The thunk constructs an instance whose constructor installs
                       GuildCommand_Chat::vftable. */
  factoryFn = GuildCommand_Chat_create;
  typeId_ = 0x1d0;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

