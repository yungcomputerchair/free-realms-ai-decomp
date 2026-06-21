// addr: 0x01371320
// name: Game_tokensMoved
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool Game_tokensMoved(void * this, int playerID_, int fromOrTokenID_, int
   toOrCount_) */

bool __thiscall Game_tokensMoved(void *this,int playerID_,int fromOrTokenID_,int toOrCount_)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  undefined1 uVar4;
  int *piVar5;
  uint uStack_450;
  int local_440 [10];
  int local_418;
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
  
                    /* Logs and dispatches a tokensMoved event to the current turn state machine
                       with event id 8. The method forwards three integer fields after asserting a
                       current turn exists. */
  puStack_3f8 = &LAB_01680d03;
  local_3fc = ExceptionList;
  uStack_450 = DAT_01b839d8 ^ (uint)local_3f0;
  local_400 = (undefined1 *)&uStack_450;
  ExceptionList = &local_3fc;
  local_401 = 0;
  local_3f4 = 0;
  local_408 = this;
  puVar3 = &uStack_450;
  local_8 = uStack_450;
  if (*(int *)((int)this + 0x68) == 0) {
    FUN_012f5a60("mCurrentTurn","..\\common\\common\\game\\Game.cpp",0x1032);
    puVar3 = (uint *)local_400;
  }
  local_400 = (undefined1 *)puVar3;
  iVar2 = toOrCount_;
  iVar1 = fromOrTokenID_;
  Game_writeGameLog(this,"tokensMoved\t%d\t%d\t%d",playerID_,fromOrTokenID_,toOrCount_);
  TimeStamp_setCurrentFtime(local_440);
  piVar5 = IntDefaultMap_getOrInsert((void *)((int)this + 0x268),&playerID_);
  *piVar5 = local_440[0];
  local_418 = playerID_;
  local_414 = iVar1;
  local_410 = iVar2;
  piVar5 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  uVar4 = (**(code **)(*piVar5 + 0x38))(8,&local_418);
  ExceptionList = local_3fc;
  return (bool)uVar4;
}

