// addr: 0x01470e20
// name: ExecuteRuleState_restoreState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char ExecuteRuleState_restoreState(void * this) */

char __fastcall ExecuteRuleState_restoreState(void *this)

{
  void *game;
  undefined4 unaff_ESI;
  char *fmt;
  
                    /* Logs ExecuteRuleState::restoreState and returns 1 or 3 depending on the flag
                       at +0xfc. */
  fmt = "ExecuteRuleState::restoreState";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,unaff_ESI);
  return (*(char *)((int)this + 0xfc) != '\0') * '\x02' + '\x01';
}

