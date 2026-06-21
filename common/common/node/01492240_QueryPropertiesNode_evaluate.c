// addr: 0x01492240
// name: QueryPropertiesNode_evaluate
// subsystem: common/common/node
// source (binary assert): common/common/node/QueryPropertiesNode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool QueryPropertiesNode_evaluate(void * this, void * outValue, void *
   environment) */

bool __thiscall QueryPropertiesNode_evaluate(void *this,void *outValue,void *environment)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  void *context;
  int iVar8;
  char *pcVar9;
  undefined1 local_c4 [4];
  int local_c0;
  int local_b8;
  undefined1 local_b4 [28];
  undefined1 local_98 [28];
  undefined1 local_7c [28];
  undefined1 local_60 [28];
  undefined1 local_44 [28];
  undefined1 local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Evaluates query properties such as phase, event, pile compare, current
                       action, drawability, card-played state, and ownership, then applies
                       comparison operators or returns a count. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a2221;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffff2c;
  ExceptionList = &local_c;
  EvaluationEnvironment_traceEnterf(environment,"(query properties",uVar3);
  pvVar4 = EvaluationEnvironment_getGame(environment);
  iVar8 = 0;
  switch(*(int *)((int)this + 0x1c)) {
  case 1:
    piVar6 = Game_getCurrentTurn(pvVar4);
    iVar8 = (**(code **)(*piVar6 + 0x3c))();
    pcVar9 = "property: phase => %d";
    iVar5 = iVar8;
    break;
  case 2:
    Game_getCurrentTurn(pvVar4);
    iVar8 = FUN_013f7ea0();
    pcVar9 = "property: specific phase => %d";
    iVar5 = iVar8;
    break;
  case 3:
    Game_getCurrentTurn(pvVar4);
    iVar8 = FUN_013f7eb0();
    pcVar9 = "property: event => %d";
    iVar5 = iVar8;
    break;
  case 4:
    local_b8 = 0x33;
    IntPointerMap_getOrInsertValueSlot((void *)((int)this + 4),&local_b8);
    iVar8 = FUN_0123c340();
    pcVar9 = "property: pile compare => %d";
    iVar5 = iVar8;
    break;
  case 5:
    pvVar4 = CommandObject_getActionFromEnvironment(environment);
    if (pvVar4 == (void *)0x0) {
      FUN_012f5a60("environment->getCurrentAction()",
                   "..\\common\\common\\node\\QueryPropertiesNode.cpp",0x59);
    }
    pvVar4 = EvaluationEnvironment_getOriginCard(environment);
    if (pvVar4 == (void *)0x0) {
      FUN_012f5a60("environment->getOriginCard()",
                   "..\\common\\common\\node\\QueryPropertiesNode.cpp",0x5a);
    }
    CommandObject_getActionFromEnvironment(environment);
    pvVar4 = EvaluationEnvironment_getOriginCard(environment);
    bVar1 = card_check_target_modifier_predicates(pvVar4,context);
    iVar8 = 2 - (uint)bVar1;
    goto LAB_01492600;
  case 6:
    pvVar4 = EvaluationEnvironment_getMember14(environment);
    if (pvVar4 != (void *)0x0) {
      pvVar4 = EvaluationEnvironment_getGame(environment);
      piVar6 = Game_getCurrentTurn(pvVar4);
      iVar8 = *piVar6;
      EvaluationEnvironment_getMember14(environment);
      uVar7 = GamePlayer_getPlayerId();
      cVar2 = (**(code **)(iVar8 + 0x40))(uVar7);
      if (cVar2 != '\0') {
        FUN_01300680(1);
        *(undefined1 *)((int)outValue + 8) = 1;
        pvVar4 = environment;
        EvaluationEnvironment_tracef(environment,"Can Draw Card",uVar3);
        EvaluationEnvironment_traceExitf(environment,") => true",pvVar4);
        ExceptionList = local_c;
        return true;
      }
    }
    FUN_01300680(1);
    *(undefined1 *)((int)outValue + 8) = 0;
    pvVar4 = environment;
    EvaluationEnvironment_tracef(environment,"Can\'t Draw Card",uVar3);
    EvaluationEnvironment_traceExitf(environment,") => false",pvVar4);
    ExceptionList = local_c;
    return false;
  case 7:
    EvaluationEnvironment_tracef
              (environment,"Checking to see if no card of type has been played.",uVar3);
    if (*(int *)((int)this + 0x28) == 5) {
      iVar8 = (int)this + 0x24;
      pvVar4 = EvaluationEnvironment_getGame(environment);
      Game_getCurrentTurn(pvVar4);
      cVar2 = FUN_013fd570(iVar8);
      if (cVar2 == '\0') {
        EvaluationEnvironment_tracef(environment,"Card of type has not been played.",uVar3);
        goto LAB_0149248a;
      }
      pcVar9 = "Card of type has been played.";
    }
    else {
      pcVar9 = "mValue isn\'t an expressiontree.";
    }
    goto LAB_01492436;
  case 8:
    EvaluationEnvironment_tracef
              (environment,"Checking to see if the player owns the target card.",uVar3);
    if (*(int *)((int)this + 0x28) == 2) {
      iVar5 = FUN_0123c340();
      if (iVar5 == 1) {
        EvaluationEnvironment_tracef(environment,"checking target1",uVar3);
        piVar6 = EvaluationEnvironment_getTargetCard(environment);
        if (piVar6 != (int *)0x0) {
          EvaluationEnvironment_getMember14(environment);
          iVar8 = GamePlayer_getPlayerId();
          iVar5 = (**(code **)(*piVar6 + 0x28))();
          if (iVar8 == iVar5) {
            EvaluationEnvironment_getMember14(environment);
            uVar7 = GamePlayer_getPlayerId();
            EvaluationEnvironment_tracef(environment,"TargetCard is owned by player %d",uVar7);
LAB_0149248a:
            FUN_01300680(1);
            *(undefined1 *)((int)outValue + 8) = 1;
            ExceptionList = local_c;
            return true;
          }
          EvaluationEnvironment_getMember14(environment);
          uVar7 = GamePlayer_getPlayerId();
          EvaluationEnvironment_tracef(environment,"TargetCard is NOT owned by player %d",uVar7);
          goto LAB_0149243f;
        }
        pcVar9 = "TargetCard is Null!";
      }
      else {
        iVar5 = FUN_0123c340();
        if (iVar5 != 2) goto LAB_01492600;
        EvaluationEnvironment_tracef(environment,"checking target2",uVar3);
        piVar6 = EvaluationEnvironment_getTarget2Card(environment);
        if (piVar6 != (int *)0x0) {
          EvaluationEnvironment_getMember14(environment);
          iVar8 = GamePlayer_getPlayerId();
          iVar5 = (**(code **)(*piVar6 + 0x28))();
          if (iVar8 == iVar5) {
            EvaluationEnvironment_getMember14(environment);
            uVar7 = GamePlayer_getPlayerId();
            EvaluationEnvironment_tracef(environment,"Target2Card is owned by player %d",uVar7);
            goto LAB_0149248a;
          }
          EvaluationEnvironment_getMember14(environment);
          uVar7 = GamePlayer_getPlayerId();
          EvaluationEnvironment_tracef(environment,"Target2Card is NOT owned by player %d",uVar7);
          goto LAB_0149243f;
        }
        pcVar9 = "Target2Card is Null!";
      }
    }
    else {
      pcVar9 = "mValue isn\'t an integer.";
    }
LAB_01492436:
    EvaluationEnvironment_tracef(environment,pcVar9,uVar3);
LAB_0149243f:
    FUN_01300680(1);
    *(undefined1 *)((int)outValue + 8) = 0;
    ExceptionList = local_c;
    return false;
  default:
    iVar8 = -1;
    pcVar9 = "Unhandled case in QueryPropertiesNode::evaluate() switch(mProperty)%d): ";
    iVar5 = *(int *)((int)this + 0x1c);
  }
  EvaluationEnvironment_tracef(environment,pcVar9,iVar5);
