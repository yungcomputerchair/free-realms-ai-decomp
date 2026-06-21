// addr: 0x013888d0
// name: EvaluationEnvironment_getTargetForInput
// subsystem: common/common/rules
// source (binary assert): common/common/rules/EvaluationEnvironment.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EvaluationEnvironment_getTargetForInput(void * env, int inputCode_) */

void * __thiscall EvaluationEnvironment_getTargetForInput(void *this,void *env,int inputCode_)

{
  char *formatText;
  int iVar1;
  uint uVar2;
  char cVar3;
  void **item;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *pvVar7;
  int iVar8;
  int *piVar9;
  char *formatText_00;
  int in_EDX;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  undefined4 *puVar10;
  undefined1 *puVar11;
  int iStack_d0;
  undefined4 *puStack_cc;
  undefined1 auStack_c8 [4];
  void *pvStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 *puStack_b4;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [12];
  undefined4 uStack_94;
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* Variant of primary target resolution that accepts an input/state parameter,
                       obtains target candidates from the game, validates cost preconditions, caches
                       TargetID, and returns the target card. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01683611;
  local_c = ExceptionList;
  item = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffff20);
  ExceptionList = &local_c;
  if (*(int *)((int)this + 4) == 0) {
    FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x47f);
    in_EDX = extraout_EDX;
  }
  if (*(int *)((int)this + 0xc) == 0) {
    iStack_d0 = 0x1c;
    pvVar4 = EvaluationEnvironment_getOrCreateReturnValue(&iStack_d0,(int)item);
    FUN_01300680(1);
    *(undefined1 *)((int)pvVar4 + 8) = 1;
    cVar3 = FUN_01383520(4,0);
    if (cVar3 == '\0') {
      pvStack_c4 = (void *)0x0;
      iStack_c0 = 0;
      uStack_bc = 0;
      uStack_4 = 0;
      EvaluationEnvironment_tracef(this,"Getting targets",item);
      if (*(int *)((int)this + 0x14) == 0) {
        FUN_012f5a60("mPlayer","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x495);
      }
      uVar5 = *(undefined4 *)(*(int *)((int)this + 4) + 0x20);
      uVar6 = FUN_01383460(2);
      ActionDB_ensureSingleton();
      uVar5 = ActionDB_getAction(uVar6,uVar5);
      iVar8 = **(int **)((int)this + 0x14);
      puVar11 = auStack_c8;
      pvVar4 = this;
      pvVar7 = EvaluationEnvironment_getOriginCard(this);
      cVar3 = (**(code **)(iVar8 + 0x70))(pvVar7,puVar11,uVar5,pvVar4);
      if (cVar3 == '\0') {
        if (*(int *)((int)this + 4) == 0) {
          FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x2bd);
        }
        Game_logGeneralFormatted
                  (*(undefined4 *)((int)this + 4),"validTargets failed in EvaluationEnvironment");
      }
      EvaluationEnvironment_logCardList(this,"Found: ",auStack_c8);
      iVar8 = extraout_EDX_01;
      if ((pvStack_c4 != (void *)0x0) && (iVar8 = 0, iStack_c0 - (int)pvStack_c4 >> 2 != 0)) {
        uVar5 = *(undefined4 *)(*(int *)((int)this + 4) + 0x20);
        uVar6 = FUN_01383460(2);
        ActionDB_ensureSingleton();
        iVar8 = ActionDB_getAction(uVar6,uVar5);
        if ((iVar8 == 0) ||
           (pvVar4 = EvaluationEnvironment_getOriginCard(this), pvVar4 == (void *)0x0)) {
          PointerVector_at(auStack_c8,(void *)0x0,(int)item);
          uVar5 = PlayElement_getId();
          *(undefined4 *)((int)this + 0xc) = uVar5;
          ValueDataList_assign((void *)((int)this + 0x3c),auStack_c8);
          iVar8 = extraout_EDX_03;
        }
        else {
          EvaluationEnvironment_ctor();
          uStack_4 = CONCAT31(uStack_4._1_3_,1);
          EvaluationEnvironment_copyFrom(auStack_a0,this,item);
          uVar5 = FUN_01383520(9,0);
          EvaluationEnvironment_setBooleanKey9(uVar5);
          uVar5 = FUN_01383520(4,0);
          EvaluationEnvironment_setBooleanKey4(uVar5);
          piVar9 = (int *)FUN_01258ef0(&iStack_d0);
          iStack_b8 = *piVar9;
          puStack_b4 = (undefined4 *)piVar9[1];
          piVar9 = (int *)FUN_01258ec0(auStack_b0);
          iVar8 = *piVar9;
          puVar10 = (undefined4 *)piVar9[1];
          iStack_d0 = iVar8;
          while( true ) {
            puStack_cc = puVar10;
            if ((iVar8 == 0) || (iVar8 != iStack_b8)) {
              FUN_00d83c2d();
            }
            if (puVar10 == puStack_b4) break;
            if (iVar8 == 0) {
              FUN_00d83c2d();
            }
            if (*(undefined4 **)(iVar8 + 8) <= puVar10) {
              FUN_00d83c2d();
            }
            formatText = (char *)*puVar10;
            if (formatText == (char *)0x0) {
              uStack_94 = 0;
            }
            else {
              uStack_94 = PlayElement_getId();
            }
            pvVar4 = EvaluationEnvironment_getTarget2Card(auStack_a0);
            if (pvVar4 != (void *)0x0) {
              formatText_00 = EvaluationEnvironment_getTarget2Card(auStack_a0);
              EvaluationEnvironment_logCardMessage(this,"Got Target2 Card: ",formatText_00,item);
            }
            cVar3 = FUN_01383520(0x2c,0);
            if (cVar3 == '\0') {
              EvaluationEnvironment_logCardMessage
                        (this,"Checking Costs versus card: ",formatText,item);
              uVar5 = *(undefined4 *)(*(int *)((int)this + 4) + 0x20);
              uVar6 = FUN_01383460(2);
              ActionDB_ensureSingleton();
              uVar5 = ActionDB_getAction(uVar6,uVar5);
              piVar9 = EvaluationEnvironment_getOriginCard(this);
              (**(code **)(*piVar9 + 0xf4))(uVar5,auStack_a0);
              EvaluationEnvironment_addCommandObjectChecked(&iStack_b8);
              local_c = (void *)CONCAT31(local_c._1_3_,2);
              piVar9 = EvaluationEnvironment_getOriginCard(this);
              cVar3 = (**(code **)(*piVar9 + 500))(auStack_a8,&iStack_b8);
              if (cVar3 == '\0') {
                Game_logGeneral(*(void **)((int)this + 4),"command object preconditions failed.",
                                item);
              }
              else {
                EvaluationEnvironment_logCardMessage
                          (this,"Card passed cost validation: ",formatText,item);
                pvVar4 = (void *)FUN_01258670();
                PointerVector_pushBack((void *)((int)this + 0x3c),pvVar4,item);
              }
              uStack_4 = CONCAT31(uStack_4._1_3_,1);
              FUN_01314560();
              iVar8 = iStack_d0;
            }
            else {
              pvVar4 = (void *)FUN_01258670();
              PointerVector_pushBack((void *)((int)this + 0x3c),pvVar4,item);
            }
            CommandObjectVector_clear(auStack_a0);
            if (*(undefined4 **)(iVar8 + 8) <= puVar10) {
              FUN_00d83c2d();
            }
            puVar10 = puVar10 + 1;
          }
          uStack_4 = uStack_4 & 0xffffff00;
          FUN_01385460();
          iVar8 = extraout_EDX_02;
        }
        iVar1 = *(int *)((int)this + 0x40);
        if ((iVar1 != 0) && (iVar8 = 0, *(int *)((int)this + 0x44) - iVar1 >> 2 != 0)) {
          if ((iVar1 == 0) || (*(int *)((int)this + 0x44) - iVar1 >> 2 == 0)) {
            FUN_00d83c2d();
          }
          uVar5 = PlayElement_getId();
          *(undefined4 *)((int)this + 0xc) = uVar5;
          uVar2 = *(uint *)((int)this + 0x40);
          if (*(uint *)((int)this + 0x44) < uVar2) {
            FUN_00d83c2d();
          }
          *(int *)((int)this + 0x5c) = (int)this + 0x3c;
          *(uint *)((int)this + 0x60) = uVar2;
          EvaluationEnvironment_tracef(this,"Returning (%d)",*(undefined4 *)((int)this + 0xc));
          iVar8 = extraout_EDX_04;
        }
      }
      if (*(int *)((int)this + 4) == 0) {
        FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x2bd);
        iVar8 = extraout_EDX_05;
      }
      pvVar4 = find_play_element_in_maps(*(void **)((int)this + 4),iVar8);
      uStack_4 = 0xffffffff;
      if (pvStack_c4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_c4);
      }
    }
    else {
      uVar5 = (**(code **)(**(int **)((int)this + 4) + 0x120))(env);
      *(undefined4 *)((int)this + 0xc) = uVar5;
      EvaluationEnvironment_tracef(this,"Not getting target",item);
      if (*(int *)((int)this + 0xc) == 0) {
        EvaluationEnvironment_setTarget1Return(1);
      }
      EvaluationEnvironment_tracef(this,"Returning NULL",item);
      pvVar4 = (void *)0x0;
    }
  }
  else {
    if (*(int *)((int)this + 4) == 0) {
      FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x2bd);
      in_EDX = extraout_EDX_00;
    }
    pvVar4 = find_play_element_in_maps(*(void **)((int)this + 4),in_EDX);
  }
  ExceptionList = local_c;
  return pvVar4;
}

