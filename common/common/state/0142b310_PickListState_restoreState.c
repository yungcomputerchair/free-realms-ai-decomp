// addr: 0x0142b310
// name: PickListState_restoreState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 PickListState_restoreState(void)

{
  void *game;
  undefined4 unaff_retaddr;
  char *fmt;
  
                    /* Logs 'PickListState::restoreState' and returns success. The string directly
                       names the method. */
  fmt = "PickListState::restoreState";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,unaff_retaddr);
  return 1;
}

