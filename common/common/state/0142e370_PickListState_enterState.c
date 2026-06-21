// addr: 0x0142e370
// name: PickListState_enterState
// subsystem: common/common/state
// source (binary assert): common/common/state/PickListState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0142e96e) */
/* Setting prototype: uint PickListState_enterState(void * this) */

uint __fastcall PickListState_enterState(void *this)

{
  void *env;
  uint uVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  void *sourceEnv;
  void *pvVar6;
  undefined4 uVar7;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined4 *puStack_170;
  undefined1 auStack_16c [4];
  undefined4 *puStack_168;
  undefined4 *puStack_164;
  undefined4 uStack_160;
  void *pvStack_15c;
  undefined1 *puStack_158;
  undefined4 *puStack_154;
  undefined1 auStack_150 [4];
  int iStack_14c;
  undefined4 uStack_148;
  int iStack_140;
  void *pvStack_13c;
  int iStack_134;
  int iStack_130;
  uint uStack_128;
  undefined1 auStack_124 [148];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_90 [4];
  void *pvStack_8c;
  undefined4 uStack_7c;
  uint uStack_78;
  char acStack_74 [96];
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Enter-state handler for PickListState; consumes returnValueMap entries for
                       player/card/action/bounds/dialog text/property/options, evaluates dynamic
                       option lists, and prepares the pick-list UI state. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01695ecb;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&puStack_170;
  sourceEnv = (void *)(DAT_01b839d8 ^ (uint)&stack0xfffffe80);
  ExceptionList = &local_c;
  pcVar13 = "PickListState::enterState";
  pvVar6 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar6,pcVar13,sourceEnv);
  (**(code **)(*(int *)this + 0x4c))();
  pvVar6 = (void *)StateMachine_popReturnValueMap();
  pvStack_15c = pvVar6;
  if (pvVar6 == (void *)0x0) {
    FUN_012f5a60("returnValueMap","..\\common\\common\\state\\PickListState.cpp",0x42);
  }
  cVar3 = ReturnValueMap_hasIntegerKey(4);
  if (cVar3 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kPlayerReturn)",
                 "..\\common\\common\\state\\PickListState.cpp",0x44);
  }
  uVar7 = ReturnValueMap_getInteger(4);
  *(undefined4 *)((int)this + 0xf8) = uVar7;
  cVar3 = ReturnValueMap_hasIntegerKey(3);
  if (cVar3 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kCardPlayedReturn)",
                 "..\\common\\common\\state\\PickListState.cpp",0x47);
  }
  uVar7 = ReturnValueMap_getInteger(3);
  *(undefined4 *)((int)this + 0xfc) = uVar7;
  cVar3 = ReturnValueMap_hasIntegerKey(0x2a);
  if (cVar3 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kLowerBoundReturn)",
                 "..\\common\\common\\state\\PickListState.cpp",0x4a);
  }
  uVar7 = ReturnValueMap_getInteger(0x2a);
  *(undefined4 *)((int)this + 0x100) = uVar7;
  cVar3 = ReturnValueMap_hasIntegerKey(0x2b);
  if (cVar3 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kUpperBoundReturn)",
                 "..\\common\\common\\state\\PickListState.cpp",0x4d);
  }
  uVar7 = ReturnValueMap_getInteger(0x2b);
  *(undefined4 *)((int)this + 0x104) = uVar7;
  bVar4 = ValueData_clearIfPresent((void *)0x5);
  if (!bVar4) {
    FUN_012f5a60("returnValueMap->getValue(kActionReturn, mAction)",
                 "..\\common\\common\\state\\PickListState.cpp",0x50);
  }
  bVar4 = ValueData_isType3(&DAT_0000000d);
  if (!bVar4) {
    FUN_012f5a60("returnValueMap->hasStringKey(kMultiActionPhaseDialogTextReturn)",
                 "..\\common\\common\\state\\PickListState.cpp",0x52);
  }
  pbVar8 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           PickListState_getStringValueForEntry(abStack_90,0xd);
  uStack_4 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x11c),
             pbVar8,0,0xffffffff);
  uStack_4 = 0xffffffff;
  if (0xf < uStack_78) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_8c);
  }
  uStack_78 = 0xf;
  uStack_7c = 0;
  pvStack_8c = (void *)((uint)pvStack_8c & 0xffffff00);
  cVar3 = PointerVector_iteratorNotAtEnd(0x27);
  if (cVar3 == '\0') {
    FUN_012f5a60("returnValueMap->hasKey(kMultiActionPhaseDialogText2Return)",
                 "..\\common\\common\\state\\PickListState.cpp",0x55);
  }
  FUN_012fa910();
  uStack_4 = 1;
  ValueData_clearIfPresent((void *)0x27);
  if ((iStack_134 != 10) &&
     (FUN_012f5a60("mTypeID == kMessageTypeID",
                   "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                   ,0x159), iStack_134 != 10)) {
    iStack_130 = 0;
  }
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(iStack_130 + 4);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(iStack_130 + 8);
  MessageText_copyFrom(iStack_130 + 0xc);
  cVar3 = ReturnValueMap_hasBooleanKey(0x28);
  if (cVar3 == '\0') {
    FUN_012f5a60("returnValueMap->hasBooleanKey(kNotClosableReturn)",
                 "..\\common\\common\\state\\PickListState.cpp",0x5a);
  }
  uVar5 = ReturnValueMap_getBoolean(0x28);
  *(undefined1 *)((int)this + 0x138) = uVar5;
  cVar3 = ReturnValueMap_hasIntegerKey(0x2d);
  if (cVar3 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kPropertyKeyReturn)",
                 "..\\common\\common\\state\\PickListState.cpp",0x5d);
  }
  uVar7 = ReturnValueMap_getInteger(0x2d);
  *(undefined4 *)((int)this + 0x118) = uVar7;
  FUN_012fa910();
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  bVar4 = ValueData_clearIfPresent(&DAT_0000002c);
  if (!bVar4) {
    FUN_012f5a60("returnValueMap->getValue(kStringListReturn, stringList)",
                 "..\\common\\common\\state\\PickListState.cpp",0x61);
  }
  if (iStack_14c == 7) {
    StdVector28_assign(uStack_148);
  }
  else if (iStack_14c == 5) {
    puStack_168 = (undefined4 *)0x0;
    puStack_164 = (undefined4 *)0x0;
    uStack_160 = 0;
    uStack_4 = CONCAT31(uStack_4._1_3_,3);
    piVar11 = (int *)StateMachineState_getGame();
    (**(code **)(*piVar11 + 0x144))(auStack_16c);
    puStack_170 = puStack_164;
    if (puStack_164 < puStack_168) {
      FUN_00d83c2d();
    }
    puVar12 = puStack_168;
    if (puStack_164 < puStack_168) {
      FUN_00d83c2d();
    }
    puStack_158 = auStack_16c;
    while( true ) {
      puVar2 = puStack_158;
      puStack_154 = puVar12;
      if ((puStack_158 == (undefined1 *)0x0) || (puStack_158 != auStack_16c)) {
        FUN_00d83c2d();
      }
      if (puVar12 == puStack_170) break;
      if (puVar2 == (undefined1 *)0x0) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)(puVar2 + 8) <= puVar12) {
        FUN_00d83c2d();
      }
      env = (void *)*puVar12;
      FUN_012fa910();
      uStack_4._0_1_ = 4;
      EvaluationEnvironment_ctor();
      uStack_4._0_1_ = 5;
      EvaluationEnvironment_copyFrom(auStack_124,*(void **)((int)this + 0xe8),sourceEnv);
      EvaluationEnvironment_setCurrentTargetFromElement(auStack_124,env,sourceEnv);
      FUN_013815c0(2);
      uVar9 = CommandObjectList_evaluateToValueData(auStack_150,auStack_124);
      if ((char)uVar9 == '\x01') {
        if (iStack_140 == 2) {
          *(undefined1 *)((int)this + 0x148) = 1;
          _sprintf(acStack_74,"%d",pvStack_13c);
          pcVar13 = acStack_74;
          uStack_78 = 0xf;
          uStack_7c = 0;
          pvStack_8c = (void *)((uint)pvStack_8c & 0xffffff00);
          do {
            cVar3 = *pcVar13;
            pcVar13 = pcVar13 + 1;
          } while (cVar3 != '\0');
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    (abStack_90,acStack_74,(int)pcVar13 - (int)(acStack_74 + 1));
          uStack_4 = CONCAT31(uStack_4._1_3_,6);
          uVar9 = *(uint *)((int)this + 0x110);
          if (uVar9 < *(uint *)((int)this + 0x10c)) {
            FUN_00d83c2d();
          }
          uVar1 = *(uint *)((int)this + 0x10c);
          if (*(uint *)((int)this + 0x110) < uVar1) {
            FUN_00d83c2d();
          }
          uStack_128 = uVar1;
          uStack_128 = StdStringRange_find(uVar1,uVar9,abStack_90);
          uVar9 = *(uint *)((int)this + 0x110);
          if (uVar9 < *(uint *)((int)this + 0x10c)) {
            FUN_00d83c2d();
          }
          if ((void *)((int)this + 0x108) == (void *)0x0) {
            FUN_00d83c2d();
          }
          if (uStack_128 == uVar9) {
            StdVector28_pushBack((void *)((int)this + 0x108),abStack_90,sourceEnv);
          }
          uStack_4._0_1_ = 5;
          if (0xf < uStack_78) {
                    /* WARNING: Subroutine does not return */
            _free(pvStack_8c);
          }
          uStack_78 = 0xf;
          uStack_7c = 0;
          pvStack_8c = (void *)((uint)pvStack_8c & 0xffffff00);
          pvVar6 = pvStack_15c;
          puVar12 = puStack_154;
        }
        else {
          if (iStack_140 != 3) goto LAB_0142e8ea;
          StdVector28_pushBack((void *)((int)this + 0x108),pvStack_13c,sourceEnv);
        }
      }
      else {
LAB_0142e8ea:
        uVar7 = StateMachineState_getGame
                          ("Picklist: valueExpressionTree return %d unsupportedType",iStack_140);
        Game_logGeneralFormatted(uVar7);
      }
      uStack_4._0_1_ = 4;
      FUN_01385460();
      uStack_4 = CONCAT31(uStack_4._1_3_,3);
      FUN_01300cd0();
      if (*(undefined4 **)(puStack_158 + 8) <= puVar12) {
        FUN_00d83c2d();
      }
      puVar12 = puVar12 + 1;
    }
    puVar12 = *(undefined4 **)((int)this + 0x110);
    if (puVar12 < *(undefined4 **)((int)this + 0x10c)) {
      FUN_00d83c2d();
    }
    puStack_170 = *(undefined4 **)((int)this + 0x10c);
    if (*(undefined4 **)((int)this + 0x110) < puStack_170) {
      FUN_00d83c2d();
    }
    if (puStack_170 != puVar12) {
      FUN_0142e290(puStack_170,puVar12,0,0);
    }
    uStack_4 = CONCAT31(uStack_4._1_3_,2);
    if (puStack_168 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_168);
    }
    puStack_168 = (undefined4 *)0x0;
    puStack_164 = (undefined4 *)0x0;
    uStack_160 = 0;
  }
  else {
    FUN_012f5dc0("Picklist couldn\'t get type! %d",iStack_14c);
  }
  cVar3 = PointerVector_iteratorNotAtEnd(0x26);
  if (cVar3 == '\0') {
    FUN_012f5a60("returnValueMap->hasKey(kNoAutoActionReturn)",
                 "..\\common\\common\\state\\PickListState.cpp",0x8c);
  }
  cVar3 = ReturnValueMap_hasBooleanKey(0x26);
  if (cVar3 == '\0') {
    cVar3 = ReturnValueMap_hasIntegerKey(0x26);
    if (cVar3 == '\0') {
      FUN_012f5dc0("kNoAutoActionReturn not a valid type!");
    }
    else {
      iVar10 = ReturnValueMap_getInteger(0x26);
      if (iVar10 == 0) {
        *(undefined1 *)((int)this + 0x139) = 0;
      }
      else if (iVar10 == 1) {
        *(undefined1 *)((int)this + 0x139) = 1;
      }
      else if (iVar10 == 2) {
        *(undefined1 *)((int)this + 0x139) = 0;
        *(undefined1 *)((int)this + 0x149) = 1;
      }
    }
  }
  else {
    uVar5 = ReturnValueMap_getBoolean(0x26);
    *(undefined1 *)((int)this + 0x139) = uVar5;
  }
  StateMachine_destroyReturnValueMap(pvVar6);
  pvStack_15c = Mem_Alloc(0x14);
  uStack_4._0_1_ = 7;
  if (pvStack_15c == (void *)0x0) {
    pvVar6 = (void *)0x0;
  }
  else {
    pvVar6 = (void *)FUN_012f9eb0();
  }
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  FUN_012f8c70(0x78);
  StateMachineState_getGame();
  iVar10 = StateMachine_getCurrentState();
  DisplayActionBuilder_addIntArg(pvVar6,iVar10);
  DisplayActionBuilder_addIntArg(pvVar6,*(int *)((int)this + 0x100));
  DisplayActionBuilder_addIntArg(pvVar6,*(int *)((int)this + 0x104));
  DisplayActionBuilder_addStringArg(pvVar6,(void *)((int)this + 0x11c));
  DisplayActionBuilder_addCStringArg(pvVar6,"XXX: FIX ME!");
  DisplayActionBuilder_addBoolArg(pvVar6,*(bool *)((int)this + 0x138));
  DisplayActionBuilder_addVector28Arg(pvVar6,(void *)((int)this + 0x108));
  piVar11 = (int *)StateMachineState_getGame();
  (**(code **)(*piVar11 + 0x150))(*(undefined4 *)((int)this + 0xf8),pvVar6);
  local_c = (void *)CONCAT31(local_c._1_3_,1);
  FUN_01300cd0();
  local_c = (void *)0xffffffff;
  FUN_01300cd0();
  ExceptionList = pvStack_14;
  return 2;
}

