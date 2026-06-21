// addr: 0x014c3b10
// name: LobbyCommand_LeaveLeague_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_LeaveLeague_registerFactory(void) */

void LobbyCommand_LeaveLeague_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_LeaveLeague component factory under type id 0x155.
                       The wrapper passes factory thunk 014c3ab0 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014c3880, whose body installs
                       LobbyCommand_LeaveLeague::vftable. */
  factoryFn = LobbyCommand_LeaveLeague_create;
  typeId_ = 0x155;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

