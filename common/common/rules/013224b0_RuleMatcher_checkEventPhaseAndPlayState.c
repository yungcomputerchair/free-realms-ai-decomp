// addr: 0x013224b0
// name: RuleMatcher_checkEventPhaseAndPlayState
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall RuleMatcher_checkEventPhaseAndPlayState(int *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  void *pvVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
                    /* Checks whether a rule matcher is valid for current event, phase, player, and
                       card play-state, tracing failures. */
  cVar1 = (**(code **)(*param_2 + 0x1e8))();
  if (cVar1 != '\0') {
    return 1;
  }
  uVar7 = 0x12;
  uVar3 = (**(code **)(*param_1 + 0x50))();
  pvVar4 = (void *)FUN_01340340();
  piVar5 = Game_getCurrentTurn(pvVar4);
  uVar6 = (**(code **)(*piVar5 + 0x3c))();
  bVar2 = card_check_target_modifier_predicates(param_2,(void *)((ulonglong)uVar6 >> 0x20));
  pvVar4 = EvaluationEnvironment_getMember14(param_2);
  if (pvVar4 == (void *)0x0) {
    EvaluationEnvironment_tracef(param_2,"couldn\'t get player from environment.",uVar7);
    return 0;
  }
  cVar1 = (**(code **)(*param_2 + 0x48))();
  if (bVar2) {
    if (cVar1 == '\x01') {
      EvaluationEnvironment_tracef(param_2,"card is in Play and action is play action.",uVar7);
      return 0;
    }
  }
  else if (cVar1 == '\0') {
    EvaluationEnvironment_tracef(param_2,"card is not play action is not in play.",uVar7);
    return 0;
  }
  uVar3 = FUN_01340340((int)uVar6,uVar3);
  cVar1 = RuleMatcher_matchPhaseId(uVar3);
  if (cVar1 == '\0') {
    cVar1 = FUN_01383820();
    if (cVar1 == '\0') {
      EvaluationEnvironment_tracef(param_2,"failed phase check %d != %d",(int)uVar6);
      return 0;
    }
  }
  uVar3 = FUN_013f7eb0();
  uVar7 = (**(code **)(*param_1 + 0x50))(0xf);
  uVar7 = FUN_01340340(uVar3,uVar7);
  cVar1 = RuleMatcher_matchEventId(uVar7);
  if (cVar1 == '\0') {
    EvaluationEnvironment_tracef(param_2,"failed event check %d != %d",uVar3);
    return 0;
  }
  return 1;
}

