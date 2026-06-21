// addr: 0x0149e270
// name: ActionPlayNode_execute
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionPlayNode_execute(void * this, void * log) */

bool __thiscall ActionPlayNode_execute(void *this,void *log)

{
  char cVar1;
  void *element;
  void *pvVar2;
  int *element_00;
  int iVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  void *this_00;
  undefined4 uVar7;
  TypeDescriptor *pTVar8;
  TypeDescriptor *pTVar9;
  undefined4 uVar10;
  char *fmt;
  int iStack_dc;
  int iStack_d8;
  undefined1 auStack_d4 [4];
  void *pvStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  void *local_c4;
  int aiStack_c0 [2];
  void *local_b8;
  void *local_b4;
  int iStack_b0;
  int *piStack_ac;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* Executes an action-play node by resolving the target card, selecting or
                       inferring an action id, warning if multiple valid actions require player
                       choice, constructing a CommandObjectPlayCard, setting command flags, and
                       queuing it. Evidence is the actionplaynode error text, multiple-valid-action
                       warning, and CommandObjectPlayCard construction/flag calls. */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_016a41a4;
  local_c = ExceptionList;
  element = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff10);
  ExceptionList = &local_c;
  uVar10 = 0;
  pTVar9 = &Card::RTTI_Type_Descriptor;
  pTVar8 = &PlayElement::RTTI_Type_Descriptor;
  uVar7 = 0;
  pvVar2 = EvaluationEnvironment_resolveTarget(log);
  element_00 = (int *)FUN_00d8d382(pvVar2,uVar7,pTVar8,pTVar9,uVar10);
  if (element_00 == (int *)0x0) {
    EvaluationEnvironment_tracef(log,"Error! didn\'t have target in actionplaynode",element);
    ExceptionList = local_c;
    return false;
  }
  if (element_00[0x19] == 0) {
    EvaluationEnvironment_getMember14(log);
    iVar3 = GamePlayer_getPlayerId();
    pvVar2 = EvaluationEnvironment_getGame(log);
    iVar4 = Game_getMyPlayerID(pvVar2);
    if (iVar3 != iVar4) {
      EvaluationEnvironment_tracef
                (log,
                 "Trying to play a card that hasn\'t been introduced yet. assuming it will be later."
                 ,element);
      ExceptionList = local_c;
      return true;
    }
  }
  local_b4 = EvaluationEnvironment_getOriginCard(log);
  local_c4 = CommandObject_getActionFromEnvironment(log);
  local_b8 = EvaluationEnvironment_getAction(log);
  FUN_013815c0(local_b8);
  set_play_element_id_field(log,element_00);
  pvVar2 = EvaluationEnvironment_resolveTarget2(log);
  EvaluationEnvironment_setCurrentTargetFromElement(log,pvVar2,element);
  uVar7 = (**(code **)(*element_00 + 0xcc))();
  EvaluationEnvironment_setActionReturn(uVar7);
  iStack_d8 = 0;
  iStack_dc = 0;
  pvVar2 = EvaluationEnvironment_resolveTarget2(log);
  if (((pvVar2 == (void *)0x0) && (*(char *)((int)this + 0x18) == '\0')) &&
     (*(char *)((int)this + 0x19) == '\0')) {
    pvStack_d0 = (void *)0x0;
    uStack_cc = 0;
    uStack_c8 = 0;
    iStack_4 = 0;
    (**(code **)(*element_00 + 0x114))(auStack_d4,3);
    piVar5 = (int *)FUN_01258f50(aiStack_c0);
    iStack_b0 = *piVar5;
    piStack_ac = (int *)piVar5[1];
    piVar5 = (int *)FUN_01258f20(auStack_a8);
    aiStack_c0[0] = *piVar5;
    piVar5 = (int *)piVar5[1];
    while( true ) {
      iVar3 = aiStack_c0[0];
      if ((aiStack_c0[0] == 0) || (aiStack_c0[0] != iStack_b0)) {
        FUN_00d83c2d();
      }
      if (piVar5 == piStack_ac) break;
      if (iVar3 == 0) {
        FUN_00d83c2d();
      }
      if (*(int **)(iVar3 + 8) <= piVar5) {
        FUN_00d83c2d();
      }
      iVar3 = *piVar5;
      if ((iVar3 != 0) && (iVar4 = FUN_01321f20(), iVar4 != 0x5e69ed0)) {
        EvaluationEnvironment_ctor();
        iStack_4._0_1_ = 1;
        EvaluationEnvironment_copyFrom(auStack_a0,log,element);
        EvaluationEnvironment_setBooleanKey9(1);
        EvaluationEnvironment_setBooleanKey4(0);
        EvaluationEnvironment_setActionReturn(iVar3);
        set_play_element_id_field(auStack_a0,element_00);
        set_boolean_value_key_18(true);
        set_boolean_value_key_17(true);
        cVar1 = (**(code **)(*element_00 + 0xdc))(iVar3,auStack_a0,1);
        if (cVar1 != '\0') {
          iStack_d8 = iStack_d8 + 1;
          iStack_dc = iVar3;
        }
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        FUN_01385460();
      }
      if (*(int **)(aiStack_c0[0] + 8) <= piVar5) {
        FUN_00d83c2d();
      }
      piVar5 = piVar5 + 1;
    }
    iStack_4 = 0xffffffff;
    if (pvStack_d0 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_d0);
    }
    pvStack_d0 = (void *)0x0;
    uStack_cc = 0;
    uStack_c8 = 0;
  }
  if (*(char *)((int)this + 0x19) == '\x01') {
    iStack_dc = FUN_01394d40();
  }
  if (iStack_dc == 0) {
    iStack_dc = (**(code **)(*element_00 + 0xcc))();
  }
  EvaluationEnvironment_setActionReturn(iStack_dc);
  pvVar2 = Mem_Alloc(0x124);
  iStack_4 = 2;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = CommandObjectPlayCard_ctor(pvVar2,log);
  }
  iStack_4 = 0xffffffff;
  if ((((iStack_d8 < 2) ||
       (pvVar6 = EvaluationEnvironment_resolveTarget2(log), pvVar6 != (void *)0x0)) ||
      (*(char *)((int)this + 0x18) != '\0')) || (*(char *)((int)this + 0x19) != '\0')) {
    if ((*(char *)((int)this + 0x18) == '\x01') || (*(char *)((int)this + 0x19) == '\x01')) {
      CommandObjectPlayCard_setFlag21((void *)0x1,SUB41(element,0));
    }
  }
  else {
    pvVar6 = EvaluationEnvironment_getMember14(log);
    if (pvVar6 != (void *)0x0) {
      fmt = "This card has more than 1 valid action, right-click to select which action to take.";
      this_00 = EvaluationEnvironment_getGame(log);
      GamePlayer_logFormattedMessage(this_00,(int)pvVar6,fmt);
    }
    CommandObjectPlayCard_setStateMachine(pvVar2,(void *)0x14b,element);
  }
  FUN_013815c0(local_b8);
  EvaluationEnvironment_addCommandObject(log,pvVar2,element);
  set_play_element_id_field(log,local_b4);
  EvaluationEnvironment_setCurrentTargetFromElement(log,element_00,element);
  EvaluationEnvironment_setActionReturn(local_c4);
  ExceptionList = local_c;
  return true;
}

