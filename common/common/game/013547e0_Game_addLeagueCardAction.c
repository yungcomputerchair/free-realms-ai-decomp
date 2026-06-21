// addr: 0x013547e0
// name: Game_addLeagueCardAction
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_addLeagueCardAction(void * this, int cardId, int actionId, int arg3,
   int arg4) */

void __thiscall Game_addLeagueCardAction(void *this,int cardId,int actionId,int arg3,int arg4)

{
  int version;
  
                    /* Logs and applies an addLeagueCardAction command through the ArchetypeDB using
                       the current game/ruleset context. */
  Game_logGeneral(this,"addLeagueCardAction\t%d\t%d\t%d\t%d",cardId);
  Game_writeGameLog(this,"addLeagueCardAction\t%d\t%d\t%d\t%d",cardId,actionId,arg3,arg4);
  version = *(int *)((int)this + 0x20);
  ArchetypeDB_getInstance();
  ArchetypeDB_addLeagueCardAction(cardId,actionId,arg3,arg4,version);
  return;
}

