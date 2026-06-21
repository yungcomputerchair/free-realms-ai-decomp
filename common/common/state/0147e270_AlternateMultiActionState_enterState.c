// addr: 0x0147e270
// name: AlternateMultiActionState_enterState
// subsystem: common/rules/state
// source (binary assert): common/common/state/AlternateMultiActionState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall AlternateMultiActionState_enterState(int *param_1)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  undefined4 uVar7;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int iVar8;
  undefined8 uVar9;
  char *fmt;
  int iStack_34;
  int iStack_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_2c [4];
  void *pvStack_28;
  undefined4 uStack_18;
  uint uStack_14;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* AlternateMultiActionState enter handler: reads
                       player/card/action/command-object returns, validates targets and phase dialog
                       messages, updates card title text, handles force flag, and advances to the
                       next phase. Evidence is AlternateMultiActionState::enterState and many
                       AlternateMultiActionState.cpp asserts. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016a0578;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffbc;
  ExceptionList = &local_c;
  fmt = "AlternateMultiActionState::enterState";
  pvVar3 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar3,fmt,uVar2);
  (**(code **)(*param_1 + 0x4c))();
  pvVar3 = (void *)StateMachine_popReturnValueMap();
  if (pvVar3 == (void *)0x0) {
    FUN_012f5a60("returnValueMap","..\\common\\common\\state\\AlternateMultiActionState.cpp",0x2d);
  }
  cVar1 = ReturnValueMap_hasIntegerKey(4);
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kPlayerReturn)",
                 "..\\common\\common\\state\\AlternateMultiActionState.cpp",0x2f);
  }
  iVar4 = ReturnValueMap_getInteger(4);
  param_1[0x40] = iVar4;
  pvVar5 = (void *)StateMachineState_getGame();
  pvVar5 = PlayArea_findPlayerElementById(pvVar5,iVar4);
  param_1[0x3e] = (int)pvVar5;
  piVar6 = (int *)StateMachineState_getCurrentTurn();
  (**(code **)(*piVar6 + 0x48))(param_1[0x3e]);
  cVar1 = ReturnValueMap_hasIntegerKey(3);
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kCardPlayedReturn)",
                 "..\\common\\common\\state\\AlternateMultiActionState.cpp",0x36);
  }
  iVar4 = ReturnValueMap_getInteger(3);
  param_1[0x41] = iVar4;
  cVar1 = ReturnValueMap_hasIntegerKey(5);
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kActionReturn)",
                 "..\\common\\common\\state\\AlternateMultiActionState.cpp",0x39);
  }
  iVar4 = ReturnValueMap_getInteger(5);
  param_1[0x42] = iVar4;
  cVar1 = ReturnValueMap_hasIntegerKey(0xb);
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kMultiActionCommandObjectReturn)",
                 "..\\common\\common\\state\\AlternateMultiActionState.cpp",0x3c);
  }
  uVar9 = ReturnValueMap_getInteger(0xb);
  iVar4 = (int)((ulonglong)uVar9 >> 0x20);
  iVar8 = (int)uVar9;
  param_1[0x3f] = iVar8;
  if ((iVar8 == 3) || (iVar8 == 6)) {
    pvVar5 = ReturnValueMap_findValueData(pvVar3,iVar4);
    if ((pvVar5 == (void *)0x0) || (*(int *)((int)pvVar5 + 4) != 5)) {
      FUN_012f5a60("value && value->isExpressionTreeValue()",
                   "..\\common\\common\\state\\AlternateMultiActionState.cpp",0x43);
    }
    FUN_013010e0(pvVar5);
    iVar4 = extraout_EDX;
  }
  if (param_1[0x3f] == 4) {
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  pvVar5 = ReturnValueMap_findValueData(pvVar3,iVar4);
  if (pvVar5 == (void *)0x0) {
    FUN_012f5a60(&PTR_DAT_018f4e9c,"..\\common\\common\\state\\AlternateMultiActionState.cpp",0x4c);
  }
  FUN_013010e0(pvVar5);
  iVar4 = extraout_EDX_00;
  if (param_1[0x47] != 8) {
    FUN_012f5a60("mTargets.isValueDataListValue()",
                 "..\\common\\common\\state\\AlternateMultiActionState.cpp",0x4e);
    iVar4 = extraout_EDX_01;
  }
  if ((param_1[0x47] == 8) ||
     (FUN_012f5a60("mTypeID == kValueDataListTypeID",
                   "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                   ,0x14d), iVar4 = extraout_EDX_02, param_1[0x47] == 8)) {
    iVar8 = param_1[0x48];
  }
  else {
    iVar8 = 0;
  }
  if ((*(int *)(iVar8 + 4) == 0) || (*(int *)(iVar8 + 8) - *(int *)(iVar8 + 4) >> 2 != 2)) {
    FUN_012f5a60("mTargets.getValueAsValueDataList()->size() == 2",
                 "..\\common\\common\\state\\AlternateMultiActionState.cpp",0x4f);
    iVar4 = extraout_EDX_03;
  }
  pvVar5 = ReturnValueMap_findValueData(pvVar3,iVar4);
  if (pvVar5 == (void *)0x0) {
    FUN_012f5a60(&PTR_LAB_018efc50,"..\\common\\common\\state\\AlternateMultiActionState.cpp",0x52);
  }
  if (*(int *)((int)pvVar5 + 4) != 10) {
    FUN_012f5a60("pdt->isMessageValue()","..\\common\\common\\state\\AlternateMultiActionState.cpp",
                 0x53);
  }
  if ((*(int *)((int)pvVar5 + 4) == 10) ||
     (FUN_012f5a60("mTypeID == kMessageTypeID",
                   "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                   ,0x159), *(int *)((int)pvVar5 + 4) == 10)) {
    iVar4 = *(int *)((int)pvVar5 + 8);
  }
  else {
    iVar4 = 0;
  }
  param_1[0x16] = *(int *)(iVar4 + 4);
  param_1[0x17] = *(int *)(iVar4 + 8);
  MessageText_copyFrom(iVar4 + 0xc);
  uVar9 = StateMachineState_getGame
                    (param_1[0x41],0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,
                     0);
  pvVar5 = find_play_element_in_maps((void *)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  iVar4 = FUN_00d8d382(pvVar5);
  if (iVar4 != 0) {
    uStack_14 = 0xf;
    uStack_18 = 0;
    pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_2c,"#title#",7);
    puStack_8 = (undefined1 *)0x0;
    uVar7 = Card_getPropertyMap();
    FUN_01402480(abStack_2c,uVar7);
    puStack_8 = (undefined1 *)0xffffffff;
    if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28);
    }
    uStack_14 = 0xf;
    uStack_18 = 0;
    pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
  }
  cVar1 = PointerVector_iteratorNotAtEnd(0x27);
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasKey(kMultiActionPhaseDialogText2Return)",
                 "..\\common\\common\\state\\AlternateMultiActionState.cpp",0x5f);
  }
  FUN_012fa910();
  puStack_8 = (undefined1 *)0x1;
  ValueData_clearIfPresent((void *)0x27);
  if ((iStack_34 != 10) &&
     (FUN_012f5a60("mTypeID == kMessageTypeID",
                   "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                   ,0x159), iStack_34 != 10)) {
    iStack_30 = 0;
  }
  param_1[0x5f] = *(int *)(iStack_30 + 4);
  param_1[0x60] = *(int *)(iStack_30 + 8);
  MessageText_copyFrom(iStack_30 + 0xc);
  if (iVar4 != 0) {
    uStack_14 = 0xf;
    uStack_18 = 0;
    pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_2c,"#title#",7);
    puStack_8._0_1_ = 2;
    uVar7 = Card_getPropertyMap();
    FUN_01402480(abStack_2c,uVar7);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
    if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28);
    }
    uStack_14 = 0xf;
    uStack_18 = 0;
    pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
  }
  cVar1 = PointerVector_iteratorNotAtEnd(0x24);
  if (cVar1 != '\0') {
    cVar1 = ReturnValueMap_hasBooleanKey(0x24);
    if (cVar1 == '\0') {
      FUN_012f5a60("returnValueMap->hasBooleanKey(kForceReturn)",
                   "..\\common\\common\\state\\AlternateMultiActionState.cpp",0x6d);
    }
    uVar7 = ReturnValueMap_getBoolean(0x24);
    EvaluationEnvironment_setForceReturn(uVar7);
  }
  EvaluationEnvironment_setDependentActionReturn(1);
  StateMachine_destroyReturnValueMap(pvVar3);
  param_1[0x49] = (param_1[0x3f] == 6) + 1;
  uVar7 = (**(code **)(*param_1 + 0x124))();
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_01300cd0();
  ExceptionList = pvStack_10;
  return uVar7;
}

