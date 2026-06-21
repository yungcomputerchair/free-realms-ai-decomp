// addr: 0x01494e60
// name: PileQueryNode_evaluate
// subsystem: common/common/node
// source (binary assert): common/common/node/PileQueryNode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0149502b) */
/* Setting prototype: bool PileQueryNode_evaluate(void * this, void * outValue, void * environment)
    */

bool __thiscall PileQueryNode_evaluate(void *this,void *outValue,void *environment)

{
  bool bVar1;
  int *piVar2;
  undefined4 *******pppppppuVar3;
  void *pvVar4;
  undefined4 *puVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  void *unaff_EBX;
  int iVar9;
  char *pcVar10;
  void **item;
  void *local_88;
  undefined4 local_84;
  int local_80;
  void *local_7c;
  void *local_78;
  void *local_74;
  void *local_70;
  void *local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int aiStack_60 [3];
  int iStack_54;
  void *pvStack_50;
  undefined1 auStack_4c [4];
  int *local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [4];
  undefined4 ******appppppuStack_30 [4];
  undefined4 uStack_20;
  uint uStack_1c;
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Collects cards matching pile-query criteria, handles not/other-player special
                       cases, compares the total count against a value, and writes bool or count
                       output. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a265b;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_88;
  ExceptionList = &local_c;
  local_78 = outValue;
  local_74 = this;
  EvaluationEnvironment_traceEnterf
            (environment,"(Pile Query Node",DAT_01b839d8 ^ (uint)&stack0xffffff68);
  local_48 = *(int **)((int)this + 0x14);
  pvVar4 = (void *)*local_48;
  pvVar6 = (void *)((int)this + 0x10);
  local_84 = 0;
  local_80 = 0;
  local_7c = (void *)0x0;
  local_4 = 0;
  local_70 = pvVar6;
  local_6c = pvVar4;
  if (pvVar4 == *(void **)((int)this + 0x14)) {
    FUN_00d83c2d();
  }
  EvaluationEnvironment_tracefWithPrefix(environment,"value: ");
  item = &local_88;
  (**(code **)(*(int *)this + 0x50))(item,environment);
  while( true ) {
    if ((pvVar6 == (void *)0x0) || (pvVar6 != (void *)((int)this + 0x10))) {
      FUN_00d83c2d();
    }
    if (pvVar4 == pvStack_50) break;
    local_6c = (void *)0x0;
    uStack_68 = 0;
    uStack_64 = 0;
    local_c._0_1_ = 1;
    FUN_012fa910();
    local_c = (void *)CONCAT31(local_c._1_3_,2);
    if (pvVar6 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (pvVar4 == *(void **)((int)pvVar6 + 4)) {
      FUN_00d83c2d();
    }
    FUN_013010e0(*(undefined4 *)((int)pvVar4 + 0x10));
    FUN_01301590(environment);
    piVar2 = EvaluationEnvironment_getGame(environment);
    if (pvVar4 == *(void **)((int)pvVar6 + 4)) {
      FUN_00d83c2d();
    }
    (**(code **)(*piVar2 + 0x188))
              (&stack0xffffff70,*(undefined4 *)((int)pvVar4 + 0xc),aiStack_60,&local_70,environment)
    ;
    ValueDataList_assign(&stack0xffffff70,&local_70);
    local_c._0_1_ = 1;
    FUN_01300cd0();
    local_c = (void *)((uint)local_c._1_3_ << 8);
    if (local_6c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_6c = (void *)0x0;
    uStack_68 = 0;
    uStack_64 = 0;
    RBTreeIterator_increment(&local_78);
    this = local_7c;
    pvVar6 = local_78;
    pvVar4 = local_74;
  }
  local_7c = (void *)0x0;
  if (*(int *)((int)this + 0x28) == 2) {
    local_7c = *(void **)((int)this + 0x2c);
  }
  pvVar6 = local_7c;
  if ((*(int *)((int)this + 0x28) == 1) &&
     ((((*(int *)((int)this + 0x28) != 1 || (*(char *)((int)this + 0x2c) == '\0')) &&
       (unaff_EBX != (void *)0x0)) &&
      ((iVar8 = (int)local_88 - (int)unaff_EBX >> 2, iVar8 != 0 && (*(int *)((int)this + 0x20) != 7)
       ))))) {
    EvaluationEnvironment_tracef(environment,"totalCards.size == %d",iVar8);
    iVar8 = local_80;
    FUN_01300680(1);
    *(undefined1 *)(iVar8 + 8) = 1;
    EvaluationEnvironment_traceExitf(environment,") => true",item);
    local_c = (void *)0xffffffff;
    if (unaff_EBX == (void *)0x0) {
      ExceptionList = pvStack_14;
      return true;
    }
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBX);
  }
  switch(*(undefined4 *)((int)this + 0x20)) {
  case 1:
    uStack_1c = 0xf;
    uStack_20 = 0;
    appppppuStack_30[0] = (undefined4 ******)((uint)appppppuStack_30[0] & 0xffffff00);
    local_c._0_1_ = 3;
    ValueData_debugPrint((void *)((int)this + 0x24),auStack_34);
    pppppppuVar3 = (undefined4 *******)appppppuStack_30[0];
    if (uStack_1c < 0x10) {
      pppppppuVar3 = appppppuStack_30;
    }
    EvaluationEnvironment_tracef(environment,"%s equal <something>",pppppppuVar3);
    if ((*(int *)((int)this + 0x28) == 2) && (iVar8 = FUN_0123c340(), iVar8 == 0)) {
      pvVar4 = EvaluationEnvironment_getGame(environment);
      bVar1 = Game_getFlag_14d(pvVar4);
      if (!bVar1) {
        EvaluationEnvironment_getMember14(environment);
        iVar8 = GamePlayer_getPlayerId();
        pvVar4 = EvaluationEnvironment_getGame(environment);
        iVar9 = Game_getMyPlayerID(pvVar4);
        if (iVar8 != iVar9) {
          piVar2 = (int *)FUN_01258ef0(auStack_3c);
          pvVar6 = (void *)*piVar2;
          pvVar4 = (void *)piVar2[1];
          local_48 = (int *)0x0;
          uStack_44 = 0;
          uStack_40 = 0;
          local_c = (void *)CONCAT31(local_c._1_3_,4);
          puVar5 = (undefined4 *)FUN_01258ec0(&local_70);
          local_78 = (void *)*puVar5;
          local_74 = (void *)puVar5[1];
          while( true ) {
            if ((local_78 == (void *)0x0) || (local_78 != pvVar6)) {
              FUN_00d83c2d();
            }
            if (local_74 == pvVar4) break;
            piVar2 = (int *)FUN_01258670();
            iStack_54 = *piVar2;
            if (*(int *)(iStack_54 + 100) != 0) {
              PointerVector_pushBack(auStack_4c,&iStack_54,item);
            }
            PointerVectorIterator_postIncrement(&local_78,aiStack_60,(int *)0x0);
          }
          ValueDataList_assign(&stack0xffffff70,auStack_4c);
          pcVar10 = "In a not node for the other player, removing all non-introduced cards.";
          pvVar6 = EvaluationEnvironment_getGame(environment);
          Game_logGeneralFormatted(pvVar6,pcVar10);
          local_c._0_1_ = 3;
          STLVector_int_clear(auStack_4c);
          pvVar6 = local_7c;
        }
      }
    }
    if (*(int *)((int)this + 0x28) == 2) {
      if (unaff_EBX == (void *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (int)local_88 - (int)unaff_EBX >> 2;
      }
      if ((void *)uVar7 == pvVar6) {
        if (unaff_EBX == (void *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = (int)local_88 - (int)unaff_EBX >> 2;
        }
        goto LAB_01495279;
      }
    }
    if (*(int *)((int)this + 0x28) == 3) {
      if ((unaff_EBX != (void *)0x0) && (iVar8 = (int)local_88 - (int)unaff_EBX >> 2, iVar8 != 0)) {
LAB_01495279:
        EvaluationEnvironment_tracef(environment,"totalCards.size == %d",iVar8);
        iVar8 = local_80;
        FUN_01300680(1);
        *(undefined1 *)(iVar8 + 8) = 1;
        EvaluationEnvironment_traceExitf(environment,") => true",item);
        local_c = (void *)((uint)local_c._1_3_ << 8);
        FUN_0041f1d7();
        local_c = (void *)0xffffffff;
        STLVector_int_clear(&stack0xffffff70);
        ExceptionList = pvStack_14;
        return true;
      }
      if (unaff_EBX == (void *)0x0) {
        EvaluationEnvironment_tracef
                  (environment,"Comparison not equal to. totalCards.size() = %d",0);
      }
      else {
        EvaluationEnvironment_tracef
                  (environment,"Comparison not equal to. totalCards.size() = %d",
                   (int)local_88 - (int)unaff_EBX >> 2);
      }
    }
    else {
      EvaluationEnvironment_tracef
                (environment,"Comparison not equal to value in PileQueryNode",item);
    }
    local_c = (void *)((uint)local_c._1_3_ << 8);
    if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
      _free(appppppuStack_30[0]);
    }
    uStack_1c = 0xf;
    uStack_20 = 0;
    appppppuStack_30[0] = (undefined4 ******)((uint)appppppuStack_30[0] & 0xffffff00);
    break;
  case 2:
    if (unaff_EBX == (void *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (int)local_88 - (int)unaff_EBX >> 2;
    }
    EvaluationEnvironment_tracef(environment,"%d less than %d",iVar8);
    if (unaff_EBX == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (int)local_88 - (int)unaff_EBX >> 2;
    }
    if (uVar7 < pvVar6) {
LAB_0149539e:
      iVar8 = local_80;
      FUN_01300680(1);
      *(undefined1 *)(iVar8 + 8) = 1;
      EvaluationEnvironment_traceExitf(environment,") => true",item);
      local_c = (void *)0xffffffff;
      if (unaff_EBX == (void *)0x0) {
        ExceptionList = pvStack_14;
        return true;
      }
                    /* WARNING: Subroutine does not return */
      _free(unaff_EBX);
    }
    EvaluationEnvironment_tracef(environment,"Comparison not less than in PileQueryNode",item);
    break;
  case 3:
    if (unaff_EBX == (void *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (int)local_88 - (int)unaff_EBX >> 2;
    }
    EvaluationEnvironment_tracef(environment,"%d greater than %d",iVar8);
    if ((unaff_EBX != (void *)0x0) && (pvVar6 < (uint)((int)local_88 - (int)unaff_EBX >> 2)))
    goto LAB_0149539e;
    EvaluationEnvironment_tracef(environment,"Comparison not Greater than in PileQueryNode",item);
    break;
  case 4:
    if (unaff_EBX == (void *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (int)local_88 - (int)unaff_EBX >> 2;
    }
    EvaluationEnvironment_tracef(environment,"%d not equal %d",iVar8);
    if (unaff_EBX == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (int)local_88 - (int)unaff_EBX >> 2;
    }
    if ((void *)uVar7 != pvVar6) goto LAB_0149539e;
    EvaluationEnvironment_tracef(environment,"Comparison not NotEqualTo in PileQueryNode",item);
    break;
  case 5:
    if (unaff_EBX == (void *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (int)local_88 - (int)unaff_EBX >> 2;
    }
    EvaluationEnvironment_tracef(environment,"%d less than or equal %d",iVar8);
    if ((unaff_EBX == (void *)0x0) || ((uint)((int)local_88 - (int)unaff_EBX >> 2) <= pvVar6))
    goto LAB_0149539e;
    EvaluationEnvironment_tracef
              (environment,"Comparison not Less than or Equalto in PileQueryNode",item);
    break;
  case 6:
    if (unaff_EBX == (void *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (int)local_88 - (int)unaff_EBX >> 2;
    }
    EvaluationEnvironment_tracef(environment,"%d greater than or equal %d",iVar8);
    if (unaff_EBX == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (int)local_88 - (int)unaff_EBX >> 2;
    }
    if (pvVar6 <= uVar7) goto LAB_0149539e;
    EvaluationEnvironment_tracef
              (environment,"Comparison not Greater than or equal to in PileQueryNode",item);
    break;
  case 7:
    if (unaff_EBX == (void *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (int)local_88 - (int)unaff_EBX >> 2;
    }
    EvaluationEnvironment_tracef(environment,"count %d",iVar8);
    iVar8 = local_80;
    if (unaff_EBX == (void *)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = (int)local_88 - (int)unaff_EBX >> 2;
    }
    FUN_01300680(2);
    *(int *)(iVar8 + 8) = iVar9;
    EvaluationEnvironment_traceExitf(environment,") => true",item);
    local_c = (void *)0xffffffff;
    if (unaff_EBX == (void *)0x0) {
      ExceptionList = pvStack_14;
      return true;
    }
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBX);
  default:
    FUN_012f5a60("!\"Unhandled case in comparison in PileQueryNode::evaluate()\"",
                 "..\\common\\common\\node\\PileQueryNode.cpp",0x1f9);
  }
  pvVar6 = environment;
  EvaluationEnvironment_tracef
            (environment,"Query failed in PileQueryNode.evaluate, unknown reason",item);
  EvaluationEnvironment_traceExitf(environment,") => false",pvVar6);
  local_c = (void *)0xffffffff;
  if (unaff_EBX == (void *)0x0) {
    ExceptionList = pvStack_14;
    return false;
  }
                    /* WARNING: Subroutine does not return */
  _free(unaff_EBX);
}

