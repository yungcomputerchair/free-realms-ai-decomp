// addr: 0x0135f200
// name: Game_setPlayerIdDefaultsExcept
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_setPlayerIdDefaultsExcept(void * this, int excludedPlayerId_, int
   defaultValue_) */

void __thiscall Game_setPlayerIdDefaultsExcept(void *this,int excludedPlayerId_,int defaultValue_)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int local_c;
  void *local_8;
  uint local_4;
  
                    /* Iterates a player pointer vector and writes defaultValue into an int-keyed
                       default map for every player except the excluded id. Evidence: repeated
                       GamePlayer_getPlayerId calls and IntDefaultMap_getOrInsert keyed by player
                       id. */
  uVar3 = *(uint *)((int)this + 0x2c);
  local_8 = this;
  local_4 = uVar3;
  if (uVar3 < *(uint *)((int)this + 0x28)) {
    FUN_00d83c2d();
  }
  uVar4 = *(uint *)((int)this + 0x28);
  if (*(uint *)((int)this + 0x2c) < uVar4) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xffffffdc) {
      FUN_00d83c2d();
    }
    if (uVar4 == uVar3) break;
    if (this == (void *)0xffffffdc) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)this + 0x2c) <= uVar4) {
      FUN_00d83c2d();
    }
    iVar1 = GamePlayer_getPlayerId();
    if (iVar1 != excludedPlayerId_) {
      local_c = GamePlayer_getPlayerId();
      piVar2 = IntDefaultMap_getOrInsert((void *)((int)local_8 + 0x29c),&local_c);
      *piVar2 = defaultValue_;
    }
    if (*(uint *)((int)this + 0x2c) <= uVar4) {
      FUN_00d83c2d();
    }
    uVar4 = uVar4 + 4;
    uVar3 = local_4;
  }
  return;
}

