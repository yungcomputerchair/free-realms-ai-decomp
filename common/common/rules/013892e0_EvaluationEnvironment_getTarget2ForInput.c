// addr: 0x013892e0
// name: EvaluationEnvironment_getTarget2ForInput
// subsystem: common/common/rules
// source (binary assert): common/common/rules/EvaluationEnvironment.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EvaluationEnvironment_getTarget2ForInput(void * env, int inputCode_) */

void * __thiscall EvaluationEnvironment_getTarget2ForInput(void *this,void *env,int inputCode_)

{
  char *formatText;
  char cVar1;
  void **item;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *pvVar6;
  char *formatText_00;
  int *piVar7;
  int in_EDX;
  int extraout_EDX;
  int extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  uint extraout_EDX_06;
  undefined4 extraout_EDX_07;
  int extraout_EDX_08;
  int extraout_EDX_09;
  uint extraout_EDX_10;
  uint extraout_EDX_11;
  uint uVar8;
  undefined4 *vector;
  longlong lVar9;
  undefined1 *puVar10;
  undefined4 *puStack_d4;
  undefined1 auStack_d0 [4];
  void *pvStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [4];
  void *pvStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  void *pvStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [4];
  void *pvStack_9c;
  undefined4 uStack_90;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [72];
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* Variant of target2 resolution that passes an input/state parameter to the
                       game when enter-state targeting is enabled, then validates candidates and
                       caches Target2ID. */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_016836bc;
  local_c = ExceptionList;
  item = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffff1c);
  ExceptionList = &local_c;
  if (*(int *)((int)this + 4) == 0) {
    FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x52f);
    in_EDX = extraout_EDX;
  }
  if (*(int *)((int)this + 0x10) != 0) {
    if (*(int *)((int)this + 4) == 0) {
      FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x2bd);
      in_EDX = extraout_EDX_00;
    }
    pvVar2 = find_play_element_in_maps(*(void **)((int)this + 4),in_EDX);
    ExceptionList = local_c;
    return pvVar2;
  }
  puStack_d4 = (undefined4 *)0x1c;
  pvVar2 = EvaluationEnvironment_getOrCreateReturnValue(&puStack_d4,(int)item);
  FUN_01300680(1);
  *(undefined1 *)((int)pvVar2 + 8) = 1;
  cVar1 = FUN_01383520(4,0);
  if (cVar1 != '\0') {
    iVar3 = (**(code **)(**(int **)((int)this + 4) + 300))(env);
    *(int *)((int)this + 0x10) = iVar3;
    if (iVar3 == 0) {
      EvaluationEnvironment_setTarget2Return(1);
    }
    ExceptionList = local_c;
    return (void *)0x0;
  }
  pvStack_bc = (void *)0x0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  iStack_4 = 0;
  uVar5 = *(undefined4 *)(*(int *)((int)this + 4) + 0x20);
  uVar4 = FUN_01383460(2);
  ActionDB_ensureSingleton();
  uVar5 = ActionDB_getAction(uVar4,uVar5);
  iVar3 = **(int **)((int)this + 0x14);
  puVar10 = auStack_c0;
  pvVar2 = this;
  pvVar6 = EvaluationEnvironment_getOriginCard(this);
  cVar1 = (**(code **)(iVar3 + 0x70))(pvVar6,puVar10,uVar5,pvVar2);
  if (cVar1 == '\0') {
    if (*(int *)((int)this + 4) == 0) {
      FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x2bd);
    }
    Game_logGeneralFormatted
              (*(undefined4 *)((int)this + 4),"validTargets failed in EvaluationEnvironment");
  }
  pvVar2 = (void *)((int)this + 0x4c);
  if ((*(int *)((int)this + 0x50) == 0) ||
     (*(int *)((int)this + 0x54) - *(int *)((int)this + 0x50) >> 2 == 0)) goto LAB_01389798;
  EvaluationEnvironment_ctor();
  iStack_4._0_1_ = 1;
  EvaluationEnvironment_copyFrom(auStack_a0,this,item);
  uVar5 = FUN_01383520(9,0);
  EvaluationEnvironment_setBooleanKey9(uVar5);
  uVar5 = FUN_01383520(4,0);
  EvaluationEnvironment_setBooleanKey4(uVar5);
  ValueDataList_assign(auStack_64,(void *)((int)this + 0x3c));
  ValueDataList_assign(auStack_54,pvVar2);
  pvStack_cc = (void *)0x0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  iStack_4 = CONCAT31(iStack_4._1_3_,2);
  puStack_d4 = *(undefined4 **)((int)this + 0x54);
  uVar8 = extraout_EDX_01;
  if (puStack_d4 < *(undefined4 **)((int)this + 0x50)) {
    FUN_00d83c2d();
    uVar8 = extraout_EDX_02;
  }
  vector = *(undefined4 **)((int)this + 0x50);
  if (*(undefined4 **)((int)this + 0x54) < vector) {
    FUN_00d83c2d();
    uVar8 = extraout_EDX_03;
  }
  while( true ) {
    if (pvVar2 == (void *)0x0) {
      FUN_00d83c2d();
      uVar8 = extraout_EDX_04;
    }
    if (vector == puStack_d4) break;
    if (pvVar2 == (void *)0x0) {
      FUN_00d83c2d();
      uVar8 = extraout_EDX_05;
    }
    if (*(undefined4 **)((int)this + 0x54) <= vector) {
      FUN_00d83c2d();
      uVar8 = extraout_EDX_06;
    }
    formatText = (char *)*vector;
    if (formatText == (char *)0x0) {
      lVar9 = (ulonglong)uVar8 << 0x20;
    }
    else {
      lVar9 = PlayElement_getId();
    }
    uStack_90 = (undefined4)lVar9;
    if (pvStack_9c == (void *)0x0) {
      FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x2bd);
      lVar9 = CONCAT44(extraout_EDX_07,uStack_90);
    }
    uStack_90 = (undefined4)lVar9;
    pvVar6 = find_play_element_in_maps(pvStack_9c,(int)((ulonglong)lVar9 >> 0x20));
    if ((pvVar6 != (void *)0x0) && (*(char *)((int)pvVar6 + 0x44) != '\0')) {
      iVar3 = extraout_EDX_08;
      if (pvStack_9c == (void *)0x0) {
        FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x2bd);
        iVar3 = extraout_EDX_09;
      }
      formatText_00 = find_play_element_in_maps(pvStack_9c,iVar3);
      if ((formatText_00 == (char *)0x0) || (formatText_00[0x44] == '\0')) {
        formatText_00 = (char *)0x0;
      }
      EvaluationEnvironment_logCardMessage(this,"Got Target1 Card: ",formatText_00,item);
    }
    cVar1 = FUN_01383520(0x2c,0);
    if (cVar1 == '\0') {
      EvaluationEnvironment_logCardMessage(this,"Checking Costs versus card2: ",formatText,item);
      piVar7 = EvaluationEnvironment_getOriginCard(this);
      uVar5 = *(undefined4 *)(*(int *)((int)this + 4) + 0x20);
      uVar4 = FUN_01383460(2);
      ActionDB_ensureSingleton();
      uVar5 = ActionDB_getAction(uVar4,uVar5);
      (**(code **)(*piVar7 + 0xf4))(uVar5,auStack_a0);
      EvaluationEnvironment_addCommandObjectChecked(&uStack_b8);
      local_c = (void *)CONCAT31(local_c._1_3_,3);
      piVar7 = EvaluationEnvironment_getOriginCard(this);
      cVar1 = (**(code **)(*piVar7 + 500))(&uStack_a8,&uStack_b8);
      if (cVar1 == '\0') {
        Game_logGeneral(*(void **)((int)this + 4),"command object preconditions failed.",item);
      }
      else {
        if (*(undefined4 **)((int)this + 0x54) <= vector) {
          FUN_00d83c2d();
        }
        EvaluationEnvironment_logCardMessage
                  (this,"Card passed cost validation: ",(char *)*vector,item);
        if (*(undefined4 **)((int)this + 0x54) <= vector) {
          FUN_00d83c2d();
        }
        PointerVector_pushBack(auStack_d0,vector,item);
      }
      iStack_4 = CONCAT31(iStack_4._1_3_,2);
      if (pvStack_ac != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_ac);
      }
      pvStack_ac = (void *)0x0;
      uStack_a8 = 0;
      uStack_a4 = 0;
    }
    else {
      if (*(undefined4 **)((int)this + 0x54) <= vector) {
        FUN_00d83c2d();
      }
      PointerVector_pushBack(auStack_d0,vector,item);
    }
    CommandObjectVector_clear(auStack_a0);
    uVar8 = extraout_EDX_10;
    if (*(undefined4 **)((int)this + 0x54) <= vector) {
      FUN_00d83c2d();
      uVar8 = extraout_EDX_11;
    }
    vector = vector + 1;
  }
  ValueDataList_assign(pvVar2,auStack_d0);
  iVar3 = *(int *)((int)this + 0x50);
  if ((iVar3 != 0) && (*(int *)((int)this + 0x54) - iVar3 >> 2 != 0)) {
    if (iVar3 == 0) {
LAB_0138973c:
      FUN_00d83c2d();
    }
    else if (*(int *)((int)this + 0x54) - iVar3 >> 2 == 1) {
      if ((iVar3 == 0) || (*(int *)((int)this + 0x54) - iVar3 >> 2 == 0)) {
        FUN_00d83c2d();
      }
    }
    else if ((iVar3 == 0) || ((uint)(*(int *)((int)this + 0x54) - iVar3 >> 2) < 2))
    goto LAB_0138973c;
    uVar5 = PlayElement_getId();
    *(undefined4 *)((int)this + 0x10) = uVar5;
    EvaluationEnvironment_tracef(this,"Returning (%d)",uVar5);
  }
  iStack_4 = CONCAT31(iStack_4._1_3_,1);
  if (pvStack_cc != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_cc);
  }
  pvStack_cc = (void *)0x0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FUN_01385460();
LAB_01389798:
  if (*(int *)((int)this + 4) == 0) {
    FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x2bd);
  }
  pvVar2 = find_play_element_in_maps(*(void **)((int)this + 4),*(int *)((int)this + 0x10));
  iStack_4 = 0xffffffff;
  if (pvStack_bc == (void *)0x0) {
    ExceptionList = local_c;
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_bc);
}

