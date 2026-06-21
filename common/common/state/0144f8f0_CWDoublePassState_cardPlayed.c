// addr: 0x0144f8f0
// name: CWDoublePassState_cardPlayed
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int CWDoublePassState_cardPlayed(void * this, int playerId_, int cardId_) */

int __thiscall CWDoublePassState_cardPlayed(void *this,int playerId_,int cardId_)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  char *fmt;
  
                    /* Logs CWDoublePassState::cardPlayed, validates active player when needed, and
                       forwards to card-played handling. */
  fmt = "CWDoublePassState::cardPlayed %d, %d";
  iVar3 = playerId_;
  pvVar1 = (void *)StateMachineState_getGame
                             ("CWDoublePassState::cardPlayed %d, %d",playerId_,cardId_);
  Game_logGeneral(pvVar1,fmt,iVar3);
  pvVar1 = (void *)StateMachineState_getCurrentTurn();
  uVar2 = get_field_8(pvVar1);
  if (uVar2 != 0) {
    pvVar1 = (void *)StateMachineState_getCurrentTurn();
    get_field_8(pvVar1);
    iVar3 = GamePlayer_getPlayerId();
    if (playerId_ != iVar3) {
      (**(code **)(*(int *)this + 0x88))();
      return 0;
    }
  }
  iVar3 = DoublePassState_cardPlayed(playerId_,cardId_);
  return iVar3;
}

