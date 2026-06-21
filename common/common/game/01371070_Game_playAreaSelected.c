// addr: 0x01371070
// name: Game_playAreaSelected
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool Game_playAreaSelected(void * this, int playerID_, int playAreaID_) */

bool __thiscall Game_playAreaSelected(void *this,int playerID_,int playAreaID_)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  undefined1 uVar4;
  int *piVar5;
  uint uStack_44c;
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
  
                    /* Logs and dispatches a playAreaSelected event to the current turn state
                       machine with event id 7. It packages the two integer arguments after checking
                       mCurrentTurn. */
  puStack_3f8 = &LAB_01680cb3;
  local_3fc = ExceptionList;
  uStack_44c = DAT_01b839d8 ^ (uint)local_3f0;
  local_400 = (undefined1 *)&uStack_44c;
  ExceptionList = &local_3fc;
  local_401 = 0;
  local_3f4 = 0;
  local_408 = this;
  puVar3 = &uStack_44c;
  local_8 = uStack_44c;
  if (*(int *)((int)this + 0x68) == 0) {
    FUN_012f5a60("mCurrentTurn","..\\common\\common\\game\\Game.cpp",0xff8);
    puVar3 = (uint *)local_400;
  }
  local_400 = (undefined1 *)puVar3;
  iVar2 = playAreaID_;
  iVar1 = playerID_;
  Game_writeGameLog(this,"playAreaSelected\t%d\t%d",playerID_,playAreaID_);
  TimeStamp_setCurrentFtime(local_43c);
  piVar5 = IntDefaultMap_getOrInsert((void *)((int)this + 0x268),&playerID_);
  *piVar5 = local_43c[0];
  local_414 = iVar1;
  local_410 = iVar2;
  piVar5 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  uVar4 = (**(code **)(*piVar5 + 0x38))(7,&local_414);
  ExceptionList = local_3fc;
  return (bool)uVar4;
}

