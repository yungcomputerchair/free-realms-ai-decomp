// addr: 0x0144d440
// name: CWProcessEventEmissionState_keepGoing
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall CWProcessEventEmissionState_keepGoing(void *param_1)

{
  void *game;
  undefined4 unaff_ESI;
  char *fmt;
  
                    /* Logs 'CWProcessEventEmissionState::keepGoing' and delegates to
                       StateMachineState_shouldContinueWaiting. */
  fmt = "CWProcessEventEmissionState::keepGoing";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,unaff_ESI);
  StateMachineState_shouldContinueWaiting(param_1);
  return;
}

