// addr: 0x013715e0
// name: Game_synchPointReached
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool Game_synchPointReached(void * this, int synchPointID_) */

bool __thiscall Game_synchPointReached(void *this,int synchPointID_)

{
  int iVar1;
  uint *puVar2;
  undefined1 uVar3;
  int *piVar4;
  uint uStack_448;
  int local_434 [10];
  int local_40c;
  void *local_408;
  undefined1 local_401;
  undefined1 *local_400;
  void *local_3fc;
  undefined1 *puStack_3f8;
  undefined4 local_3f4;
  undefined1 local_3f0 [1000];
  uint local_8;
  
                    /* Logs and dispatches a synchPointReached event to the current turn state
                       machine with event id 0x10. It requires mCurrentTurn and forwards one integer
                       argument. */
  puStack_3f8 = &LAB_01680d53;
  local_3fc = ExceptionList;
  uStack_448 = DAT_01b839d8 ^ (uint)local_3f0;
  local_400 = (undefined1 *)&uStack_448;
  ExceptionList = &local_3fc;
  local_401 = 0;
  local_3f4 = 0;
  local_408 = this;
  puVar2 = &uStack_448;
  local_8 = uStack_448;
  if (*(int *)((int)this + 0x68) == 0) {
    FUN_012f5a60("mCurrentTurn","..\\common\\common\\game\\Game.cpp",0x106d);
    puVar2 = (uint *)local_400;
  }
  local_400 = (undefined1 *)puVar2;
  iVar1 = synchPointID_;
  Game_writeGameLog(this,"synchPointReached\t%d",synchPointID_);
  TimeStamp_setCurrentFtime(local_434);
  piVar4 = IntDefaultMap_getOrInsert((void *)((int)this + 0x268),&synchPointID_);
  *piVar4 = local_434[0];
  local_40c = iVar1;
  piVar4 = GameTurn_getCurrentStateMachine(*(void **)((int)this + 0x68));
  uVar3 = (**(code **)(*piVar4 + 0x38))(0x10,&local_40c);
  ExceptionList = local_3fc;
  return (bool)uVar3;
}

