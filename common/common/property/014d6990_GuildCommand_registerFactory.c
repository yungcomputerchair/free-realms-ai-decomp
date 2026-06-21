// addr: 0x014d6990
// name: GuildCommand_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GuildCommand_registerFactory(void) */

void GuildCommand_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x1a1 with the component factory using allocator thunk
                       014d6930. The thunk constructs an instance whose constructor installs
                       GuildCommand::vftable. */
  factoryFn = FUN_014d6930;
  typeId_ = 0x1a1;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

