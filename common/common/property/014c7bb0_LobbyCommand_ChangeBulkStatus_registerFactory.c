// addr: 0x014c7bb0
// name: LobbyCommand_ChangeBulkStatus_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_ChangeBulkStatus_registerFactory(void) */

void LobbyCommand_ChangeBulkStatus_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_ChangeBulkStatus component factory under type id
                       0x117. The wrapper passes factory thunk 014c7b50 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014c7900, whose body installs
                       LobbyCommand_ChangeBulkStatus::vftable. */
  factoryFn = FUN_014c7b50;
  typeId_ = 0x117;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

