// addr: 0x01501ed0
// name: CommandObjectPlayCard_doCommand
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectPlayCard.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObjectPlayCard_doCommand(void * this) */

bool CommandObjectPlayCard_doCommand(void *this)

{
  char cVar1;
  undefined1 uVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  int iVar8;
  int *piVar9;
  int in_ECX;
  int key_;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int elementId_;
  int actionId_;
  int key__00;
  int elementId__00;
  undefined4 uVar10;
  TypeDescriptor *pTVar11;
  TypeDescriptor *pTVar12;
  undefined4 uVar13;
  undefined1 local_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Executes a play-card command: reads expected int/bool values, resolves
                       player/card/action data, sets play context flags + optional target, and
                       invokes the card play virtual method. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b474b;
  local_c = ExceptionList;
  pvVar3 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff4c);
  ExceptionList = &local_c;
  EvaluationEnvironment_ctor();
  local_4 = 0;
  pvVar4 = EvaluationEnvironment_getGame(this);
  EvaluationEnvironment_setGame(pvVar4);
  pvVar4 = ReturnValueMap_findValueData(*(void **)(in_ECX + 0x70),key_);
  if ((pvVar4 == (void *)0x0) || (iVar8 = extraout_EDX, *(int *)((int)pvVar4 + 4) != 2)) {
    FUN_012f5a60("playerValue && (playerValue->getType() == kIntegerTypeID)",
                 "..\\common\\common\\command\\CommandObjectPlayCard.cpp",0x62);
    iVar8 = extraout_EDX_00;
  }
  pvVar5 = ReturnValueMap_findValueData(*(void **)(in_ECX + 0x70),iVar8);
  if ((pvVar5 == (void *)0x0) || (iVar8 = extraout_EDX_01, *(int *)((int)pvVar5 + 4) != 2)) {
    FUN_012f5a60("cardPlayedValue && (cardPlayedValue->getType() == kIntegerTypeID)",
                 "..\\common\\common\\command\\CommandObjectPlayCard.cpp",100);
    iVar8 = extraout_EDX_02;
  }
  pvVar6 = ReturnValueMap_findValueData(*(void **)(in_ECX + 0x70),iVar8);
  if ((pvVar6 == (void *)0x0) || (iVar8 = extraout_EDX_03, *(int *)((int)pvVar6 + 4) != 2)) {
    FUN_012f5a60("actionValue && (actionValue->getType() == kIntegerTypeID)",
                 "..\\common\\common\\command\\CommandObjectPlayCard.cpp",0x66);
    iVar8 = extraout_EDX_04;
  }
  pvVar7 = ReturnValueMap_findValueData(*(void **)(in_ECX + 0x70),iVar8);
  if ((pvVar7 == (void *)0x0) || (*(int *)((int)pvVar7 + 4) != 1)) {
    FUN_012f5a60("dependentValue && (dependentValue->getType() == kBooleanTypeID)",
                 "..\\common\\common\\command\\CommandObjectPlayCard.cpp",0x68);
  }
  if (*(int *)((int)pvVar5 + 4) != 2) {
    FUN_012f5a60("mTypeID == kIntegerTypeID",
                 "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                 ,0x129);
  }
  uVar13 = 0;
  pTVar12 = &Card::RTTI_Type_Descriptor;
  pTVar11 = &PlayElement::RTTI_Type_Descriptor;
  uVar10 = 0;
  pvVar5 = EvaluationEnvironment_getGame(this);
  pvVar5 = find_play_element_in_maps(pvVar5,elementId_);
  pvVar5 = (void *)FUN_00d8d382(pvVar5,uVar10,pTVar11,pTVar12,uVar13);
  if ((*(int *)((int)pvVar4 + 4) == 2) ||
     (FUN_012f5a60("mTypeID == kIntegerTypeID",
                   "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                   ,0x129), *(int *)((int)pvVar4 + 4) == 2)) {
    iVar8 = *(int *)((int)pvVar4 + 8);
  }
  else {
    iVar8 = 0;
  }
  pvVar4 = EvaluationEnvironment_getGame(this);
  piVar9 = PlayArea_findPlayerElementById(pvVar4,iVar8);
  if (piVar9 == (int *)0x0) {
    local_4 = 0xffffffff;
    FUN_01385460();
    uVar2 = 1;
  }
  else {
    if ((*(int *)((int)pvVar6 + 4) == 2) ||
       (FUN_012f5a60("mTypeID == kIntegerTypeID",
                     "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                     ,0x129), *(int *)((int)pvVar6 + 4) == 2)) {
      uVar10 = *(undefined4 *)((int)pvVar6 + 8);
    }
    else {
      uVar10 = 0;
    }
    FUN_013815b0(piVar9);
    set_play_element_id_field(local_a0,pvVar5);
    pvVar4 = Card_getActionByID(pvVar5,actionId_);
    EvaluationEnvironment_setActionReturn(pvVar4);
    EvaluationEnvironment_setBooleanKey4(0);
    set_boolean_value_key_17(true);
    FUN_01381350(0);
    set_boolean_value_key_18(true);
    EvaluationEnvironment_setBooleanKey9(1);
    EvaluationEnvironment_setBooleanReturnValue(0x3c,true);
    EvaluationEnvironment_setBooleanReturnValue(0x3d,true);
    cVar1 = PointerVector_iteratorNotAtEnd(1);
    if (cVar1 != '\0') {
      pvVar4 = ReturnValueMap_findValueData(*(void **)(in_ECX + 0x70),key__00);
      if (((pvVar4 == (void *)0x0) || (*(int *)((int)pvVar4 + 4) != 2)) &&
         (FUN_012f5a60("target1Value && target1Value->getType() == kIntegerTypeID",
                       "..\\common\\common\\command\\CommandObjectPlayCard.cpp",0x7e),
         *(int *)((int)pvVar4 + 4) != 2)) {
        FUN_012f5a60("mTypeID == kIntegerTypeID",
                     "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                     ,0x129);
      }
      pvVar4 = EvaluationEnvironment_getGame(this);
      pvVar4 = find_play_element_in_maps(pvVar4,elementId__00);
      EvaluationEnvironment_setCurrentTargetFromElement(local_a0,pvVar4,pvVar3);
    }
    pvVar3 = EvaluationEnvironment_getAction(this);
    uVar2 = (**(code **)(*piVar9 + 0x58))(pvVar5,uVar10,local_a0);
    FUN_013815c0(pvVar3);
    local_4 = 0xffffffff;
    FUN_01385460();
  }
  ExceptionList = local_c;
  return (bool)uVar2;
}

