// addr: 0x01423c30
// name: MacroNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool MacroNode_evaluate(void * this, void * result, void * log) */

bool __thiscall MacroNode_evaluate(void *this,void *result,void *log)

{
  void *env;
  char cVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  int *extraout_EAX;
  char *pcVar5;
  int iVar6;
  int elementId_;
  void *unaff_EDI;
  undefined4 uVar7;
  TypeDescriptor *pTVar8;
  TypeDescriptor *pTVar9;
  undefined4 uVar10;
  int iStack_18;
  int iStack_14;
  void *pvStack_10;
  undefined4 uStack_c;
  undefined1 auStack_8 [8];
  
                    /* Evaluates a MacroNode by comparing the query iterator card against macro
                       modes such as This, Bearer, UnFriendly, Enemy Of, and LastEventCard, then
                       writes a boolean result. Evidence is the "(MacroNode" trace and branch logs
                       "This Macro", "Bearer Macro", "Enemy Of Macro", and match/not-match messages.
                        */
  env = log;
  EvaluationEnvironment_traceEnterf(log,"(MacroNode",unaff_EDI);
  iVar2 = FUN_01383460(0x39);
  uVar10 = 0;
  pTVar9 = &Card::RTTI_Type_Descriptor;
  pTVar8 = &PlayElement::RTTI_Type_Descriptor;
  uVar7 = 0;
  pvVar3 = EvaluationEnvironment_getGame(env);
  pvVar3 = find_play_element_in_maps(pvVar3,elementId_);
  piVar4 = (int *)FUN_00d8d382(pvVar3,uVar7,pTVar8,pTVar9,uVar10);
  EvaluationEnvironment_logCardMessage(env,"found queryIter: ",(char *)piVar4,unaff_EDI);
  switch(*(undefined4 *)((int)this + 0x10)) {
  case 1:
    EvaluationEnvironment_tracef(env,"This Macro",unaff_EDI);
    pvVar3 = EvaluationEnvironment_getOriginCard(env);
    if (pvVar3 != (void *)0x0) {
      EvaluationEnvironment_getOriginCard(env);
      PlayElement_getId();
      EvaluationEnvironment_tracef(env,"checking queryIter: %d against OriginCard: %d",iVar2);
      EvaluationEnvironment_getOriginCard(env);
LAB_01423ce3:
      iVar6 = PlayElement_getId();
      if (iVar2 == iVar6) {
        pcVar5 = "Match!";
LAB_01423cf3:
        EvaluationEnvironment_tracef(env,pcVar5,unaff_EDI);
        FUN_012c5100(1);
        EvaluationEnvironment_traceExitf(env,") => true",unaff_EDI);
        return true;
      }
LAB_01423d21:
      EvaluationEnvironment_tracef(env,"Not Matched",unaff_EDI);
      FUN_012c5100(0);
      goto LAB_01423f97;
    }
    EvaluationEnvironment_tracef(env,"Couldn\'t get OriginCard",unaff_EDI);
    break;
  case 2:
    EvaluationEnvironment_tracef(env,"Bearer Macro",unaff_EDI);
    pvVar3 = EvaluationEnvironment_getOriginCard(env);
    if (pvVar3 != (void *)0x0) {
      piVar4 = EvaluationEnvironment_getOriginCard(env);
      iVar6 = (**(code **)(*piVar4 + 0x30))();
      if (iVar6 != 0) {
        piVar4 = EvaluationEnvironment_getOriginCard(env);
        (**(code **)(*piVar4 + 0x30))();
        PlayElement_getId();
        EvaluationEnvironment_tracef
                  (env,"checking queryIter: %d against OriginCard Parent: %d",iVar2);
        piVar4 = EvaluationEnvironment_getOriginCard(env);
        (**(code **)(*piVar4 + 0x30))();
        goto LAB_01423ce3;
      }
    }
    EvaluationEnvironment_tracef(env,"Couldn\'t get OriginCard Parent",unaff_EDI);
    break;
  case 3:
    EvaluationEnvironment_tracef(env,"UnFriendly Macro",unaff_EDI);
    if ((piVar4 != (int *)0x0) &&
       (pvVar3 = EvaluationEnvironment_getMember14(env), pvVar3 != (void *)0x0)) {
      iVar2 = (**(code **)(*piVar4 + 0x28))();
      EvaluationEnvironment_getMember14(env);
      GamePlayer_getPlayerId();
      EvaluationEnvironment_tracef(env,"controllingPlayerID: %d, player: %d",iVar2);
      EvaluationEnvironment_getMember14(env);
      iVar6 = GamePlayer_getPlayerId();
      if (iVar2 != iVar6) goto LAB_01423f6d;
      goto LAB_01423d21;
    }
LAB_01423db3:
    EvaluationEnvironment_tracef(env,"Couldn\'t get queryIterCard",unaff_EDI);
    break;
  case 4:
    EvaluationEnvironment_tracef(env,"Enemy Of Macro",unaff_EDI);
    if (piVar4 == (int *)0x0) goto LAB_01423db3;
    iVar2 = (**(code **)(*piVar4 + 0x28))();
    EvaluationEnvironment_tracef(env,"query Iter controllingPlayerID: %d",iVar2);
    log = (void *)0x2f;
    NodeKeyValueMap_find((void *)((int)this + 4),auStack_8,(int *)&log);
    iStack_18 = *extraout_EAX;
    uStack_c = *(undefined4 *)((int)this + 8);
    iStack_14 = extraout_EAX[1];
    pvStack_10 = (void *)((int)this + 4);
    cVar1 = FUN_014238a0(&pvStack_10);
    if (cVar1 == '\0') {
      iVar6 = MacroNodeMapIterator_getValuePtr(&iStack_18);
      if (*(int *)(*(int *)(iVar6 + 4) + 4) != 2) goto LAB_01423f97;
      MacroNodeMapIterator_getValuePtr(&iStack_18);
      uVar7 = FUN_0123c340();
      piVar4 = (int *)(**(code **)(*(int *)this + 0x50))(uVar7,env);
      if (piVar4 != (int *)0x0) {
        iVar6 = (**(code **)(*piVar4 + 0x28))();
        if (iVar6 == iVar2) goto LAB_01423ea6;
        goto LAB_01423f6d;
      }
      EvaluationEnvironment_tracef(env,"Couldn\'t get target to check enemy of2",unaff_EDI);
    }
    else {
      EvaluationEnvironment_tracef(env,"Couldn\'t get target to check enemy of1",unaff_EDI);
    }
    break;
  case 5:
    EvaluationEnvironment_tracef(env,"LastEventCard Macro",unaff_EDI);
    pcVar5 = (char *)FUN_013837c0();
    EvaluationEnvironment_logCardMessage(env,"LastEventCard: ",pcVar5,unaff_EDI);
    if ((pcVar5 != (char *)0x0) && (iVar6 = PlayElement_getId(), iVar6 == iVar2)) {
LAB_01423f6d:
      pcVar5 = "Matched!";
      goto LAB_01423cf3;
    }
LAB_01423ea6:
    EvaluationEnvironment_tracef(env,"Not Matched",unaff_EDI);
    break;
  default:
    EvaluationEnvironment_tracef(env,"Couldn\'t get macro! %d",*(undefined4 *)((int)this + 0x10));
  }
  FUN_01300680(1);
  *(undefined1 *)((int)result + 8) = 0;
LAB_01423f97:
  EvaluationEnvironment_traceExitf(env,") => false",unaff_EDI);
  return false;
}

