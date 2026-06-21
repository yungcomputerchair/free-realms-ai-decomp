// addr: 0x0132e200
// name: CWGame_getPlayArea
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWGame_getPlayArea(void * this, int playAreaId_, void * log) */

void * __thiscall CWGame_getPlayArea(void *this,int playAreaId_,void *log)

{
  void *pvVar1;
  int extraout_EAX;
  int *piVar2;
  int playerId_;
  undefined4 uVar3;
  int elementId_;
  undefined4 unaff_EDI;
  TypeDescriptor *pTVar4;
  TypeDescriptor *pTVar5;
  undefined4 uVar6;
  
                    /* Resolves a play-area object for special IDs such as opponent hand, all cards,
                       and active player, otherwise delegates to Game_getPlayArea. Evidence is the
                       trace string "CWGame::getPlayArea %d" plus success/failure logs for
                       found/null play areas. */
  EvaluationEnvironment_tracef(log,"CWGame::getPlayArea %d",playAreaId_);
  if (playAreaId_ == 0x1e) {
    EvaluationEnvironment_tracef(log,"Opponent\'s Hand",unaff_EDI);
    Environment_getObjectForIntegerValueOne();
    if (extraout_EAX == 0) {
      pvVar1 = EvaluationEnvironment_resolveTarget(log);
      if (pvVar1 == (void *)0x0) goto LAB_0132e309;
      piVar2 = EvaluationEnvironment_resolveTarget(log);
      playerId_ = (**(code **)(*piVar2 + 0x28))();
      pvVar1 = PlayArea_findPlayerElementById(this,playerId_);
      if (pvVar1 == (void *)0x0) goto LAB_0132e309;
    }
    else {
      Environment_getObjectForIntegerValueOne();
    }
    PlayElement_getGame();
    pvVar1 = (void *)FUN_0139d7c0();
  }
  else if (playAreaId_ == 9999) {
    uVar6 = 0;
    pTVar5 = &CWCard::RTTI_Type_Descriptor;
    pTVar4 = &PlayElement::RTTI_Type_Descriptor;
    uVar3 = 0;
    pvVar1 = find_play_element_in_maps(this,elementId_);
    pvVar1 = (void *)FUN_00d8d382(pvVar1,uVar3,pTVar4,pTVar5,uVar6);
  }
  else if (playAreaId_ == 0x22336) {
    pvVar1 = EvaluationEnvironment_getOriginCard(log);
    if (pvVar1 == (void *)0x0) goto LAB_0132e309;
    EvaluationEnvironment_getOriginCard(log);
    pvVar1 = (void *)FUN_013402b0();
    pvVar1 = (void *)unknown_getField30(pvVar1);
  }
  else {
    pvVar1 = (void *)Game_getPlayArea(playAreaId_,log);
  }
  if (pvVar1 != (void *)0x0) {
    uVar3 = PlayElement_getId();
    EvaluationEnvironment_tracef(log,"found play area: %d",uVar3);
    return pvVar1;
  }
LAB_0132e309:
  EvaluationEnvironment_tracef(log,"play area is null!",unaff_EDI);
  return (void *)0x0;
}