LAB_01492600:
  FUN_012fa910();
  local_4 = 0;
  FUN_013010e0((int)this + 0x24);
  if (local_c0 == 5) {
    FUN_01301590(environment);
  }
  EvaluationEnvironment_tracef(environment,"Comparison: ",uVar3);
  switch(*(undefined4 *)((int)this + 0x20)) {
  case 1:
    pvVar4 = ValueData_toString(local_c4,local_7c);
    local_4._0_1_ = 1;
    if (*(uint *)((int)pvVar4 + 0x18) < 0x10) {
      iVar5 = (int)pvVar4 + 4;
    }
    else {
      iVar5 = *(int *)((int)pvVar4 + 4);
    }
    EvaluationEnvironment_tracef(environment,"%s equal %d",iVar5);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0041f1d7();
    bVar1 = ValueData_containsInt(local_c4,iVar8);
    if (!bVar1) goto LAB_014928ff;
    break;
  case 2:
    ValueData_toString(local_c4,local_b4);
    local_4._0_1_ = 2;
    EvaluationEnvironment_tracef(environment,"%d less than %s",iVar8);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0041f1d7();
    iVar5 = FUN_0123c340();
    if (iVar5 <= iVar8) goto LAB_014928ff;
    break;
  case 3:
    ValueData_toString(local_c4,local_44);
    local_4._0_1_ = 3;
    EvaluationEnvironment_tracef(environment,"%d greater than %s",iVar8);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0041f1d7();
    iVar5 = FUN_0123c340();
    if (iVar8 <= iVar5) goto LAB_014928ff;
    break;
  case 4:
    pvVar4 = ValueData_toString(local_c4,local_98);
    local_4._0_1_ = 4;
    if (*(uint *)((int)pvVar4 + 0x18) < 0x10) {
      iVar5 = (int)pvVar4 + 4;
    }
    else {
      iVar5 = *(int *)((int)pvVar4 + 4);
    }
    EvaluationEnvironment_tracef(environment,"%s not equal %d",iVar5);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0041f1d7();
    bVar1 = ValueData_containsInt(local_c4,iVar8);
    if (bVar1) goto LAB_014928ff;
    break;
  case 5:
    ValueData_toString(local_c4,local_60);
    local_4._0_1_ = 5;
    EvaluationEnvironment_tracef(environment,"%d less than or equal %s",iVar8);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0041f1d7();
    iVar5 = FUN_0123c340();
    if (iVar5 < iVar8) goto LAB_014928ff;
    break;
  case 6:
    ValueData_toString(local_c4,local_28);
    local_4._0_1_ = 6;
    EvaluationEnvironment_tracef(environment,"%d greater than or equal %s",iVar8);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0041f1d7();
    iVar5 = FUN_0123c340();
    if (iVar8 < iVar5) goto LAB_014928ff;
    break;
  case 7:
    EvaluationEnvironment_tracef(environment,"count %d",iVar8);
    FUN_01300680(2);
    *(int *)((int)outValue + 8) = iVar8;
    if (iVar8 < 1) goto LAB_014928ff;
    goto LAB_014926c5;
  default:
    FUN_012f5a60("!\"Unhandled case in QueryPropertiesNode::evaluate() switch(mComparison)):\"",
                 "..\\common\\common\\node\\QueryPropertiesNode.cpp",0x11a);
LAB_014928ff:
    EvaluationEnvironment_traceExitf(environment,") => false",uVar3);
    local_4 = 0xffffffff;
    FUN_01300cd0();
    ExceptionList = local_c;
    return false;
  }
  FUN_01300680(1);
  *(undefined1 *)((int)outValue + 8) = 1;
LAB_014926c5:
  EvaluationEnvironment_traceExitf(environment,") => true",uVar3);
  local_4 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_c;
  return true;
}

