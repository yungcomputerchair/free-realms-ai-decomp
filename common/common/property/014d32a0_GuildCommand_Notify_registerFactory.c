// addr: 0x014d32a0
// name: GuildCommand_Notify_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GuildCommand_Notify_registerFactory(void) */

void GuildCommand_Notify_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers opcode 0x1ab with the component factory using allocator thunk
                       014d3240. The thunk constructs an instance whose constructor installs
                       GuildCommand_Notify::vftable. */
  factoryFn = GuildCommand_Notify_create;
  typeId_ = 0x1ab;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

