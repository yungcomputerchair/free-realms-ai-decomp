// addr: 0x01370af0
// name: Game_cardSelected
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool Game_cardSelected(void * this, int playerID_, int cardID_, bool
   suppressEcho_, bool fromReplay_) */

bool __thiscall
Game_cardSelected(void *this,int playerID_,int cardID_,bool suppressEcho_,bool fromReplay_)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  uint uVar5;
  int *piVar6;
  int local_43c [10];
  int local_414;
  int local_410;
  void *local_408;
  undefined1 local_401;
  undefined1 *local_400;
  void *local_3fc;
  undefined1 *puStack_3f8;
  undefined4 local_3f4;
  undefined1 local_3f0 [1000];
  uint local_8;
  
                    /* Logs and dispatches cardSelected unless the game has ended, recording the
                       selected card while the state machine handles event id 5. It warns if cardID
                       is zero. */
  puStack_3f8 = &LAB_01680c13;
  local_3fc = ExceptionList;
  uVar5 = DAT_01b839d8 ^ (uint)local_3f0;
  local_400 = &stack0xfffffbb4;
  ExceptionList = &local_3fc;
  local_401 = 0;
  local_3f4 = 0;
  local_408 = this;
  puVar3 = &stack0xfffffbb4;
  local_8 = uVar5;
  if (*(int *)((int)this + 0x68) == 0) {
    FUN_012f5a60("mCurrentTurn","..\\common\\common\\game\\Game.cpp",0xf6c);
    puVar3 = local_400;
  }
  local_400 = puVar3;
  iVar2 = cardID_;
  iVar1 = playerID_;
  Game_writeGameLog(this,"cardSelected\t%d\t%d",playerID_,cardID_);
  if (suppressEcho_ == false) {
    Game_recordActionLogMessage(this,"cardSelected\t%d\t%d",iVar1,iVar2);
  }
  if (iVar2 == 0) {
    FUN_012f5dc0("Game::cardSelected got cardSelected = 0 (%d,%d)",iVar1,0);
  }
  if (*(char *)((int)this + 0x1d8) == '\x01') {
    Game_logGeneral(this,"Game is ended, not doing cardSelected",uVar5);
    uVar4 = 1;
  }
  else {
    TimeStamp_setCurrentFtime(local_43c);
    piVar6 = IntDefaultMap_getOrInsert((void *)((int)this + 0x268),&playerID_);
    *piVar6 = local_43c[0];
    *(int *)((int)this + 0x2ac) = iVar1;
    *(bool *)((int)this + 0x2a9) = fromReplay_;
    local_414 = iVar1;
    local_410 = iVar2;
    piVar6 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
    uVar4 = (**(code **)(*piVar6 + 0x38))(5,&local_414);
    *(undefined4 *)((int)this + 0x2ac) = 0;
  }
  ExceptionList = local_3fc;
  return (bool)uVar4;
}

