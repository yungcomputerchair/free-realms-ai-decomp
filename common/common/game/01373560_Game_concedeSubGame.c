// addr: 0x01373560
// name: Game_concedeSubGame
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void Game_concedeSubGame(void * this, int playerId_) */

void __thiscall Game_concedeSubGame(void *this,int playerId_)

{
  bool bVar1;
  uint uVar2;
  void *this_00;
  int *piVar3;
  undefined4 *this_01;
  void *local_3fc;
  undefined1 *puStack_3f8;
  undefined4 local_3f4;
  undefined1 local_3f0 [1000];
  uint local_8;
  
                    /* Handles sub-game concession, logging restore-state guard text and 'Player %d
                       has conceded sub game %d!' before creating/dispatching concede commands.
                       Evidence: strings explicitly name Game::concedeSubGame. */
  local_3f4 = 0xffffffff;
  puStack_3f8 = &LAB_016810de;
  local_3fc = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)local_3f0;
  ExceptionList = &local_3fc;
  local_8 = uVar2;
  bVar1 = Game_isPlayerAllowedToAct(this,playerId_);
  if (!bVar1) {
    Game_logGeneral(this,"Player %d has conceded sub game %d!",playerId_);
    Game_writeGameLog(this,"concedeSubGame\t%d",playerId_);
    this_00 = Mem_Alloc(0x28);
    this_01 = (undefined4 *)0x0;
    local_3f4 = 0;
    if (this_00 != (void *)0x0) {
      this_01 = GameCommand_ConcedeGame_ctor(this_00,this,uVar2);
    }
    local_3f4 = 0xffffffff;
    set_field_4(this_01,playerId_);
    *(undefined1 *)(this_01 + 9) = 1;
    Game_dispatchCommandToPlayerOrAll(playerId_,this_01);
    (**(code **)(*(int *)this + 0xb0))(playerId_,4);
    local_3f4 = 1;
    if ((*(char *)((int)this + 0x1d8) == '\0') && (*(char *)((int)this + 0x131) != '\0')) {
      Game_logGeneral(this,"Game::concedeSubGame, Server or client restoring previous state",uVar2);
      piVar3 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
      (**(code **)(*piVar3 + 0x3c))(1);
    }
  }
  ExceptionList = local_3fc;
  return;
}

