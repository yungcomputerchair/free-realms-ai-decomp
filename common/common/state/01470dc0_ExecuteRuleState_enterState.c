// addr: 0x01470dc0
// name: ExecuteRuleState_enterState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall ExecuteRuleState_enterState(int *param_1)

{
  bool bVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  char *pcVar4;
  
                    /* Logs 'Entering ExecuteRuleState', runs virtual entry hooks, checks for
                       game-over and returns bail status 2 if set, otherwise continues through a
                       virtual hook. */
  pcVar4 = "Entering ExecuteRuleState";
  pvVar2 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar2,pcVar4,unaff_ESI);
  (**(code **)(*param_1 + 0x4c))();
  pvVar2 = (void *)StateMachineState_getGame();
  bVar1 = unknown_getGameGuardFlag(pvVar2);
  if (bVar1) {
    pcVar4 = "Game is Over! bail.";
    pvVar2 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar2,pcVar4,unaff_ESI);
    return 2;
  }
                    /* WARNING: Could not recover jumptable at 0x01470e13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*param_1 + 0x3c))();
  return uVar3;
}

