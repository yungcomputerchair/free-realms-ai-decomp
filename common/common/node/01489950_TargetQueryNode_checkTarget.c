// addr: 0x01489950
// name: TargetQueryNode_checkTarget
// subsystem: common/common/node
// source (binary assert): common/common/node/TargetQueryNode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool TargetQueryNode_checkTarget(void * this, void * targetCard, void *
   outMatches, void * environment) */

bool __thiscall
TargetQueryNode_checkTarget(void *this,void *targetCard,void *outMatches,void *environment)

{
  void *env;
  char cVar1;
  char cVar2;
  bool bVar3;
  void **item;
  void *pvVar4;
  uint uVar5;
  undefined4 uVar6;
  void *pvVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  TypeDescriptor *pTVar11;
  TypeDescriptor *pTVar12;
  undefined4 uVar13;
  int *apiStack_5c [2];
  int *piStack_54;
  int iStack_50;
  int local_4c;
  int local_48;
  int iStack_44;
  int *piStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
                    /* Checks one target card against TargetQueryNode rules, including owner/target
                       equality, alternate containers, in-play/active requirements, and nested query
                       evaluation. */
  pvVar7 = targetCard;
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_016a1928;
  local_14 = ExceptionList;
  item = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffff90);
  ExceptionList = &local_14;
  if (targetCard == (void *)0x0) {
    FUN_012f5a60(&DAT_018778b4,"..\\common\\common\\node\\TargetQueryNode.cpp",0xa0);
  }
  env = environment;
  local_48 = **(undefined4 **)((int)this + 0x14);
  local_4c = (int)this + 0x10;
  EvaluationEnvironment_logCardMessage(environment,"checking target card: ",pvVar7,item);
  pvVar4 = EvaluationEnvironment_getOriginCard(env);
  if (pvVar4 != (void *)0x0) goto LAB_014899fa;
  EvaluationEnvironment_tracef(env,"TargetQueryNode::checkTarget NULL ORIGIN CARD",item);
  pvVar4 = EvaluationEnvironment_getMember14(env);
  if (pvVar4 == (void *)0x0) {
    pvVar4 = EvaluationEnvironment_getGame(env);
    pvVar4 = Game_getCurrentTurn(pvVar4);
    uVar5 = get_field_8(pvVar4);
    if (uVar5 != 0) {
      pvVar4 = EvaluationEnvironment_getGame(env);
      pvVar4 = Game_getCurrentTurn(pvVar4);
      pvVar4 = (void *)get_field_8(pvVar4);
      goto LAB_014899eb;
    }
    pvVar4 = pvVar7;
    if (pvVar7 == (void *)0x0) {
      EvaluationEnvironment_tracef
                (env,"TargetQueryNode::checkTarget NULL ORIGIN CARD and couln\'t fall back",item);
      ExceptionList = local_14;
      return false;
    }
  }
  else {
    pvVar4 = EvaluationEnvironment_getMember14(env);
LAB_014899eb:
    pvVar4 = (void *)unknown_getField30(pvVar4);
  }
  set_play_element_id_field(env,pvVar4);
