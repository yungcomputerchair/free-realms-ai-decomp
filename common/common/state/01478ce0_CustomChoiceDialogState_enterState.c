// addr: 0x01478ce0
// name: CustomChoiceDialogState_enterState
// subsystem: common/common/rules
// source (binary assert): common/common/state/CustomChoiceDialogState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x01478fd8) */
/* WARNING: Removing unreachable block (ram,0x01478f4b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __fastcall CustomChoiceDialogState_enterState(int *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  void *this;
  int *piVar7;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar8;
  undefined4 uVar9;
  char *pcVar10;
  int key_;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int key__00;
  int key__01;
  int key__02;
  undefined4 *puVar11;
  undefined4 *puVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  undefined4 *apuStack_100 [2];
  undefined4 *puStack_f8;
  undefined4 *puStack_f4;
  undefined4 uStack_f0;
  void *pvStack_ec;
  void *pvStack_e8;
  void *pvStack_e4;
  undefined4 uStack_d4;
  uint uStack_d0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_cc [4];
  void *pvStack_c8;
  undefined4 uStack_b8;
  uint uStack_b4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_b0 [4];
  void *pvStack_ac;
  undefined4 uStack_9c;
  uint uStack_98;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_94 [4];
  void *pvStack_90;
  undefined4 uStack_80;
  uint uStack_7c;
  char acStack_78 [104];
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Builds and displays a CustomChoiceDialogState from return values, phase
                       dialog text, buttons, targets, dynamic cards, and custom-number
                       substitutions. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169fe3b;
  local_c = ExceptionList;
  local_10 = (void *)(DAT_01b839d8 ^ (uint)apuStack_100);
  ExceptionList = &local_c;
  (**(code **)(*param_1 + 0x4c))(DAT_01b839d8 ^ (uint)&stack0xfffffef0);
  EvaluationEnvironment_setDependentActionReturn(1);
  set_boolean_value_key_29(true);
  pvVar4 = (void *)StateMachine_popReturnValueMap();
  pvStack_e8 = pvVar4;
  if (pvVar4 == (void *)0x0) {
    FUN_012f5a60("returnValueMap","..\\common\\common\\state\\CustomChoiceDialogState.cpp",0x4d);
  }
  cVar2 = ReturnValueMap_hasIntegerKey(4);
  if (cVar2 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kPlayerReturn)",
                 "..\\common\\common\\state\\CustomChoiceDialogState.cpp",0x4f);
  }
  iVar5 = ReturnValueMap_getInteger(4);
  param_1[0x3e] = iVar5;
  pvVar6 = (void *)StateMachineState_getGame();
  pvVar6 = PlayArea_findPlayerElementById(pvVar6,iVar5);
  if (pvVar6 == (void *)0x0) {
    FUN_012f5a60("player","..\\common\\common\\state\\CustomChoiceDialogState.cpp",0x52);
  }
  FUN_013815b0(pvVar6);
  this = (void *)StateMachineState_getGame();
  piVar7 = Game_getCurrentTurn(this);
  (**(code **)(*piVar7 + 0x48))(pvVar6);
  (**(code **)(*param_1 + 0x9c))();
  pvVar4 = ReturnValueMap_findValueData(pvVar4,key_);
  if ((pvVar4 == (void *)0x0) || (*(int *)((int)pvVar4 + 4) != 8)) {
    FUN_012f5a60("vdl && vdl->isValueDataListValue()",
                 "..\\common\\common\\state\\CustomChoiceDialogState.cpp",0x58);
  }
  puStack_f8 = (undefined4 *)0x0;
  puStack_f4 = (undefined4 *)0x0;
  uStack_f0 = 0;
  puStack_8._0_1_ = 0;
  puStack_8._1_3_ = 0;
  if ((*(int *)((int)pvVar4 + 4) == 8) ||
     (FUN_012f5a60("mTypeID == kValueDataListTypeID",
                   "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                   ,0x14d), *(int *)((int)pvVar4 + 4) == 8)) {
    uVar9 = *(undefined4 *)((int)pvVar4 + 8);
  }
  else {
    uVar9 = 0;
  }
  FUN_012fffa0(uVar9);
  if ((puStack_f8 == (undefined4 *)0x0) || ((uint)((int)puStack_f4 - (int)puStack_f8 >> 2) < 2)) {
    FUN_012f5a60("valueDataList.size() >= 2",
                 "..\\common\\common\\state\\CustomChoiceDialogState.cpp",0x5c);
  }
  puVar12 = puStack_f8;
  if (puStack_f4 < puStack_f8) {
    FUN_00d83c2d();
  }
  apuStack_100[0] = puVar12;
  if (puStack_f4 <= puVar12) {
    FUN_00d83c2d();
  }
  FUN_013010e0(*puVar12);
  if (param_1[0x40] != 5) {
    FUN_012f5a60("mFirstEffect.isExpressionTreeValue()",
                 "..\\common\\common\\state\\CustomChoiceDialogState.cpp",0x5f);
  }
  if (puStack_f4 <= puVar12) {
    FUN_00d83c2d();
  }
  puVar11 = puVar12 + 1;
  if (puStack_f4 <= puVar11) {
    FUN_00d83c2d();
  }
  FUN_013010e0(*puVar11);
  iVar5 = extraout_EDX;
  if (param_1[0x43] != 5) {
    FUN_012f5a60("mSecondEffect.isExpressionTreeValue()",
                 "..\\common\\common\\state\\CustomChoiceDialogState.cpp",0x62);
    iVar5 = extraout_EDX_00;
  }
  if (puStack_f4 <= puVar11) {
    FUN_00d83c2d();
    iVar5 = extraout_EDX_01;
  }
  puVar11 = puStack_f4;
  puVar12 = puVar12 + 2;
  if (puStack_f4 < puStack_f8) {
    FUN_00d83c2d();
    iVar5 = extraout_EDX_02;
  }
  if (puVar12 != puVar11) {
    if (puStack_f4 <= puVar12) {
      FUN_00d83c2d();
    }
    FUN_013010e0(*puVar12);
    iVar5 = extraout_EDX_03;
    if (param_1[0x46] != 5) {
      FUN_012f5a60("mThirdEffect.isExpressionTreeValue()",
                   "..\\common\\common\\state\\CustomChoiceDialogState.cpp",0x66);
      iVar5 = extraout_EDX_04;
    }
    *(undefined1 *)(param_1 + 0x4a) = 1;
  }
  pvVar4 = ReturnValueMap_findValueData(pvStack_ec,iVar5);
  if (pvVar4 == (void *)0x0) {
    FUN_012f5a60(&PTR_LAB_018efc50,"..\\common\\common\\state\\CustomChoiceDialogState.cpp",0x6b);
  }
  if (*(int *)((int)pvVar4 + 4) == 10) {
    iVar5 = *(int *)((int)pvVar4 + 8);
    param_1[0x16] = *(int *)(iVar5 + 4);
    param_1[0x17] = *(int *)(iVar5 + 8);
    MessageText_copyFrom(iVar5 + 0xc);
  }
  else {
    pvVar4 = ValueData_toString(pvVar4,abStack_b0);
    puStack_8._0_1_ = 1;
    if (*(uint *)((int)pvVar4 + 0x18) < 0x10) {
      iVar5 = (int)pvVar4 + 4;
    }
    else {
      iVar5 = *(int *)((int)pvVar4 + 4);
    }
    FUN_012f5dc0("got non-string, non-Message phaseDialog %s",iVar5);
    puStack_8._0_1_ = 0;
    if (0xf < uStack_98) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_ac);
    }
    uStack_98 = 0xf;
    uStack_9c = 0;
    pvStack_ac = (void *)((uint)pvStack_ac & 0xffffff00);
  }
  pvVar4 = EvaluationEnvironment_getTargetCard((void *)param_1[0x3a]);
  if (pvVar4 != (void *)0x0) {
    EvaluationEnvironment_getTargetCard((void *)param_1[0x3a]);
    pbVar8 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             Card_getPropertyMap();
    uStack_b4 = 0xf;
    uStack_b8 = 0;
    pvStack_c8 = (void *)((uint)pvStack_c8 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_cc,pbVar8,0,0xffffffff);
    puStack_8._0_1_ = 2;
    uStack_7c = 0xf;
    uStack_80 = 0;
    pvStack_90 = (void *)((uint)pvStack_90 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_94,"#target1#",9);
    puStack_8._0_1_ = 3;
    FUN_01402480(abStack_94,abStack_cc);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
    if (0xf < uStack_7c) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_90);
    }
    uStack_7c = 0xf;
    uStack_80 = 0;
    pvStack_90 = (void *)((uint)pvStack_90 & 0xffffff00);
    puStack_8._0_1_ = 0;
    if (0xf < uStack_b4) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_c8);
    }
    uStack_b4 = 0xf;
    uStack_b8 = 0;
    pvStack_c8 = (void *)((uint)pvStack_c8 & 0xffffff00);
  }
  pvVar4 = EvaluationEnvironment_getTarget2Card((void *)param_1[0x3a]);
  if (pvVar4 != (void *)0x0) {
    EvaluationEnvironment_getTarget2Card((void *)param_1[0x3a]);
    pbVar8 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             Card_getPropertyMap();
    uStack_d0 = 0xf;
    uStack_d4 = 0;
    pvStack_e4 = (void *)((uint)pvStack_e4 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&pvStack_e8,pbVar8
               ,0,0xffffffff);
    puStack_8._0_1_ = 4;
    uStack_b4 = 0xf;
    uStack_b8 = 0;
    pvStack_c8 = (void *)((uint)pvStack_c8 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_cc,"#target2#",9);
    puStack_8._0_1_ = 5;
    FUN_01402480(abStack_cc,&pvStack_e8);
    puStack_8._0_1_ = 4;
    if (0xf < uStack_b4) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_c8);
    }
    iVar5 = 3;
    pbVar13 = abStack_b0;
    uStack_b4 = 0xf;
    uStack_b8 = 0;
    pvStack_c8 = (void *)((uint)pvStack_c8 & 0xffffff00);
    pvVar4 = EvaluationEnvironment_getTarget2Card((void *)param_1[0x3a]);
    Card_getDisplayNameForContext(pvVar4,pbVar13,iVar5);
    puStack_8._0_1_ = 6;
    uStack_7c = 0xf;
    uStack_80 = 0;
    pvStack_90 = (void *)((uint)pvStack_90 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_94,"#target2_him#",0xd);
    puStack_8._0_1_ = 7;
    FUN_01402480(abStack_94,abStack_b0);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
    if (0xf < uStack_7c) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_90);
    }
    uStack_7c = 0xf;
    uStack_80 = 0;
    pvStack_90 = (void *)((uint)pvStack_90 & 0xffffff00);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,4);
    if (0xf < uStack_98) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_ac);
    }
    uStack_98 = 0xf;
    uStack_9c = 0;
    pvStack_ac = (void *)((uint)pvStack_ac & 0xffffff00);
    puStack_8._0_1_ = 0;
    if (0xf < uStack_d0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_e4);
    }
    uStack_d0 = 0xf;
    uStack_d4 = 0;
    pvStack_e4 = (void *)((uint)pvStack_e4 & 0xffffff00);
  }
  pvVar4 = EvaluationEnvironment_getIntegerAsObject((void *)0x36);
  if (pvVar4 != (void *)0x0) {
    EvaluationEnvironment_getIntegerAsObject((void *)0x36);
    pbVar8 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             Card_getPropertyMap();
    uStack_7c = 0xf;
    uStack_80 = 0;
    pvStack_90 = (void *)((uint)pvStack_90 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_94,pbVar8,0,0xffffffff);
    puStack_8._0_1_ = 8;
    uStack_d0 = 0xf;
    uStack_d4 = 0;
    pvStack_e4 = (void *)((uint)pvStack_e4 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&pvStack_e8,
               "#target3#",9);
    puStack_8._0_1_ = 9;
    FUN_01402480(&pvStack_e8,abStack_94);
    puStack_8._0_1_ = 8;
    if (0xf < uStack_d0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_e4);
    }
    iVar5 = 3;
    pbVar13 = abStack_b0;
    uStack_d0 = 0xf;
    uStack_d4 = 0;
    pvStack_e4 = (void *)((uint)pvStack_e4 & 0xffffff00);
    pvVar4 = EvaluationEnvironment_getIntegerAsObject((void *)0x36);
    Card_getDisplayNameForContext(pvVar4,pbVar13,iVar5);
    puStack_8._0_1_ = 10;
    uStack_b4 = 0xf;
    uStack_b8 = 0;
    pvStack_c8 = (void *)((uint)pvStack_c8 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_cc,"#target3_him#",0xd);
    puStack_8._0_1_ = 0xb;
    FUN_01402480(abStack_cc,abStack_b0);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,10);
    if (0xf < uStack_b4) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_c8);
    }
    uStack_b4 = 0xf;
    uStack_b8 = 0;
    pvStack_c8 = (void *)((uint)pvStack_c8 & 0xffffff00);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,8);
    if (0xf < uStack_98) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_ac);
    }
    uStack_98 = 0xf;
    uStack_9c = 0;
    pvStack_ac = (void *)((uint)pvStack_ac & 0xffffff00);
    puStack_8._0_1_ = 0;
    if (0xf < uStack_7c) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_90);
    }
    uStack_7c = 0xf;
    uStack_80 = 0;
    pvStack_90 = (void *)((uint)pvStack_90 & 0xffffff00);
  }
  pvVar4 = EvaluationEnvironment_getIntegerAsObject((void *)0x37);
  if (pvVar4 != (void *)0x0) {
    EvaluationEnvironment_getIntegerAsObject((void *)0x37);
    pbVar8 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             Card_getPropertyMap();
    uStack_7c = 0xf;
    uStack_80 = 0;
    pvStack_90 = (void *)((uint)pvStack_90 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_94,pbVar8,0,0xffffffff);
    puStack_8._0_1_ = 0xc;
    uStack_d0 = 0xf;
    uStack_d4 = 0;
    pvStack_e4 = (void *)((uint)pvStack_e4 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&pvStack_e8,
               "#target4#",9);
    puStack_8._0_1_ = 0xd;
    FUN_01402480(&pvStack_e8,abStack_94);
    puStack_8._0_1_ = 0xc;
    if (0xf < uStack_d0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_e4);
    }
    iVar5 = 3;
    pbVar13 = abStack_b0;
    uStack_d0 = 0xf;
    uStack_d4 = 0;
    pvStack_e4 = (void *)((uint)pvStack_e4 & 0xffffff00);
    pvVar4 = EvaluationEnvironment_getIntegerAsObject((void *)0x37);
    Card_getDisplayNameForContext(pvVar4,pbVar13,iVar5);
    puStack_8._0_1_ = 0xe;
    uStack_b4 = 0xf;
    uStack_b8 = 0;
    pvStack_c8 = (void *)((uint)pvStack_c8 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_cc,"#target4_him#",0xd);
    puStack_8._0_1_ = 0xf;
    FUN_01402480(abStack_cc,abStack_b0);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xe);
    if (0xf < uStack_b4) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_c8);
    }
    uStack_b4 = 0xf;
    uStack_b8 = 0;
    pvStack_c8 = (void *)((uint)pvStack_c8 & 0xffffff00);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xc);
    if (0xf < uStack_98) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_ac);
    }
    uStack_98 = 0xf;
    uStack_9c = 0;
    pvStack_ac = (void *)((uint)pvStack_ac & 0xffffff00);
    puStack_8._0_1_ = 0;
    if (0xf < uStack_7c) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_90);
    }
    uStack_7c = 0xf;
    uStack_80 = 0;
    pvStack_90 = (void *)((uint)pvStack_90 & 0xffffff00);
  }
  iVar5 = Rules_getDynamicCardReturnCard();
  if (iVar5 != 0) {
    Rules_getDynamicCardReturnCard();
    pbVar8 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             Card_getPropertyMap();
    uStack_b4 = 0xf;
    uStack_b8 = 0;
    pvStack_c8 = (void *)((uint)pvStack_c8 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_cc,pbVar8,0,0xffffffff);
    puStack_8._0_1_ = 0x10;
    uStack_d0 = 0xf;
    uStack_d4 = 0;
    pvStack_e4 = (void *)((uint)pvStack_e4 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&pvStack_e8,
               "#dynamiccardkey#",0x10);
    puStack_8._0_1_ = 0x11;
    FUN_01402480(&pvStack_e8,abStack_cc);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x10);
    if (0xf < uStack_d0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_e4);
    }
    uStack_d0 = 0xf;
    uStack_d4 = 0;
    pvStack_e4 = (void *)((uint)pvStack_e4 & 0xffffff00);
    puStack_8._0_1_ = 0;
    if (0xf < uStack_b4) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_c8);
    }
    uStack_b4 = 0xf;
    uStack_b8 = 0;
    pvStack_c8 = (void *)((uint)pvStack_c8 & 0xffffff00);
  }
  pvVar4 = Rules_getVariable27Card((void *)param_1[0x3a]);
  if (pvVar4 != (void *)0x0) {
    Rules_getVariable27Card((void *)param_1[0x3a]);
    pbVar8 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             Card_getPropertyMap();
    uStack_b4 = 0xf;
    uStack_b8 = 0;
    pvStack_c8 = (void *)((uint)pvStack_c8 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_cc,pbVar8,0,0xffffffff);
    puStack_8._0_1_ = 0x12;
    uStack_d0 = 0xf;
    uStack_d4 = 0;
    pvStack_e4 = (void *)((uint)pvStack_e4 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&pvStack_e8,
               "#dynamiccard2key#",0x11);
    puStack_8._0_1_ = 0x13;
    FUN_01402480(&pvStack_e8,abStack_cc);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x12);
    if (0xf < uStack_d0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_e4);
    }
    uStack_d0 = 0xf;
    uStack_d4 = 0;
    pvStack_e4 = (void *)((uint)pvStack_e4 & 0xffffff00);
    puStack_8._0_1_ = 0;
    if (0xf < uStack_b4) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_c8);
    }
    uStack_b4 = 0xf;
    uStack_b8 = 0;
    pvStack_c8 = (void *)((uint)pvStack_c8 & 0xffffff00);
  }
  pvVar4 = EvaluationEnvironment_getOriginCard((void *)param_1[0x3a]);
  if (pvVar4 != (void *)0x0) {
    EvaluationEnvironment_getOriginCard((void *)param_1[0x3a]);
    pbVar8 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             Card_getPropertyMap();
    uStack_b4 = 0xf;
    uStack_b8 = 0;
    pvStack_c8 = (void *)((uint)pvStack_c8 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_cc,pbVar8,0,0xffffffff);
    puStack_8._0_1_ = 0x14;
    uStack_d0 = 0xf;
    uStack_d4 = 0;
    pvStack_e4 = (void *)((uint)pvStack_e4 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&pvStack_e8,
               "#title#",7);
    puStack_8._0_1_ = 0x15;
    FUN_01402480(&pvStack_e8,abStack_cc);
    puStack_8._0_1_ = 0x14;
    if (0xf < uStack_d0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_e4);
    }
    uStack_d0 = 0xf;
    uStack_d4 = 0;
    pvStack_e4 = (void *)((uint)pvStack_e4 & 0xffffff00);
    piVar7 = EvaluationEnvironment_getOriginCard((void *)param_1[0x3a]);
    uVar9 = (**(code **)(*piVar7 + 0x30))
                      (0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
    iVar5 = FUN_00d8d382(uVar9);
    if (iVar5 != 0) {
      uStack_d0 = 0xf;
      uStack_d4 = 0;
      pvStack_e4 = (void *)((uint)pvStack_e4 & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&pvStack_e8,
                 "#owner#",7);
      puStack_8._0_1_ = 0x16;
      uVar9 = Card_getPropertyMap();
      FUN_01402480(&pvStack_e8,uVar9);
      puStack_8._0_1_ = 0x14;
      if (0xf < uStack_d0) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_e4);
      }
      uStack_d0 = 0xf;
      uStack_d4 = 0;
      pvStack_e4 = (void *)((uint)pvStack_e4 & 0xffffff00);
    }
    puStack_8._0_1_ = 0;
    if (0xf < uStack_b4) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_c8);
    }
    uStack_b4 = 0xf;
    uStack_b8 = 0;
    pvStack_c8 = (void *)((uint)pvStack_c8 & 0xffffff00);
  }
  uVar9 = Rules_getIntegerKey15();
  _sprintf(acStack_78,"%d",uVar9);
  pcVar10 = acStack_78;
  uStack_b4 = 0xf;
  uStack_b8 = 0;
  pvStack_c8 = (void *)((uint)pvStack_c8 & 0xffffff00);
  do {
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (abStack_cc,acStack_78,(int)pcVar10 - (int)(acStack_78 + 1));
  puStack_8._0_1_ = 0x17;
  uStack_d0 = 0xf;
  uStack_d4 = 0;
  pvStack_e4 = (void *)((uint)pvStack_e4 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&pvStack_e8,
             "#numselectedkey#",0x10);
  puStack_8._0_1_ = 0x18;
  FUN_01402480(&pvStack_e8,abStack_cc);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x17);
  if (0xf < uStack_d0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_e4);
  }
  uStack_d0 = 0xf;
  uStack_d4 = 0;
  pvStack_e4 = (void *)((uint)pvStack_e4 & 0xffffff00);
  puStack_8._0_1_ = 0;
  if (0xf < uStack_b4) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_c8);
  }
  uStack_b4 = 0xf;
  uStack_b8 = 0;
  pvStack_c8 = (void *)((uint)pvStack_c8 & 0xffffff00);
  uVar9 = Rules_getIntegerKey16();
  _sprintf(acStack_78,"%d",uVar9);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&pvStack_e8,
             acStack_78);
  puStack_8._0_1_ = 0x19;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_b0,"#customnumberkey#");
  puStack_8._0_1_ = 0x1a;
  FUN_01402480(abStack_b0,&pvStack_e8);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x19);
  if (0xf < uStack_98) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_ac);
  }
  uStack_98 = 0xf;
  uStack_9c = 0;
  pvStack_ac = (void *)((uint)pvStack_ac & 0xffffff00);
  puStack_8._0_1_ = 0;
  if (0xf < uStack_d0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_e4);
  }
  uStack_d0 = 0xf;
  uStack_d4 = 0;
  pvStack_e4 = (void *)((uint)pvStack_e4 & 0xffffff00);
  uVar9 = Rules_getIntegerKey1B();
  _sprintf(acStack_78,"%d",uVar9);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&pvStack_e8,
             acStack_78);
  puStack_8._0_1_ = 0x1b;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_b0,"#customnumberkey2#");
  puStack_8._0_1_ = 0x1c;
  FUN_01402480(abStack_b0,&pvStack_e8);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x1b);
  if (0xf < uStack_98) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_ac);
  }
  uStack_98 = 0xf;
  uStack_9c = 0;
  pvStack_ac = (void *)((uint)pvStack_ac & 0xffffff00);
  puStack_8._0_1_ = 0;
  if (0xf < uStack_d0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_e4);
  }
  uStack_d0 = 0xf;
  uStack_d4 = 0;
  pvStack_e4 = (void *)((uint)pvStack_e4 & 0xffffff00);
  iVar5 = MessageText_formatWithValueData(abStack_b0);
  puStack_8._0_1_ = 0x1d;
  if (*(uint *)(iVar5 + 0x18) < 0x10) {
    iVar5 = iVar5 + 4;
  }
  else {
    iVar5 = *(int *)(iVar5 + 4);
  }
  pcVar10 = "CustomChoiceDialog = phaseDialog: %s";
  pvVar4 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar4,pcVar10,iVar5);
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  if (0xf < uStack_98) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_ac);
  }
  uStack_98 = 0xf;
  uStack_9c = 0;
  pvStack_ac = (void *)((uint)pvStack_ac & 0xffffff00);
  pvVar4 = ReturnValueMap_findValueData(pvStack_ec,key__00);
  if (pvVar4 == (void *)0x0) {
    FUN_012f5a60(&DAT_018f3c50,"..\\common\\common\\state\\CustomChoiceDialogState.cpp",0xcd);
  }
  if (*(int *)((int)pvVar4 + 4) == 3) {
    pbVar8 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_0123c310();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x23),
               pbVar8,0,0xffffffff);
  }
  else if (*(int *)((int)pvVar4 + 4) == 10) {
    pbVar13 = abStack_b0;
    FUN_012fa7e0(pbVar13);
    pbVar8 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             MessageText_formatWithValueData(pbVar13);
    puStack_8._0_1_ = 0x1e;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x23),
               pbVar8,0,0xffffffff);
    puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
    FUN_0041f1d7();
  }
  if ((uint)param_1[0x29] < 0x10) {
    piVar7 = param_1 + 0x24;
  }
  else {
    piVar7 = (int *)param_1[0x24];
  }
  pcVar10 = "CustomChoiceDialog = button1: %s";
  pvVar4 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar4,pcVar10,piVar7);
  pvVar4 = ReturnValueMap_findValueData(pvStack_ec,key__01);
  if (pvVar4 == (void *)0x0) {
    FUN_012f5a60(&DAT_018f3c24,"..\\common\\common\\state\\CustomChoiceDialogState.cpp",0xd7);
  }
  if (*(int *)((int)pvVar4 + 4) == 3) {
    pbVar8 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_0123c310();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x2a),
               pbVar8,0,0xffffffff);
  }
  else if (*(int *)((int)pvVar4 + 4) == 10) {
    pbVar13 = abStack_b0;
    FUN_012fa7e0(pbVar13);
    pbVar8 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             MessageText_formatWithValueData(pbVar13);
    puStack_8._0_1_ = 0x1f;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x2a),
               pbVar8,0,0xffffffff);
    puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
    FUN_0041f1d7();
  }
  if ((uint)param_1[0x30] < 0x10) {
    piVar7 = param_1 + 0x2b;
  }
  else {
    piVar7 = (int *)param_1[0x2b];
  }
  pcVar10 = "CustomChoiceDialog = button2: %s";
  pvVar4 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar4,pcVar10,piVar7);
  pvVar4 = ReturnValueMap_findValueData(pvStack_ec,key__02);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)((int)pvVar4 + 4) == 3) {
      pbVar8 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_0123c310();
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x31)
                 ,pbVar8,0,0xffffffff);
    }
    else if (*(int *)((int)pvVar4 + 4) == 10) {
      pbVar13 = abStack_b0;
      FUN_012fa7e0(pbVar13);
      pbVar8 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               MessageText_formatWithValueData(pbVar13);
      puStack_8._0_1_ = 0x20;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x31)
                 ,pbVar8,0,0xffffffff);
      puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
      FUN_0041f1d7();
    }
    if ((uint)param_1[0x37] < 0x10) {
      piVar7 = param_1 + 0x32;
    }
    else {
      piVar7 = (int *)param_1[0x32];
    }
    pcVar10 = "got button3: %s";
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar10,piVar7);
  }
  cVar2 = PointerVector_iteratorNotAtEnd(0x24);
  if (cVar2 != '\0') {
    cVar2 = ReturnValueMap_hasBooleanKey(0x24);
    if (cVar2 == '\0') {
      FUN_012f5a60("returnValueMap->hasBooleanKey(kForceReturn)",
                   "..\\common\\common\\state\\CustomChoiceDialogState.cpp",0xea);
    }
    uVar9 = ReturnValueMap_getBoolean(0x24);
    EvaluationEnvironment_setForceReturn(uVar9);
  }
  cVar2 = PointerVector_iteratorNotAtEnd(0x26);
  if (cVar2 != '\0') {
    cVar2 = ReturnValueMap_hasBooleanKey(0x26);
    if (cVar2 == '\0') {
      FUN_012f5a60("returnValueMap->hasBooleanKey(kNoAutoActionReturn)",
                   "..\\common\\common\\state\\CustomChoiceDialogState.cpp",0xef);
    }
    uVar3 = ReturnValueMap_getBoolean(0x26);
    *(undefined1 *)((int)param_1 + 0x129) = uVar3;
  }
  StateMachine_destroyReturnValueMap(pvStack_ec);
  pcVar1 = *(code **)(*param_1 + 0x3c);
  param_1[0x49] = 1;
  uVar9 = (*pcVar1)();
  puStack_8 = (undefined1 *)0xffffffff;
  if (puStack_f8 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_f8);
  }
  ExceptionList = local_10;
  return uVar9;
}

