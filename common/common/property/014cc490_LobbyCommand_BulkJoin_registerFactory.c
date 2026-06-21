// addr: 0x014cc490
// name: LobbyCommand_BulkJoin_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_BulkJoin_registerFactory(void) */

void LobbyCommand_BulkJoin_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_BulkJoin component factory under type id 0x6a. The
                       wrapper passes factory thunk 014cc430 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014cc2a0, whose body installs
                       LobbyCommand_BulkJoin::vftable. */
  factoryFn = FUN_014cc430;
  typeId_ = 0x6a;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

