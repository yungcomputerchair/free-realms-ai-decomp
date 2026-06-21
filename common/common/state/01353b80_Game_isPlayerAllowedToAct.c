// addr: 0x01353b80
// name: Game_isPlayerAllowedToAct
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Game_isPlayerAllowedToAct(void * this, int playerId_) */

bool __thiscall Game_isPlayerAllowedToAct(void *this,int playerId_)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  char local_5;
  
                    /* Returns whether a player is allowed to perform selection/action based on game
                       flags, active player list membership, and the player element selection gate.
                        */
  if ((*(char *)((int)this + 0x131) == '\0') && (*(char *)((int)this + 0x1d8) == '\0')) {
    uVar1 = *(uint *)((int)this + 0x338);
    local_5 = '\x01';
    if (uVar1 < *(uint *)((int)this + 0x334)) {
      FUN_00d83c2d();
    }
    uVar4 = *(uint *)((int)this + 0x334);
    if (*(uint *)((int)this + 0x338) < uVar4) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (this == (void *)0xfffffcd0) {
        FUN_00d83c2d();
      }
      if (uVar4 == uVar1) break;
      if (this == (void *)0xfffffcd0) {
        FUN_00d83c2d();
      }
      if (*(uint *)((int)this + 0x338) <= uVar4) {
        FUN_00d83c2d();
      }
      iVar2 = GamePlayer_getPlayerId();
      if (iVar2 == playerId_) {
        local_5 = '\0';
      }
      if (*(uint *)((int)this + 0x338) <= uVar4) {
        FUN_00d83c2d();
      }
      uVar4 = uVar4 + 4;
    }
    if ((local_5 == '\0') &&
       (pvVar3 = PlayArea_findPlayerElementById(this,playerId_), pvVar3 != (void *)0x0)) {
      local_5 = GamePlayer_allowsSelectionKey199();
    }
    return (bool)local_5;
  }
  return true;
}

