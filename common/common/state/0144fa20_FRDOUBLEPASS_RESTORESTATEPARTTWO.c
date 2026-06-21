// addr: 0x0144fa20
// name: FRDOUBLEPASS_RESTORESTATEPARTTWO
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FRDOUBLEPASS_RESTORESTATEPARTTWO(void *param_1)

{
  void *game;
  undefined4 unaff_ESI;
  char *fmt;
  
                    /* Logs 'FRDOUBLEPASS::RESTORESTATEPARTTWO' and calls
                       DoublePass_restoreStatePartTwo. */
  fmt = "FRDOUBLEPASS::RESTORESTATEPARTTWO";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,unaff_ESI);
  DoublePass_restoreStatePartTwo(param_1);
  return;
}

