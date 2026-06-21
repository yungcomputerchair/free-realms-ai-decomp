// addr: 0x0139eb10
// name: PlayerPlayArea_getValidTargetsForArea
// subsystem: common/common/game
// source (binary assert): common/common/game/PlayArea.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PlayerPlayArea_getValidTargetsForArea(void * this, int playAreaEnum_, int
   actionID_, void * valueData, void * outTargets, void * environment) */

bool __thiscall
PlayerPlayArea_getValidTargetsForArea
          (void *this,int playAreaEnum_,int actionID_,void *valueData,void *outTargets,
          void *environment)

{
  undefined1 uVar1;
  void *pvVar2;
  int playAreaEnum__00;
  undefined1 auStack_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Evaluates valid targets for a requested player play area, redirecting
                       opponent enums through the target player and delegating to the selected pile.
                       Defaults to true if targets already exist and false otherwise. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016855b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EvaluationEnvironment_countTracef
            (environment,"Entering PlayerPlayArea",DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  if (valueData == (void *)0x0) {
    FUN_012f5a60("valueData","..\\common\\common\\game\\PlayArea.cpp",0x1d6);
  }
  switch(playAreaEnum_) {
  case 0xb:
    uVar1 = (**(code **)(**(int **)((int)this + 0x50) + 0x44))
                      (actionID_,valueData,outTargets,environment);
    goto LAB_0139ebdf;
  default:
    if ((*(int *)((int)outTargets + 4) != 0) &&
       (*(int *)((int)outTargets + 8) - *(int *)((int)outTargets + 4) >> 2 != 0)) {
      ExceptionList = local_c;
      return true;
    }
    ExceptionList = local_c;
    return false;
  case 0x1e:
    pvVar2 = EvaluationEnvironment_getTargetPlayer(environment);
    if (pvVar2 == (void *)0x0) {
      FUN_012f5a60("environment->getTargetPlayer()","..\\common\\common\\game\\PlayArea.cpp",0x1d9);
    }
    playAreaEnum__00 = 0xb;
    break;
  case 0x23:
    pvVar2 = EvaluationEnvironment_getTargetPlayer(environment);
    if (pvVar2 == (void *)0x0) {
      FUN_012f5a60("environment->getTargetPlayer()","..\\common\\common\\game\\PlayArea.cpp",0x1e0);
    }
    playAreaEnum__00 = 6;
    break;
  case 0x3a:
    pvVar2 = EvaluationEnvironment_getTargetPlayer(environment);
    if (pvVar2 == (void *)0x0) {
      FUN_012f5a60("environment->getTargetPlayer()","..\\common\\common\\game\\PlayArea.cpp",0x1ed);
    }
    playAreaEnum__00 = 7;
  }
  EvaluationEnvironment_getTargetPlayer(environment);
  pvVar2 = (void *)PlayElement_getGame();
  uVar1 = PlayerPlayArea_getValidTargetsForArea
                    (pvVar2,playAreaEnum__00,actionID_,valueData,outTargets,environment);
LAB_0139ebdf:
  local_4 = 0xffffffff;
  STLVector_int_clear(auStack_1c);
  ExceptionList = local_c;
  return (bool)uVar1;
}

