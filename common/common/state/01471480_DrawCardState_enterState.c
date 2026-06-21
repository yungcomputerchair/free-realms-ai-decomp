// addr: 0x01471480
// name: DrawCardState_enterState
// subsystem: common/rules/state
// source (binary assert): common/common/state/DrawCardState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall DrawCardState_enterState(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  void *game;
  int iVar2;
  int iVar3;
  undefined4 unaff_EDI;
  char *fmt;
  
                    /* DrawCardState enter handler that logs, reads kPlayerReturn,
                       kCardPlayedReturn, kNumShownReturn, kDrawPositionReturn, and an optional
                       extra return, then advances through the state's next virtual step. Evidence
                       is DrawCardState::enterState string and DrawCardState.cpp return-key asserts.
                        */
  fmt = "DrawCardState::enterState";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,unaff_EDI);
  (**(code **)(*param_1 + 0x4c))();
  iVar2 = StateMachine_popReturnValueMap();
  if (iVar2 == 0) {
    FUN_012f5a60(&DAT_018e3654,"..\\common\\common\\state\\DrawCardState.cpp",0x45);
  }
  cVar1 = ReturnValueMap_hasIntegerKey(4);
  if (cVar1 == '\0') {
    FUN_012f5a60("rvm->hasIntegerKey(kPlayerReturn)","..\\common\\common\\state\\DrawCardState.cpp",
                 0x47);
  }
  iVar3 = ReturnValueMap_getInteger(4);
  param_1[0x3e] = iVar3;
  cVar1 = ReturnValueMap_hasIntegerKey(3);
  if (cVar1 == '\0') {
    FUN_012f5a60("rvm->hasIntegerKey(kCardPlayedReturn)",
                 "..\\common\\common\\state\\DrawCardState.cpp",0x4a);
  }
  iVar3 = ReturnValueMap_getInteger(3);
  param_1[0x3f] = iVar3;
  cVar1 = ReturnValueMap_hasIntegerKey(0x15);
  if (cVar1 == '\0') {
    FUN_012f5a60("rvm->hasIntegerKey(kNumShownReturn)",
                 "..\\common\\common\\state\\DrawCardState.cpp",0x4d);
  }
  iVar3 = ReturnValueMap_getInteger(0x15);
  param_1[0x40] = iVar3;
  cVar1 = ReturnValueMap_hasIntegerKey(0x1c);
  if (cVar1 == '\0') {
    FUN_012f5a60("rvm->hasIntegerKey(kDrawPositionReturn)",
                 "..\\common\\common\\state\\DrawCardState.cpp",0x50);
  }
  iVar3 = ReturnValueMap_getInteger(0x1c);
  param_1[0x41] = iVar3;
  cVar1 = ReturnValueMap_hasIntegerKey(0x38);
  if (cVar1 != '\0') {
    iVar3 = ReturnValueMap_getInteger(0x38);
    param_1[0x49] = iVar3;
  }
  StateMachine_destroyReturnValueMap(iVar2);
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x124);
  param_1[0x42] = 1;
                    /* WARNING: Could not recover jumptable at 0x014715bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

