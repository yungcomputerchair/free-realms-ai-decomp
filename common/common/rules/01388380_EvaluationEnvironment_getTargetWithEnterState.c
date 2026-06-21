// addr: 0x01388380
// name: EvaluationEnvironment_getTargetWithEnterState
// subsystem: common/common/rules
// source (binary assert): common/common/rules/EvaluationEnvironment.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EvaluationEnvironment_getTargetWithEnterState(void * env) */

void * __fastcall EvaluationEnvironment_getTargetWithEnterState(void *env)

{
  char *formatText;
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void **item;
  int iVar8;
  int *piVar9;
  void *pvVar10;
  char *formatText_00;
  int in_EDX;
  int extraout_EDX;
  int extraout_EDX_00;
  void *unaff_EBX;
  undefined4 *puVar11;
  undefined1 *puStack_e8;
  int aiStack_e0 [2];
  int iStack_d8;
  undefined4 *puStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [12];
  undefined4 uStack_b4;
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [80];
  void *pvStack_24;
  uint uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
                    /* Finds/caches the primary target using enter-state targeting, validates target
                       candidates and cost preconditions, tracks the target iterator, and logs the
                       selected target. */
  puStack_e8 = &stack0xfffffffc;
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_016835c1;
  local_14 = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffff10;
  ExceptionList = &local_14;
  puVar1 = &stack0xfffffffc;
  if (*(int *)((int)env + 4) == 0) {
    FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x427);
    in_EDX = extraout_EDX;
    puVar1 = puStack_e8;
  }
  puStack_e8 = puVar1;
  if (*(int *)((int)env + 0xc) != 0) {
    if (*(int *)((int)env + 4) == 0) {
      FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x2bd);
      in_EDX = extraout_EDX_00;
    }
    pvVar4 = find_play_element_in_maps(*(void **)((int)env + 4),in_EDX);
    ExceptionList = local_14;
    return pvVar4;
  }
  aiStack_e0[0] = 0x1c;
  pvVar4 = EvaluationEnvironment_getOrCreateReturnValue(aiStack_e0,uVar3);
  FUN_01300680(1);
  *(undefined1 *)((int)pvVar4 + 8) = 1;
  uVar5 = FUN_01383520(4,0);
  EvaluationEnvironment_tracef(env,"getTargetWithEnterState:: %d",uVar5 & 0xff);
  cVar2 = FUN_01383520(4,0);
  if (cVar2 != '\0') {
    uVar6 = (**(code **)(**(int **)((int)env + 4) + 0x11c))();
    *(undefined4 *)((int)env + 0xc) = uVar6;
    EvaluationEnvironment_tracef(env,"Not getting target",uVar3);
    if (*(int *)((int)env + 0xc) == 0) {
      EvaluationEnvironment_setTarget1Return(1);
    }
    EvaluationEnvironment_tracef(env,"Returning NULL",uVar3);
    ExceptionList = local_14;
    return (void *)0x0;
  }
  puStack_d4 = (undefined4 *)0x0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_c = 0;
  EvaluationEnvironment_tracef(env,"Getting targets",uVar3);
  if (*(int *)((int)env + 0x14) == 0) {
    FUN_012f5a60("mPlayer","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x43e);
  }
  uVar6 = *(undefined4 *)(*(int *)((int)env + 4) + 0x20);
  uVar7 = FUN_01383460(2);
  ActionDB_ensureSingleton();
  uVar6 = ActionDB_getAction(uVar7,uVar6);
  iVar8 = **(int **)((int)env + 0x14);
  piVar9 = &iStack_d8;
  pvVar4 = env;
  item = EvaluationEnvironment_getOriginCard(env);
  cVar2 = (**(code **)(iVar8 + 0x70))(item,piVar9,uVar6,pvVar4);
  if (cVar2 == '\0') {
    if (*(int *)((int)env + 4) == 0) {
      FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x2bd);
    }
    Game_logGeneralFormatted
              (*(undefined4 *)((int)env + 4),"validTargets failed in EvaluationEnvironment");
  }
  EvaluationEnvironment_logCardList(env,"Found: ",&puStack_e8);
  if ((unaff_EBX == (void *)0x0) || (aiStack_e0[0] - (int)unaff_EBX >> 2 == 0)) goto LAB_01388859;
  uVar6 = *(undefined4 *)(*(int *)((int)env + 4) + 0x20);
  uVar7 = FUN_01383460(2);
  ActionDB_ensureSingleton();
  iVar8 = ActionDB_getAction(uVar7,uVar6);
  if (iVar8 == 0) {
LAB_013887e0:
    PointerVector_at(&puStack_e8,(void *)0x0,(int)item);
    uVar6 = PlayElement_getId();
    *(undefined4 *)((int)env + 0xc) = uVar6;
    ValueDataList_assign((void *)((int)env + 0x3c),&puStack_e8);
  }
  else {
    pvVar4 = EvaluationEnvironment_getOriginCard(env);
    if (pvVar4 == (void *)0x0) goto LAB_013887e0;
    EvaluationEnvironment_ctor();
    uStack_1c = CONCAT31(uStack_1c._1_3_,1);
    EvaluationEnvironment_copyFrom(auStack_c0,env,item);
    uVar6 = FUN_01383520(9,0);
    EvaluationEnvironment_setBooleanKey9(uVar6);
    uVar6 = FUN_01383520(4,0);
    EvaluationEnvironment_setBooleanKey4(uVar6);
    ValueDataList_assign(auStack_74,(void *)((int)env + 0x4c));
    pvVar4 = (void *)((int)env + 0x3c);
    ValueDataList_assign(auStack_84,pvVar4);
    piVar9 = (int *)FUN_01258ef0(&stack0xffffff10);
    iStack_d8 = *piVar9;
    puStack_d4 = (undefined4 *)piVar9[1];
    piVar9 = (int *)FUN_01258ec0(&uStack_d0);
    iVar8 = *piVar9;
    puVar11 = (undefined4 *)piVar9[1];
    while( true ) {
      if ((iVar8 == 0) || (iVar8 != iStack_d8)) {
        FUN_00d83c2d();
      }
      if (puVar11 == puStack_d4) break;
      if (iVar8 == 0) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)(iVar8 + 8) <= puVar11) {
        FUN_00d83c2d();
      }
      formatText = (char *)*puVar11;
      if (formatText == (char *)0x0) {
        uStack_b4 = 0;
      }
      else {
        uStack_b4 = PlayElement_getId();
      }
      pvVar10 = EvaluationEnvironment_getTarget2Card(auStack_c0);
      if (pvVar10 != (void *)0x0) {
        formatText_00 = EvaluationEnvironment_getTarget2Card(auStack_c0);
        EvaluationEnvironment_logCardMessage(env,"Got Target2 Card: ",formatText_00,item);
      }
      cVar2 = FUN_01383520(0x2c,0);
      if (cVar2 == '\0') {
        EvaluationEnvironment_logCardMessage(env,"Checking Costs versus card: ",formatText,item);
        uVar6 = *(undefined4 *)(*(int *)((int)env + 4) + 0x20);
        uVar7 = FUN_01383460(2);
        ActionDB_ensureSingleton();
        uVar6 = ActionDB_getAction(uVar7,uVar6);
        piVar9 = EvaluationEnvironment_getOriginCard(env);
        (**(code **)(*piVar9 + 0xf4))(uVar6,auStack_c0);
        EvaluationEnvironment_addCommandObjectChecked(&iStack_d8);
        pvStack_24 = (void *)CONCAT31(pvStack_24._1_3_,2);
        piVar9 = EvaluationEnvironment_getOriginCard(env);
        cVar2 = (**(code **)(*piVar9 + 500))(auStack_c8,&iStack_d8);
        if (cVar2 == '\0') {
          Game_logGeneral(*(void **)((int)env + 4),"command object preconditions failed.",item);
        }
        else {
          EvaluationEnvironment_logCardMessage(env,"Card passed cost validation: ",formatText,item);
          pvVar10 = (void *)FUN_01258670();
          PointerVector_pushBack(pvVar4,pvVar10,item);
        }
        uStack_1c = CONCAT31(uStack_1c._1_3_,1);
        FUN_01314560();
      }
      else {
        pvVar10 = (void *)FUN_01258670();
        PointerVector_pushBack(pvVar4,pvVar10,item);
      }
      CommandObjectVector_clear(auStack_c0);
      if (*(undefined4 **)(iVar8 + 8) <= puVar11) {
        FUN_00d83c2d();
      }
      puVar11 = puVar11 + 1;
    }
    uStack_1c = uStack_1c & 0xffffff00;
    FUN_01385460();
  }
  iVar8 = *(int *)((int)env + 0x40);
  if ((iVar8 != 0) && (*(int *)((int)env + 0x44) - iVar8 >> 2 != 0)) {
    if ((iVar8 == 0) || (*(int *)((int)env + 0x44) - iVar8 >> 2 == 0)) {
      FUN_00d83c2d();
    }
    uVar6 = PlayElement_getId();
    *(undefined4 *)((int)env + 0xc) = uVar6;
    uVar3 = *(uint *)((int)env + 0x40);
    if (*(uint *)((int)env + 0x44) < uVar3) {
      FUN_00d83c2d();
    }
    *(int *)((int)env + 0x5c) = (int)env + 0x3c;
    *(uint *)((int)env + 0x60) = uVar3;
    EvaluationEnvironment_tracef(env,"Returning (%d)",*(undefined4 *)((int)env + 0xc));
  }
LAB_01388859:
  if (*(int *)((int)env + 4) == 0) {
    FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x2bd);
  }
  pvVar4 = find_play_element_in_maps(*(void **)((int)env + 4),*(int *)((int)env + 0xc));
  uStack_1c = 0xffffffff;
  if (unaff_EBX != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBX);
  }
  ExceptionList = pvStack_24;
  return pvVar4;
}

