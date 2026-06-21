// addr: 0x014c31b0
// name: LobbyCommand_NotifyOfIgnore_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_NotifyOfIgnore_registerFactory(void) */

void LobbyCommand_NotifyOfIgnore_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the LobbyCommand_NotifyOfIgnore component factory under type id
                       0x119. The wrapper passes factory thunk 014c3150 to
                       ComponentFactory_initSingleton/013ce230; that thunk allocates storage and
                       calls constructor 014c2da0, whose body installs
                       LobbyCommand_NotifyOfIgnore::vftable. */
  factoryFn = FUN_014c3150;
  typeId_ = 0x119;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

