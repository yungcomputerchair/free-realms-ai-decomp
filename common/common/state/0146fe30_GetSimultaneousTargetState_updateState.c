// addr: 0x0146fe30
// name: GetSimultaneousTargetState_updateState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall GetSimultaneousTargetState_updateState(int param_1)

{
  char cVar1;
  uint uVar2;
  void *game;
  undefined4 uVar3;
  char *fmt;
  void *local_20 [2];
  undefined1 local_18 [8];
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Implements the operation identified by referenced string
                       'GetSimultaneousTargetState::updateState'. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169ed23;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  fmt = "GetSimultaneousTargetState::updateState";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,uVar2);
  cVar1 = PlaySingleCardState_findHintForPlayer();
  if (cVar1 == '\0') {
    PlaySingleCardState_buildHintAction();
    ExceptionList = local_c;
    return 2;
  }
  local_20[0] = Mem_Alloc(0x18);
  uVar3 = 0;
  local_4 = 0;
  if (local_20[0] != (void *)0x0) {
    uVar3 = ReturnValueMap_ctor();
  }
  local_4 = 0xffffffff;
  FUN_012fa910();
  local_4 = 1;
  FUN_01300680(0xd);
  if (local_10 != param_1 + 0x104) {
    FUN_005152ac(local_20,local_10,**(undefined4 **)(local_10 + 4),local_10,
                 *(undefined4 **)(local_10 + 4));
    FUN_012415a0(param_1 + 0x104);
  }
  FUN_014181b0(0x14,local_18);
  StateMachine_pushPendingState(uVar3);
  local_4 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_c;
  return 1;
}