LAB_014899fa:
  if (*(int *)((int)this + 0x20) == 0) {
    iVar10 = *(int *)((int)this + 0x30);
    if (iVar10 == 0x3e) {
      EvaluationEnvironment_tracef(env,"Checking to see if target\'s ownermatches query",item);
      uVar6 = (**(code **)(*(int *)pvVar7 + 0x30))();
      apiStack_5c[0] =
           (int *)FUN_00d8d382(uVar6,0,&PlayElement::RTTI_Type_Descriptor,
                               &Card::RTTI_Type_Descriptor,0);
      if (apiStack_5c[0] == (int *)0x0) {
        EvaluationEnvironment_tracef(env,"target doesn\'t have an owner",item);
      }
      else {
        EvaluationEnvironment_logCardMessage(env,"got Parent: ",(char *)apiStack_5c[0],item);
        PointerVector_pushBack(outMatches,apiStack_5c,item);
      }
    }
    else if (iVar10 == 0x30) {
      EvaluationEnvironment_tracef(env,"check target1 == target 2",item);
      pvVar4 = (void *)(**(code **)(*(int *)this + 0x58))(env);
      if (pvVar4 == (void *)0x0) {
        EvaluationEnvironment_tracef(env,"Target2 not found.",item);
        ExceptionList = local_14;
        return false;
      }
      if (pvVar7 != pvVar4) {
        cVar1 = Rules_getBooleanKey9DefaultFalse();
        if (cVar1 != '\0') {
          uVar13 = 0;
          pTVar12 = &Card::RTTI_Type_Descriptor;
          pTVar11 = &PlayElement::RTTI_Type_Descriptor;
          uVar6 = 0;
          pvVar7 = EvaluationEnvironment_getNextTargetCard(env);
          pvVar7 = (void *)FUN_00d8d382(pvVar7,uVar6,pTVar11,pTVar12,uVar13);
          if (pvVar4 == pvVar7) {
            PointerVector_pushBack(outMatches,&targetCard,item);
            ExceptionList = local_14;
            return true;
          }
        }
        ExceptionList = local_14;
        return false;
      }
      PointerVector_pushBack(outMatches,&targetCard,item);
      EvaluationEnvironment_tracef(env,"Match! target1 equal to target2",item);
    }
    else if (iVar10 == 0x2f) {
      EvaluationEnvironment_tracef(env,"check target2 == target1",item);
      pvVar4 = (void *)(**(code **)(*(int *)this + 0x54))(env);
      if (pvVar4 == (void *)0x0) {
        EvaluationEnvironment_tracef(env,"Target1 not found.",item);
        ExceptionList = local_14;
        return false;
      }
      if (pvVar7 != pvVar4) {
        ExceptionList = local_14;
        return false;
      }
      PointerVector_pushBack(outMatches,&targetCard,item);
      EvaluationEnvironment_tracef(env,"Match! target2 equal to target1",item);
    }
    else {
      uVar6 = PlayElement_getId();
      cVar1 = FUN_01383a30(uVar6);
      cVar2 = (**(code **)(*(int *)pvVar7 + 0x48))();
      if ((((cVar2 == '\0') && (bVar3 = EvaluationEnvironment_getFlag70(env), bVar3)) &&
          (cVar1 == '\0')) && (cVar2 = (**(code **)(*(int *)pvVar7 + 0x1e8))(), cVar2 == '\0')) {
        EvaluationEnvironment_tracef(env,"target was not in play!",item);
        ExceptionList = local_14;
        return false;
      }
      cVar2 = (**(code **)(*(int *)pvVar7 + 0x4c))();
      if (((cVar2 == '\0') && (bVar3 = EvaluationEnvironment_getFlag70(env), bVar3)) &&
         ((cVar1 == '\0' && (cVar1 = (**(code **)(*(int *)pvVar7 + 0x1e8))(), cVar1 == '\0')))) {
        EvaluationEnvironment_tracef(env,"Target was not active!",item);
        ExceptionList = local_14;
        return false;
      }
      if (*(int *)((int)this + 0x30) == 0x47) {
        EvaluationEnvironment_tracef
                  (env,"Checking to see if target is the owner of the origin card",item);
        piVar8 = EvaluationEnvironment_getOriginCard(env);
        uVar6 = (**(code **)(*piVar8 + 0x30))();
        pvVar4 = (void *)FUN_00d8d382(uVar6,0,&PlayElement::RTTI_Type_Descriptor,
                                      &Card::RTTI_Type_Descriptor,0);
        if ((pvVar4 == (void *)0x0) || (pvVar4 != pvVar7)) {
          EvaluationEnvironment_tracef(env,"target is not owner",item);
        }
        else {
          EvaluationEnvironment_tracef(env,"target is owner",item);
          PointerVector_pushBack(outMatches,&targetCard,item);
        }
      }
      else if (*(int *)((int)this + 0x30) == 0x40) {
        EvaluationEnvironment_tracef
                  (env,
                   "Checking to see if the target is the owner of a card that matches the query.",
                   item);
        pvVar7 = (void *)FUN_013445f0(1);
        piVar8 = PointerVector_makeEndIterator(pvVar7,(int *)&piStack_54);
        local_4c = *piVar8;
        local_48 = piVar8[1];
        piVar8 = PointerVector_makeBeginIterator(pvVar7,(int *)apiStack_5c);
        piStack_54 = (int *)*piVar8;
        iStack_50 = piVar8[1];
        bVar3 = PointerVectorIterator_notEqual(&piStack_54,&local_4c,(int *)item);
        pvVar7 = outMatches;
        if (bVar3) {
          do {
            puVar9 = (undefined4 *)PointerVectorIterator_getCurrent((int *)&piStack_54);
            apiStack_5c[0] =
                 (int *)FUN_00d8d382(*puVar9,0,&PlayElement::RTTI_Type_Descriptor,
                                     &Card::RTTI_Type_Descriptor,0);
            if (apiStack_5c[0] != (int *)0x0) {
              PointerVector_pushBack(pvVar7,apiStack_5c,item);
            }
            PointerVectorIterator_postIncrementAlt(&piStack_54,&iStack_44,(int *)0x0);
            bVar3 = PointerVectorIterator_notEqual(&piStack_54,&local_4c,(int *)item);
          } while (bVar3);
        }
      }
      else {
        uStack_24 = 0;
        uStack_20 = 0;
        uStack_1c = 0;
        uStack_c = 1;
        PointerVector_pushBack(auStack_28,&targetCard,item);
        FUN_012fa910();
        uStack_c._0_1_ = 2;
        iVar10 = RBTreeIterator_getValuePtr(&local_4c);
        FUN_013010e0(*(undefined4 *)(iVar10 + 4));
        FUN_01301590(env);
        piVar8 = EvaluationEnvironment_getGame(env);
        iVar10 = *piVar8;
        puVar9 = (undefined4 *)RBTreeIterator_getValuePtr(&local_4c);
        (**(code **)(iVar10 + 0x188))(auStack_28,*puVar9,auStack_34,outMatches,env);
        uStack_c = CONCAT31(uStack_c._1_3_,1);
        FUN_01300cd0();
        uStack_c = 0xffffffff;
        STLVector_int_clear(auStack_28);
      }
    }
  }
  else {
    EvaluationEnvironment_tracef(env,"checking to see if target is in an alternate container",item);
    piStack_40 = (int *)0x0;
    piStack_3c = (int *)0x0;
    uStack_38 = 0;
    uStack_c = 0;
    FUN_012fb470(&iStack_44,env);
    piVar8 = piStack_40;
    if (piStack_3c < piStack_40) {
      FUN_00d83c2d();
    }
    piStack_54 = &iStack_44;
    while( true ) {
      apiStack_5c[0] = piStack_3c;
      if (piStack_3c < piStack_40) {
        FUN_00d83c2d();
      }
      if ((piStack_54 == (int *)0x0) || (piStack_54 != &iStack_44)) {
        FUN_00d83c2d();
      }
      if (piVar8 == apiStack_5c[0]) {
        EvaluationEnvironment_tracef(env,"target did not match cards in altcontainer",item);
        uStack_c = 0xffffffff;
        if (piStack_40 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(piStack_40);
        }
        ExceptionList = local_14;
        return false;
      }
      if (piStack_54 == (int *)0x0) {
        FUN_00d83c2d();
      }
      if ((int *)piStack_54[2] <= piVar8) {
        FUN_00d83c2d();
      }
      if ((void *)*piVar8 == pvVar7) break;
      if ((int *)piStack_54[2] <= piVar8) {
        FUN_00d83c2d();
      }
      piVar8 = piVar8 + 1;
    }
    EvaluationEnvironment_logCardMessage(env,"Matched card:",pvVar7,item);
    PointerVector_pushBack(outMatches,&targetCard,item);
    uStack_c = 0xffffffff;
    if (piStack_40 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(piStack_40);
    }
  }
  ExceptionList = local_14;
  return true;
}

