// addr: 0x0148cd50
// name: TargetQueryNode_evaluate
// subsystem: common/common/node
// source (binary assert): common/common/node/TargetQueryNode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool TargetQueryNode_evaluate(void * this, void * outValue, void *
   environment) */

bool __thiscall TargetQueryNode_evaluate(void *this,void *outValue,void *environment)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  int *key;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  void *extraout_EAX;
  int *piVar7;
  void *pvVar8;
  code *pcVar9;
  int iVar10;
  undefined1 *puVar11;
  char *format;
  undefined1 local_a4 [4];
  void *local_a0;
  int local_9c;
  undefined4 local_98;
  void *local_94;
  undefined4 uStack_90;
  int local_8c;
  undefined4 *local_88;
  void *local_78;
  int iStack_74;
  void *pvStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_64 [16];
  undefined4 *local_54;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined4 ******ppppppuStack_38;
  uint local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_24;
  undefined4 local_20;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
                    /* Evaluates a TargetQueryNode by choosing a source pile/target, expanding
                       candidate cards, running query expressions, applying mNot, and returning
                       bool/count results. */
  local_c = 0xffffffff;
  puStack_10 = &LAB_016a1ae9;
  local_14 = ExceptionList;
  local_1c = DAT_01b839d8 ^ (uint)local_a4;
  key = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffff50);
  ExceptionList = &local_14;
  local_78 = outValue;
  EvaluationEnvironment_traceEnterf(environment,"(Target Query Node",key);
  FUN_012fa910();
  local_c = 0;
  if (*(int *)((int)this + 0x18) == 0) {
    local_94 = Mem_Alloc(0xc);
    local_c._0_1_ = 1;
    if (local_94 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_012fa910();
    }
    local_c = (uint)local_c._1_3_ << 8;
    local_94 = (void *)0x0;
    puVar5 = IntPointerMap_getOrCreateValue((void *)((int)this + 0x10),&local_94,key);
    *puVar5 = uVar4;
  }
  local_54 = *(undefined4 **)((int)this + 0x14);
  local_88 = (undefined4 *)*local_54;
  local_8c = (int)this + 0x10;
  local_a0 = (void *)0x0;
  local_9c = 0;
  local_98 = 0;
  local_c._0_1_ = 2;
  EvaluationEnvironment_tracef(environment,"mNot: %d",(uint)*(byte *)((int)this + 0x2c));
  iVar10 = *(int *)((int)this + 0x1c);
  pvVar6 = environment;
  if (iVar10 < 0x420) {
    if (iVar10 == 0x41f) {
      EvaluationEnvironment_tracef(environment,"pile: Origin Obj",key);
      iVar10 = *(int *)this;
      puVar11 = local_a4;
      pvVar8 = EvaluationEnvironment_getIntegerAsObject((void *)0x38);
      pcVar9 = *(code **)(iVar10 + 0x5c);
      goto LAB_0148d622;
    }
    switch(iVar10) {
    case 1:
      EvaluationEnvironment_tracef(environment,"pile: target 1",key);
      pcVar9 = *(code **)(*(int *)this + 0x54);
      goto LAB_0148ce86;
    case 2:
      EvaluationEnvironment_tracef(environment,"pile: target 2",key);
      pcVar9 = *(code **)(*(int *)this + 0x58);
LAB_0148ce86:
      pvVar8 = (void *)(*pcVar9)(environment);
      break;
    default:
      goto switchD_0148ce6f_caseD_3;
    case 6:
    case 0x23:
      EvaluationEnvironment_tracef(environment,"pile: DrawDeckPile",key);
      piVar7 = (int *)RBTreeIterator_getValuePtr(&local_8c);
      if ((*piVar7 == 0xa2) &&
         (pvVar8 = EvaluationEnvironment_getMember14(environment), pvVar8 != (void *)0x0)) {
        EvaluationEnvironment_getMember14(environment);
        piVar7 = (int *)PlayElement_getGame();
        pvVar8 = (void *)(**(code **)(*piVar7 + 0x48))
                                   (*(undefined4 *)((int)this + 0x1c),environment);
        if ((pvVar8 != (void *)0x0) &&
           (iVar10 = RBTreeIterator_getValuePtr(&local_8c), *(int *)(*(int *)(iVar10 + 4) + 4) == 2)
           ) {
          RBTreeIterator_getValuePtr(&local_8c);
          iVar10 = FUN_0123c340();
          bVar3 = PlayElement_hasSuppressEffect(pvVar8,iVar10);
          if (bVar3) {
            EvaluationEnvironment_tracef(environment,"Matched SuppressEffect.",key);
            pvVar6 = local_78;
            FUN_01300680(1);
            *(undefined1 *)((int)pvVar6 + 8) = 1;
            EvaluationEnvironment_traceExitf(environment,") => true",key);
            local_c = (uint)local_c._1_3_ << 8;
            STLVector_int_clear(local_a4);
            goto LAB_0148d3d6;
          }
          EvaluationEnvironment_tracef(environment,"SuppressEffect not matched.",key);
          pvVar6 = local_78;
          FUN_01300680(1);
          *(undefined1 *)((int)pvVar6 + 8) = 0;
          goto LAB_0148ce96;
        }
      }
switchD_0148ce6f_caseD_3:
      EvaluationEnvironment_tracef
                (environment,"pile: falling back to game %d",*(undefined4 *)((int)this + 0x1c));
      piVar7 = EvaluationEnvironment_getGame(environment);
      uVar4 = (**(code **)(*piVar7 + 0x204))
                        (*(undefined4 *)((int)this + 0x1c),environment,0,
                         &PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
      pvVar8 = (void *)FUN_00d8d382(uVar4);
      if (pvVar8 != (void *)0x0) goto LAB_0148d617;
      format = "Couldn\'t get card!";
      goto LAB_0148d86f;
    case 0x11:
      EvaluationEnvironment_tracef(environment,"pile: This",key);
      local_20 = 0xf;
      local_24 = 0;
      local_34 = local_34 & 0xffffff00;
      local_c = CONCAT31(local_c._1_3_,5);
      pvVar6 = EvaluationEnvironment_getOriginCard(environment);
      if (pvVar6 == (void *)0x0) {
        FUN_012f5a60("environment->getOriginCard()","..\\common\\common\\node\\TargetQueryNode.cpp",
                     0x5a4);
      }
      piVar7 = EvaluationEnvironment_getOriginCard(environment);
      (**(code **)(*piVar7 + 0x158))(&ppppppuStack_38);
      if (local_24 < 0x10) {
        ppppppuStack_38 = &ppppppuStack_38;
      }
      EvaluationEnvironment_getOriginCard(environment);
      uVar4 = PlayElement_getId(ppppppuStack_38);
      EvaluationEnvironment_tracef(environment,"checking card: %d (%s)",uVar4);
      bVar3 = EvaluationEnvironment_getFlag70(environment);
      local_98 = CONCAT31(local_98._1_3_,bVar3);
      FUN_01381350(0);
      iVar10 = *(int *)this;
      puVar11 = &stack0xffffff58;
      pvVar6 = environment;
      pvVar8 = EvaluationEnvironment_getOriginCard(environment);
      (**(code **)(iVar10 + 0x5c))(pvVar8,puVar11,pvVar6);
      FUN_01381350(local_94);
      EvaluationEnvironment_logCardList(environment,"Matched: ",local_a4);
      local_c._0_1_ = 2;
      FUN_0041f1d7();
      goto LAB_0148d627;
    case 0x19:
      EvaluationEnvironment_tracef(environment,"pile: owner",key);
      pvVar6 = EvaluationEnvironment_getOriginCard(environment);
      if (pvVar6 != (void *)0x0) {
        piVar7 = EvaluationEnvironment_getOriginCard(environment);
        uVar4 = (**(code **)(*piVar7 + 0x30))
                          (0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
        piVar7 = (int *)FUN_00d8d382(uVar4);
        if (piVar7 != (int *)0x0) {
          local_34 = 0;
          uStack_30 = 0;
          uStack_2c = 0;
          local_c = CONCAT31(local_c._1_3_,3);
          (**(code **)(*piVar7 + 0x34))(&ppppppuStack_38);
          puVar5 = (undefined4 *)FUN_01258ec0(auStack_40);
          local_94 = (void *)*puVar5;
          uStack_90 = puVar5[1];
          uVar4 = FUN_01258ef0(auStack_48);
          cVar2 = FUN_012586d0(uVar4);
          while (cVar2 != '\0') {
            iVar10 = *(int *)this;
            puVar5 = (undefined4 *)FUN_01258670();
            (**(code **)(iVar10 + 0x5c))(*puVar5,local_a4,environment);
            PointerVectorIterator_postIncrement(&local_94,&iStack_74,(int *)0x0);
            uVar4 = FUN_01258ef0(auStack_48);
            cVar2 = FUN_012586d0(uVar4);
          }
          local_c._1_3_ = (uint3)((uint)local_c >> 8);
          local_c._0_1_ = 2;
          STLVector_int_clear(&ppppppuStack_38);
          goto LAB_0148d627;
        }
      }
      goto LAB_0148ce96;
    case 0x1d:
      EvaluationEnvironment_tracef(environment,"pile: last played card",key);
      pvVar8 = Rules_getVariable7Card();
      break;
    case 0x2a:
      EvaluationEnvironment_tracef(environment,"pile: last owner card",key);
      Game_handleMissingCostCard();
      pvVar8 = extraout_EAX;
      break;
    case 0x30:
      EvaluationEnvironment_tracef(environment,"pile: dynamic card",key);
      iVar10 = Rules_getDynamicCardReturnCard();
      if (iVar10 == 0) {
        EvaluationEnvironment_tracef(environment,"Couldn\'t get Dyanmic Card",key);
        EvaluationEnvironment_traceExitf(environment,") => false",pvVar6);
        local_c = (uint)local_c._1_3_ << 8;
        STLVector_int_clear(local_a4);
        goto LAB_0148d8a8;
      }
      iVar10 = *(int *)this;
      puVar11 = local_a4;
      pvVar8 = (void *)Rules_getDynamicCardReturnCard(puVar11,environment);
      pcVar9 = *(code **)(iVar10 + 0x5c);
      goto LAB_0148d622;
    case 0x32:
      EvaluationEnvironment_tracef(environment,"pile: target2owner",key);
      pvVar6 = EvaluationEnvironment_resolveTarget2(environment);
      if ((pvVar6 == (void *)0x0) &&
         (pvVar6 = EvaluationEnvironment_getAction(environment), pvVar6 != (void *)0x0)) {
        pvVar6 = environment;
        EvaluationEnvironment_tracef
                  (environment,
                   "Possible inifite loop detected! target2owner query with no target in effect!",
                   key);
        EvaluationEnvironment_traceExitf(environment,") => false",pvVar6);
        local_c = (uint)local_c._1_3_ << 8;
        STLVector_int_clear(local_a4);
        goto LAB_0148d8a8;
      }
      piVar7 = (int *)(**(code **)(*(int *)this + 0x58))(environment);
      if (piVar7 == (int *)0x0) goto LAB_0148ce96;
      local_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      local_c = CONCAT31(local_c._1_3_,4);
      (**(code **)(*piVar7 + 0x34))(&ppppppuStack_38);
      puVar5 = (undefined4 *)FUN_01258ec0(auStack_64);
      local_94 = (void *)*puVar5;
      uStack_90 = puVar5[1];
      uVar4 = FUN_01258ef0(auStack_50);
      cVar2 = FUN_012586d0(uVar4);
      while (cVar2 != '\0') {
        iVar10 = *(int *)this;
        puVar5 = (undefined4 *)FUN_01258670();
        (**(code **)(iVar10 + 0x5c))(*puVar5,local_a4,environment);
        PointerVectorIterator_postIncrement(&local_94,&iStack_74,(int *)0x0);
        uVar4 = FUN_01258ef0(auStack_50);
        cVar2 = FUN_012586d0(uVar4);
      }
      local_c._1_3_ = (uint3)((uint)local_c >> 8);
      local_c._0_1_ = 2;
      STLVector_int_clear(&ppppppuStack_38);
      goto LAB_0148d627;
    case 0x37:
      EvaluationEnvironment_tracef(environment,"pile: dynamic card2",key);
      pvVar8 = Rules_getVariable27Card(environment);
      if (pvVar8 == (void *)0x0) {
        EvaluationEnvironment_tracef(environment,"Couldn\'t get Dyanmic Card2",key);
        EvaluationEnvironment_traceExitf(environment,") => false",pvVar6);
        local_c = (uint)local_c._1_3_ << 8;
        STLVector_int_clear(local_a4);
        goto LAB_0148d8a8;
      }
      iVar10 = *(int *)this;
      puVar11 = local_a4;
      pvVar8 = Rules_getVariable27Card(environment);
      pcVar9 = *(code **)(iVar10 + 0x5c);
      goto LAB_0148d622;
    }
    if (pvVar8 == (void *)0x0) {
LAB_0148ce96:
      EvaluationEnvironment_traceExitf(environment,") => false",key);
      local_c = (uint)local_c._1_3_ << 8;
      STLVector_int_clear(local_a4);
      goto LAB_0148d8a8;
    }
    goto LAB_0148d617;
  }
  switch(iVar10) {
  case 0x422:
    EvaluationEnvironment_tracef(environment,"pile: target3",key);
    pvVar8 = EvaluationEnvironment_getIntegerAsObject((void *)0x36);
    if (pvVar8 == (void *)0x0) {
      EvaluationEnvironment_tracef(environment,"Couldn\'t get target3 card",key);
      EvaluationEnvironment_traceExitf(environment,") => false",pvVar6);
      local_c = (uint)local_c._1_3_ << 8;
      STLVector_int_clear(local_a4);
      goto LAB_0148d8a8;
    }
    iVar10 = *(int *)this;
    puVar11 = local_a4;
    pvVar8 = EvaluationEnvironment_getIntegerAsObject((void *)0x36);
    pcVar9 = *(code **)(iVar10 + 0x5c);
    goto LAB_0148d622;
  case 0x423:
    EvaluationEnvironment_tracef(environment,"pile: target4",key);
    pvVar8 = EvaluationEnvironment_getIntegerAsObject((void *)0x37);
    if (pvVar8 == (void *)0x0) {
      EvaluationEnvironment_tracef(environment,"Couldn\'t get target4 card",key);
      EvaluationEnvironment_traceExitf(environment,") => false",pvVar6);
      local_c = (uint)local_c._1_3_ << 8;
      STLVector_int_clear(local_a4);
      goto LAB_0148d8a8;
    }
    iVar10 = *(int *)this;
    puVar11 = local_a4;
    pvVar8 = EvaluationEnvironment_getIntegerAsObject((void *)0x37);
    pcVar9 = *(code **)(iVar10 + 0x5c);
    goto LAB_0148d622;
  case 0x424:
    EvaluationEnvironment_tracef(environment,"pile: queryIter",key);
    pvVar8 = EvaluationEnvironment_getIntegerAsObject((void *)0x39);
    if (pvVar8 == (void *)0x0) {
      EvaluationEnvironment_tracef(environment,"Couldn\'t get QueryIter",key);
      EvaluationEnvironment_traceExitf(environment,") => false",pvVar6);
      local_c = (uint)local_c._1_3_ << 8;
      STLVector_int_clear(local_a4);
      goto LAB_0148d8a8;
    }
    break;
  case 0x425:
    EvaluationEnvironment_tracef(environment,"pile: Origin Obj Bearer",key);
    piVar7 = EvaluationEnvironment_getIntegerAsObject((void *)0x38);
    pvVar8 = (void *)0x0;
    if (piVar7 != (int *)0x0) {
      uVar4 = (**(code **)(*piVar7 + 0x30))
                        (0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
      pvVar8 = (void *)FUN_00d8d382(uVar4);
    }
    break;
  case 0x426:
    EvaluationEnvironment_tracef(environment,"pile: activePlayer",key);
    piVar7 = EvaluationEnvironment_getGame(environment);
    uVar4 = (**(code **)(*piVar7 + 0x204))
                      (0x426,environment,0,&PlayElement::RTTI_Type_Descriptor,
                       &Card::RTTI_Type_Descriptor,0);
    pvVar8 = (void *)FUN_00d8d382(uVar4);
    if (pvVar8 == (void *)0x0) {
      EvaluationEnvironment_tracef(environment,"Couldn\'t get activePlayer card",key);
      EvaluationEnvironment_traceExitf(environment,") => false",pvVar6);
      local_c = (uint)local_c._1_3_ << 8;
      STLVector_int_clear(local_a4);
      goto LAB_0148d8a8;
    }
    break;
  default:
    goto switchD_0148ce6f_caseD_3;
  }
LAB_0148d617:
  pcVar9 = *(code **)(*(int *)this + 0x5c);
  puVar11 = local_a4;
LAB_0148d622:
  (*pcVar9)(pvVar8,puVar11,pvVar6);
LAB_0148d627:
  if (*(int *)((int)this + 0x30) != 0) goto LAB_0148d636;
  while( true ) {
    RBTreeIterator_increment(&local_8c);
LAB_0148d636:
    iVar10 = local_8c;
    if ((local_8c == 0) || (local_8c != (int)this + 0x10)) {
      FUN_00d83c2d();
    }
    pvVar6 = local_78;
    if (local_88 == local_54) break;
    pvStack_70 = (void *)0x0;
    uStack_6c = 0;
    uStack_68 = 0;
    local_c._0_1_ = 6;
    FUN_012fa910();
    local_c = CONCAT31(local_c._1_3_,7);
    if (iVar10 == 0) {
      FUN_00d83c2d();
    }
    if (local_88 == *(undefined4 **)(iVar10 + 4)) {
      FUN_00d83c2d();
    }
    FUN_013010e0(local_88[4]);
    FUN_01301590(environment);
    piVar7 = EvaluationEnvironment_getGame(environment);
    if (local_88 == *(undefined4 **)(local_8c + 4)) {
      FUN_00d83c2d();
    }
    (**(code **)(*piVar7 + 0x188))(local_a4,local_88[3],auStack_64,&iStack_74,environment);
    ValueDataList_assign(local_a4,&iStack_74);
    local_c._0_1_ = 6;
    FUN_01300cd0();
    local_c._0_1_ = 2;
    uVar1 = (undefined1)local_c;
    local_c._0_1_ = 2;
    if (pvStack_70 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_70);
    }
    pvStack_70 = (void *)0x0;
    uStack_6c = 0;
    uStack_68 = 0;
    local_c._0_1_ = uVar1;
  }
  cVar2 = *(char *)((int)this + 0x2c);
  if ((((cVar2 == '\0') && (local_a0 != (void *)0x0)) && (local_9c - (int)local_a0 >> 2 != 0)) ||
     ((cVar2 == '\x01' && ((local_a0 == (void *)0x0 || (local_9c - (int)local_a0 >> 2 == 0)))))) {
    if (cVar2 == '\0') {
      if (local_a0 == (void *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_9c - (int)local_a0 >> 2;
      }
      FUN_01300680(2);
      *(int *)((int)pvVar6 + 8) = iVar10;
    }
    else {
      EvaluationEnvironment_tracef(environment,"Target is NOT equal to the query.",key);
      pvVar6 = local_78;
      FUN_01300680(1);
      *(undefined1 *)((int)pvVar6 + 8) = 1;
    }
    EvaluationEnvironment_logCardList(environment,"Cards Matched: ",local_a4);
    EvaluationEnvironment_traceExitf(environment,") => true",key);
    local_c = (uint)local_c._1_3_ << 8;
    if (local_a0 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_a0);
    }
    local_a0 = (void *)0x0;
    local_9c = 0;
    local_98 = 0;
LAB_0148d3d6:
    local_c = 0xffffffff;
    FUN_01300cd0();
    ExceptionList = local_14;
    return true;
  }
  FUN_01300680(1);
  *(undefined1 *)((int)pvVar6 + 8) = 0;
  format = "Target Not Matched.";
LAB_0148d86f:
  pvVar6 = environment;
  EvaluationEnvironment_tracef(environment,format,key);
  EvaluationEnvironment_traceExitf(environment,") => false",pvVar6);
  local_c = (uint)local_c._1_3_ << 8;
  if (local_a0 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_a0);
  }
  local_98 = 0;
  local_9c = 0;
  local_a0 = (void *)0x0;
LAB_0148d8a8:
  local_c = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_14;
  return false;
}

