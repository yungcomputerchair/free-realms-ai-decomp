// addr: 0x015343d0
// name: EventCommand_RespondEventLeaderBoard_registerFactory
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EventCommand_RespondEventLeaderBoard_registerFactory(void) */

void EventCommand_RespondEventLeaderBoard_registerFactory(void)

{
  void *this;
  uint typeId_;
  code *factoryFn;
  
                    /* Registers the factory constructor for EventCommand_RespondEventLeaderBoard.
                       The registered thunk builds a large leaderboard response object with several
                       vectors/maps. */
  factoryFn = FUN_01534360;
  typeId_ = 0x206;
  ComponentFactory_initSingleton();
  ComponentFactory_setFactoryForType(this,typeId_,factoryFn);
  return;
}

