// addr: 0x01469bf0
// name: MultiPlayerState_enterState
// subsystem: common/rules/state
// source (binary assert): common/common/state/MultiPlayerState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall MultiPlayerState_enterState(int *param_1)

{
  int *piVar1;
  code *UNRECOVERED_JUMPTABLE;
  char cVar2;
  void *this;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  int key_;
  int *piVar6;
  undefined8 uVar7;
  int playerId_;
  char *fmt;
  void *pvStack_4;
  
                    /* MultiPlayerState enter handler: reads player and player-list returns,
                       resolves player elements, validates an expression-tree value, applies
                       optional force flag, and advances state. Evidence is MultiPlayerState.cpp
                       asserts and MultiPlayer = PlayerList size log. */
  (**(code **)(*param_1 + 0x4c))();
  this = (void *)StateMachine_popReturnValueMap();
  if (this == (void *)0x0) {
    FUN_012f5a60("returnValueMap","..\\common\\common\\state\\MultiPlayerState.cpp",0x31);
  }
  cVar2 = ReturnValueMap_hasIntegerKey(4);
  if (cVar2 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kPlayerReturn)",
                 "..\\common\\common\\state\\MultiPlayerState.cpp",0x33);
  }
  uVar7 = ReturnValueMap_getInteger(4);
  param_1[0x49] = (int)uVar7;
  pvVar3 = ReturnValueMap_findValueData(this,(int)((ulonglong)uVar7 >> 0x20));
  if (pvVar3 == (void *)0x0) {
    FUN_012f5a60("valueList","..\\common\\common\\state\\MultiPlayerState.cpp",0x37);
  }
  if (((*(int *)((int)pvVar3 + 4) == 6) ||
      (FUN_012f5a60("valueList->isIntegerListValue()",
                    "..\\common\\common\\state\\MultiPlayerState.cpp",0x38),
      *(int *)((int)pvVar3 + 4) == 6)) ||
     (FUN_012f5a60("mTypeID == kIntegerListTypeID",
                   "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                   ,0x135), *(int *)((int)pvVar3 + 4) == 6)) {
    iVar4 = *(int *)((int)pvVar3 + 8);
  }
  else {
    iVar4 = 0;
  }
  piVar1 = *(int **)(iVar4 + 8);
  if (piVar1 < *(int **)(iVar4 + 4)) {
    FUN_00d83c2d();
  }
  piVar6 = *(int **)(iVar4 + 4);
  if (*(int **)(iVar4 + 8) < piVar6) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (iVar4 == 0) {
      FUN_00d83c2d();
    }
    if (piVar6 == piVar1) break;
    if (iVar4 == 0) {
      FUN_00d83c2d();
    }
    if (*(int **)(iVar4 + 8) <= piVar6) {
      FUN_00d83c2d();
    }
    playerId_ = *piVar6;
    pvVar3 = (void *)StateMachineState_getGame();
    pvStack_4 = PlayArea_findPlayerElementById(pvVar3,playerId_);
    if (pvStack_4 != (void *)0x0) {
      FUN_01336350(&pvStack_4);
    }
    if (*(int **)(iVar4 + 8) <= piVar6) {
      FUN_00d83c2d();
    }
    piVar6 = piVar6 + 1;
  }
  if (param_1[0x43] == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = param_1[0x44] - param_1[0x43] >> 2;
  }
  fmt = "MultiPlayer = PlayerList size: %d";
  pvVar3 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar3,fmt,iVar4);
  pvVar3 = ReturnValueMap_findValueData(this,key_);
  if (pvVar3 == (void *)0x0) {
    FUN_012f5a60(&DAT_018f0e08,"..\\common\\common\\state\\MultiPlayerState.cpp",0x47);
  }
  if (*(int *)((int)pvVar3 + 4) != 5) {
    FUN_012f5a60("maco->isExpressionTreeValue()","..\\common\\common\\state\\MultiPlayerState.cpp",
                 0x48);
  }
  FUN_013010e0(pvVar3);
  cVar2 = PointerVector_iteratorNotAtEnd(0x24);
  if (cVar2 != '\0') {
    cVar2 = ReturnValueMap_hasBooleanKey(0x24);
    if (cVar2 == '\0') {
      FUN_012f5a60("returnValueMap->hasBooleanKey(kForceReturn)",
                   "..\\common\\common\\state\\MultiPlayerState.cpp",0x4c);
    }
    uVar5 = ReturnValueMap_getBoolean(0x24);
    EvaluationEnvironment_setForceReturn(uVar5);
  }
  StateMachine_destroyReturnValueMap(this);
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x3c);
  param_1[0x41] = 1;
                    /* WARNING: Could not recover jumptable at 0x01469e22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

