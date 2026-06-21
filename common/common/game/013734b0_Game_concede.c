// addr: 0x013734b0
// name: Game_concede
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_concede(void * this, int playerId_) */

void __thiscall Game_concede(void *this,int playerId_)

{
  bool bVar1;
  uint uVar2;
  void *this_00;
  undefined4 *this_01;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Handles a player concession: checks whether the player is already dead, logs
                       'Player %d has conceded!', writes a concede command/log entry, and dispatches
                       game commands. Evidence: concede strings. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168108b;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  bVar1 = Game_isPlayerAllowedToAct(this,playerId_);
  if (!bVar1) {
    Game_logGeneral(this,"Player %d has conceded!",playerId_);
    Game_writeGameLog(this,"concede\t%d",playerId_);
    this_00 = Mem_Alloc(0x28);
    this_01 = (undefined4 *)0x0;
    local_4 = 0;
    if (this_00 != (void *)0x0) {
      this_01 = GameCommand_ConcedeGame_ctor(this_00,this,uVar2);
    }
    local_4 = 0xffffffff;
    set_field_4(this_01,playerId_);
    Game_dispatchCommandToPlayerOrAll(playerId_,this_01);
    (**(code **)(*(int *)this + 0xb0))(playerId_,1);
  }
  ExceptionList = local_c;
  return;
}

