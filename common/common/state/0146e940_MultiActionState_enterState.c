// addr: 0x0146e940
// name: MultiActionState_enterState
// subsystem: common/common/rules
// source (binary assert): common/common/state/MultiActionState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __fastcall MultiActionState_enterState(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  char *pcVar12;
  void *apvStack_90 [4];
  undefined4 uStack_80;
  uint uStack_7c;
  int iStack_74;
  int iStack_70;
  void *pvStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_54;
  int iStack_50;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_4c [4];
  void *pvStack_48;
  undefined4 uStack_38;
  uint uStack_34;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_30 [4];
  void *pvStack_2c;
  undefined4 uStack_1c;
  uint uStack_18;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Initializes MultiActionState from return values, title/dialog/custom command
                       fields, dynamic cards, target lists, and maximum action counts. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169ebe5;
  local_c = ExceptionList;
  local_10 = (void *)(DAT_01b839d8 ^ (uint)apvStack_90);
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffff60;
  ExceptionList = &local_c;
  pcVar12 = "MultiActionState::enterState";
  pvVar5 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar5,pcVar12,uVar4);
  (**(code **)(*param_1 + 0x4c))();
  iStack_64 = StateMachine_popReturnValueMap();
  if (iStack_64 == 0) {
    FUN_012f5a60("returnValueMap","..\\common\\common\\state\\MultiActionState.cpp",0x65);
  }
  cVar1 = ReturnValueMap_hasIntegerKey(4);
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kPlayerReturn)",
                 "..\\common\\common\\state\\MultiActionState.cpp",0x67);
  }
  iVar6 = ReturnValueMap_getInteger(4);
  param_1[0x40] = iVar6;
  pvVar5 = (void *)StateMachineState_getGame();
  pvVar5 = PlayArea_findPlayerElementById(pvVar5,iVar6);
  param_1[0x3e] = (int)pvVar5;
  piVar7 = (int *)StateMachineState_getCurrentTurn();
  iVar6 = param_1[0x3e];
  (**(code **)(*piVar7 + 0x48))();
  FUN_013815b0(param_1[0x3e]);
  cVar1 = ReturnValueMap_hasIntegerKey(3);
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kCardPlayedReturn)",
                 "..\\common\\common\\state\\MultiActionState.cpp",0x6f);
  }
  iVar8 = ReturnValueMap_getInteger(3);
  param_1[0x41] = iVar8;
  cVar1 = ReturnValueMap_hasIntegerKey(5);
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kActionReturn)",
                 "..\\common\\common\\state\\MultiActionState.cpp",0x72);
  }
  iVar8 = ReturnValueMap_getInteger(5);
  param_1[0x42] = iVar8;
  cVar1 = ReturnValueMap_hasBooleanKey(0x1b);
  if (cVar1 != '\0') {
    uVar2 = ReturnValueMap_getBoolean(0x1b);
    *(undefined1 *)(param_1 + 0x5b) = uVar2;
  }
  if ((char)param_1[0x5b] == '\0') {
    pcVar12 = "Calculating mMaxNumActions";
    pvVar5 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar5,pcVar12,iVar6);
    FUN_012fa910();
    puStack_8 = (undefined1 *)0x0;
    bVar3 = ValueData_clearIfPresent((void *)0xa);
    if (!bVar3) {
      FUN_012f5a60("returnValueMap->getValue(kMultiActionNumReturn, foo)",
                   "..\\common\\common\\state\\MultiActionState.cpp",0x7c);
    }
    FUN_01301590(param_1[0x3a]);
    iVar6 = iStack_70;
    if (iStack_74 != 2) {
      FUN_01300680(2);
      iStack_70 = 0;
      iVar6 = iStack_70;
      if ((iStack_74 != 2) &&
         (FUN_012f5a60("mTypeID == kIntegerTypeID",
                       "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                       ,0x129), iVar6 = iStack_70, iStack_74 != 2)) {
        iVar6 = 0;
      }
    }
    param_1[0x43] = iVar6;
    if (iVar6 < 0) {
      param_1[0x43] = 0;
    }
    iVar6 = param_1[0x43];
    pcVar12 = "mMaxNumActions: %d";
    param_1[0x44] = iVar6;
    pvVar5 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar5,pcVar12,iVar6);
    puStack_8 = (undefined1 *)0xffffffff;
    FUN_01300cd0();
  }
  else {
    pcVar12 = "using until query";
    pvVar5 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar5,pcVar12,iVar6);
    pvStack_6c = Mem_Alloc(0xc);
    puStack_8 = (undefined1 *)0x1;
    if (pvStack_6c == (void *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_012fa910();
    }
    puStack_8 = (undefined1 *)0xffffffff;
    param_1[0x5a] = iVar6;
    bVar3 = ValueData_clearIfPresent((void *)0xa);
    if (!bVar3) {
      FUN_012f5a60("returnValueMap->getValue(kMultiActionNumReturn, *mUntilData)",
                   "..\\common\\common\\state\\MultiActionState.cpp",0x8a);
    }
  }
  cVar1 = ReturnValueMap_hasIntegerKey(0xb);
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kMultiActionCommandObjectReturn)",
                 "..\\common\\common\\state\\MultiActionState.cpp",0x8d);
  }
  iVar6 = ReturnValueMap_getInteger(0xb);
  param_1[0x3f] = iVar6;
  if (((iVar6 == 3) || (iVar6 == 6)) && (bVar3 = ValueData_clearIfPresent((void *)0x17), !bVar3)) {
    FUN_012f5a60("returnValueMap->getValue(kMultiActionCustomCommandObjectReturn, mCustomCommands)",
                 "..\\common\\common\\state\\MultiActionState.cpp",0x93);
  }
  if (param_1[0x3f] == 4) {
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  bVar3 = ValueData_clearIfPresent(&DAT_0000000c);
  if (!bVar3) {
    FUN_012f5a60("returnValueMap->getValue(kMultiActionTargetsReturn, mTargets)",
                 "..\\common\\common\\state\\MultiActionState.cpp",0x9a);
  }
  if (((param_1[0x47] == 2) &&
      ((param_1[0x47] == 2 ||
       (FUN_012f5a60("mTypeID == kIntegerTypeID",
                     "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                     ,0x129), param_1[0x47] == 2)))) && (param_1[0x48] == 6)) {
    PlayElement_getGame();
    FUN_0139d7a0();
    pvStack_6c = (void *)PlayElement_getId();
    FUN_01300680(2);
    param_1[0x48] = (int)pvStack_6c;
  }
  FUN_012fa910();
  puStack_8 = (undefined1 *)0x2;
  bVar3 = ValueData_clearIfPresent(&DAT_0000000d);
  if (!bVar3) {
    FUN_012f5a60("returnValueMap->getValue(kMultiActionPhaseDialogTextReturn, phaseData)",
                 "..\\common\\common\\state\\MultiActionState.cpp",0xa2);
  }
  if (iStack_54 == 10) {
    param_1[0x16] = *(int *)(iStack_50 + 4);
    param_1[0x17] = *(int *)(iStack_50 + 8);
    MessageText_copyFrom(iStack_50 + 0xc);
  }
  FUN_012fa910();
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,3);
  cVar1 = PointerVector_iteratorNotAtEnd(0x27);
  if ((cVar1 == '\0') || (ValueData_clearIfPresent((void *)0x27), iStack_60 != 10)) {
    iVar6 = StateMachineState_getGame();
    set_pair_fields_4_8(param_1 + 0x1c,0x28b9,*(uint *)(iVar6 + 0x20));
  }
  else {
    param_1[0x1d] = *(int *)(iStack_5c + 4);
    param_1[0x1e] = *(int *)(iStack_5c + 8);
    MessageText_copyFrom(iStack_5c + 0xc);
  }
  iVar6 = MessageText_formatWithValueData(&stack0xffffff6c);
  puStack_8._0_1_ = 4;
  if (*(uint *)(iVar6 + 0x18) < 0x10) {
    iVar6 = iVar6 + 4;
  }
  else {
    iVar6 = *(int *)(iVar6 + 4);
  }
  pcVar12 = "WaitText: %s";
  pvVar5 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar5,pcVar12,iVar6);
  puStack_8._0_1_ = 3;
  if (0xf < uStack_7c) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_90[0]);
  }
  uStack_7c = 0xf;
  uStack_80 = 0;
  apvStack_90[0] = (void *)((uint)apvStack_90[0] & 0xffffff00);
  uVar11 = StateMachineState_getGame
                     (param_1[0x41],0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor
                      ,0);
  pvVar5 = find_play_element_in_maps((void *)uVar11,(int)((ulonglong)uVar11 >> 0x20));
  iVar6 = FUN_00d8d382(pvVar5);
  if (iVar6 != 0) {
    pbVar9 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             Card_getPropertyMap();
    uStack_18 = 0xf;
    uStack_1c = 0;
    pvStack_2c = (void *)((uint)pvStack_2c & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_30,pbVar9,0,0xffffffff);
    puStack_8._0_1_ = 5;
    uStack_34 = 0xf;
    uStack_38 = 0;
    pvStack_48 = (void *)((uint)pvStack_48 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_4c,"#title#",7);
    puStack_8._0_1_ = 6;
    FUN_01402480(abStack_4c,abStack_30);
    puStack_8._0_1_ = 5;
    if (0xf < uStack_34) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_48);
    }
    uStack_34 = 0xf;
    uStack_38 = 0;
    pvStack_48 = (void *)((uint)pvStack_48 & 0xffffff00);
    uStack_7c = 0xf;
    uStack_80 = 0;
    apvStack_90[0] = (void *)((uint)apvStack_90[0] & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0xffffff6c,
               "#title#",7);
    puStack_8._0_1_ = 7;
    FUN_01402480(&stack0xffffff6c,abStack_30);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,5);
    if (0xf < uStack_7c) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_90[0]);
    }
    uStack_7c = 0xf;
    uStack_80 = 0;
    apvStack_90[0] = (void *)((uint)apvStack_90[0] & 0xffffff00);
    puStack_8._0_1_ = 3;
    if (0xf < uStack_18) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_2c);
    }
    uStack_18 = 0xf;
    uStack_1c = 0;
    pvStack_2c = (void *)((uint)pvStack_2c & 0xffffff00);
  }
  iVar6 = Rules_getDynamicCardReturnCard();
  if (iVar6 != 0) {
    Rules_getDynamicCardReturnCard();
    pbVar9 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             Card_getPropertyMap();
    uStack_34 = 0xf;
    uStack_38 = 0;
    pvStack_48 = (void *)((uint)pvStack_48 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_4c,pbVar9,0,0xffffffff);
    puStack_8._0_1_ = 8;
    uStack_7c = 0xf;
    uStack_80 = 0;
    apvStack_90[0] = (void *)((uint)apvStack_90[0] & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0xffffff6c,
               "#dynamiccardkey#",0x10);
    puStack_8._0_1_ = 9;
    FUN_01402480(&stack0xffffff6c,abStack_4c);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,8);
    if (0xf < uStack_7c) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_90[0]);
    }
    uStack_7c = 0xf;
    uStack_80 = 0;
    apvStack_90[0] = (void *)((uint)apvStack_90[0] & 0xffffff00);
    puStack_8._0_1_ = 3;
    if (0xf < uStack_34) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_48);
    }
    uStack_34 = 0xf;
    uStack_38 = 0;
    pvStack_48 = (void *)((uint)pvStack_48 & 0xffffff00);
  }
  pvVar5 = Rules_getVariable27Card((void *)param_1[0x3a]);
  if (pvVar5 != (void *)0x0) {
    Rules_getVariable27Card((void *)param_1[0x3a]);
    pbVar9 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             Card_getPropertyMap();
    uStack_34 = 0xf;
    uStack_38 = 0;
    pvStack_48 = (void *)((uint)pvStack_48 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_4c,pbVar9,0,0xffffffff);
    puStack_8._0_1_ = 10;
    uStack_7c = 0xf;
    uStack_80 = 0;
    apvStack_90[0] = (void *)((uint)apvStack_90[0] & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0xffffff6c,
               "#dynamiccard2key#",0x11);
    puStack_8._0_1_ = 0xb;
    FUN_01402480(&stack0xffffff6c,abStack_4c);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,10);
    if (0xf < uStack_7c) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_90[0]);
    }
    uStack_7c = 0xf;
    uStack_80 = 0;
    apvStack_90[0] = (void *)((uint)apvStack_90[0] & 0xffffff00);
    puStack_8._0_1_ = 3;
    if (0xf < uStack_34) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_48);
    }
    uStack_34 = 0xf;
    uStack_38 = 0;
    pvStack_48 = (void *)((uint)pvStack_48 & 0xffffff00);
  }
  pvVar5 = EvaluationEnvironment_getIntegerAsObject((void *)0x36);
  if (pvVar5 != (void *)0x0) {
    EvaluationEnvironment_getIntegerAsObject((void *)0x36);
    pbVar9 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             Card_getPropertyMap();
    uStack_34 = 0xf;
    uStack_38 = 0;
    pvStack_48 = (void *)((uint)pvStack_48 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_4c,pbVar9,0,0xffffffff);
    puStack_8._0_1_ = 0xc;
    uStack_7c = 0xf;
    uStack_80 = 0;
    apvStack_90[0] = (void *)((uint)apvStack_90[0] & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0xffffff6c,
               "#target3#",9);
    puStack_8._0_1_ = 0xd;
    FUN_01402480(&stack0xffffff6c,abStack_4c);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xc);
    if (0xf < uStack_7c) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_90[0]);
    }
    uStack_7c = 0xf;
    uStack_80 = 0;
    apvStack_90[0] = (void *)((uint)apvStack_90[0] & 0xffffff00);
    puStack_8._0_1_ = 3;
    if (0xf < uStack_34) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_48);
    }
    uStack_34 = 0xf;
    uStack_38 = 0;
    pvStack_48 = (void *)((uint)pvStack_48 & 0xffffff00);
  }
  pvVar5 = EvaluationEnvironment_getIntegerAsObject((void *)0x37);
  if (pvVar5 != (void *)0x0) {
    EvaluationEnvironment_getIntegerAsObject((void *)0x37);
    pbVar9 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             Card_getPropertyMap();
    uStack_34 = 0xf;
    uStack_38 = 0;
    pvStack_48 = (void *)((uint)pvStack_48 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_4c,pbVar9,0,0xffffffff);
    puStack_8._0_1_ = 0xe;
    uStack_7c = 0xf;
    uStack_80 = 0;
    apvStack_90[0] = (void *)((uint)apvStack_90[0] & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0xffffff6c,
               "#target4#",9);
    puStack_8._0_1_ = 0xf;
    FUN_01402480(&stack0xffffff6c,abStack_4c);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xe);
    if (0xf < uStack_7c) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_90[0]);
    }
    uStack_7c = 0xf;
    uStack_80 = 0;
    apvStack_90[0] = (void *)((uint)apvStack_90[0] & 0xffffff00);
    puStack_8._0_1_ = 3;
    if (0xf < uStack_34) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_48);
    }
    uStack_34 = 0xf;
    uStack_38 = 0;
    pvStack_48 = (void *)((uint)pvStack_48 & 0xffffff00);
  }
  cVar1 = ReturnValueMap_hasBooleanKey(0x24);
  if (cVar1 != '\0') {
    uVar10 = ReturnValueMap_getBoolean(0x24);
    EvaluationEnvironment_setForceReturn(uVar10);
  }
  cVar1 = ReturnValueMap_hasBooleanKey(0x29);
  if (cVar1 != '\0') {
    uVar2 = ReturnValueMap_getBoolean(0x29);
    *(undefined1 *)((int)param_1 + 0x161) = uVar2;
  }
  StateMachine_destroyReturnValueMap(uStack_68);
  EvaluationEnvironment_setDependentActionReturn(1);
  param_1[0x49] = (param_1[0x3f] == 6) + 1;
  uVar10 = (**(code **)(*param_1 + 0x124))();
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
  FUN_01300cd0();
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_10;
  return uVar10;
}

