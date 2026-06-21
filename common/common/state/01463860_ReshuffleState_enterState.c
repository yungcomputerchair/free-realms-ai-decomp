// addr: 0x01463860
// name: ReshuffleState_enterState
// subsystem: common/rules/state
// source (binary assert): common/common/state/ReshuffleState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall ReshuffleState_enterState(int *param_1)

{
  char cVar1;
  void *game;
  int iVar2;
  undefined4 unaff_EDI;
  char *fmt;
  
                    /* Enter-state method for ReshuffleState: logs entry, invokes setup, pops the
                       return value map, requires kPlayerReturn, stores the player, and returns a
                       wait/continue state code. Evidence is ReshuffleState::enterState string and
                       ReshuffleState.cpp asserts. */
  fmt = "ReshuffleState::enterState";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,unaff_EDI);
  (**(code **)(*param_1 + 0x4c))();
  iVar2 = StateMachine_popReturnValueMap();
  if (iVar2 == 0) {
    FUN_012f5a60("returnValueMap","..\\common\\common\\state\\ReshuffleState.cpp",0x28);
  }
  cVar1 = ReturnValueMap_hasIntegerKey(4);
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kPlayerReturn)",
                 "..\\common\\common\\state\\ReshuffleState.cpp",0x2a);
  }
  iVar2 = ReturnValueMap_getInteger(4);
  param_1[0x38] = iVar2;
  return 2;
}

