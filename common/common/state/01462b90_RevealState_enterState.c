// addr: 0x01462b90
// name: RevealState_enterState
// subsystem: common/common/rules
// source (binary assert): common/common/state/RevealState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x01462d8d) */

undefined4 __fastcall RevealState_enterState(int *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  bool bVar4;
  void *pvVar5;
  int iVar6;
  void *pvVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  undefined4 *puVar11;
  int extraout_EDX;
  int key_;
  int extraout_EDX_00;
  int key__00;
  int key__01;
  int key__02;
  undefined4 *puVar12;
  undefined8 uVar13;
  TypeDescriptor *pTVar14;
  TypeDescriptor *pTVar15;
  undefined4 uVar16;
  undefined1 *puVar17;
  void **item;
  char *pcVar18;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [4];
  undefined4 *puStack_10c;
  undefined4 *puStack_108;
  undefined4 uStack_104;
  void *apvStack_fc [3];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [20];
  int aiStack_cc [2];
  undefined1 auStack_c4 [8];
  undefined1 auStack_bc [156];
  void *pvStack_20;
  undefined4 uStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
                    /* Initializes a RevealState by resolving reveal parameters, selecting cards
                       from game/play area, computing reveal id/draw position/show-all/random flags,
                       and dispatching reveal-card commands. */
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_0169d744;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  (**(code **)(*param_1 + 0x4c))(DAT_01b839d8 ^ (uint)&stack0xfffffed8);
  EvaluationEnvironment_setDependentActionReturn(1);
  pvVar5 = (void *)StateMachine_popReturnValueMap();
  if (pvVar5 == (void *)0x0) {
    FUN_012f5a60(&DAT_018e3654,"..\\common\\common\\state\\RevealState.cpp",0x55);
  }
  cVar2 = ReturnValueMap_hasIntegerKey(4);
  if (cVar2 == '\0') {
    FUN_012f5a60("rvm->hasIntegerKey(kPlayerReturn)","..\\common\\common\\state\\RevealState.cpp",
                 0x57);
  }
  iVar6 = ReturnValueMap_getInteger(4);
  param_1[0x3e] = iVar6;
  pvVar7 = (void *)StateMachineState_getGame();
  pvVar7 = PlayArea_findPlayerElementById(pvVar7,iVar6);
  param_1[0x3f] = (int)pvVar7;
  cVar2 = PointerVector_iteratorNotAtEnd(0x14);
  iVar6 = extraout_EDX;
  if (cVar2 != '\0') {
    FUN_012fa910();
    uStack_c = 0;
    pvVar7 = ReturnValueMap_findValueData(pvVar5,key_);
    FUN_013010e0(pvVar7);
    FUN_01301590(param_1[0x3a]);
    if (((puStack_10c == (undefined4 *)0x1) ||
        (FUN_012f5a60("getTargets.isBooleanValue()","..\\common\\common\\state\\RevealState.cpp",
                      0x5f), puStack_10c == (undefined4 *)0x1)) ||
       (FUN_012f5a60("mTypeID == kBooleanTypeID",
                     "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                     ,0x12f), puStack_10c == (undefined4 *)0x1)) {
      uVar3 = puStack_108._0_1_;
    }
    else {
      uVar3 = 0;
    }
    *(undefined1 *)(param_1 + 0x4c) = uVar3;
    uStack_c = 0xffffffff;
    FUN_01300cd0();
    iVar6 = extraout_EDX_00;
  }
  if ((char)param_1[0x4c] != '\0') {
    pvVar7 = ReturnValueMap_findValueData(pvVar5,iVar6);
    if ((pvVar7 == (void *)0x0) || (*(int *)((int)pvVar7 + 4) != 5)) {
      FUN_012f5a60("value && value->isExpressionTreeValue()",
                   "..\\common\\common\\state\\RevealState.cpp",0x65);
    }
    FUN_013010e0(pvVar7);
  }
  cVar2 = ReturnValueMap_hasIntegerKey(0xf);
  if (cVar2 == '\0') {
    FUN_012f5a60("rvm->hasIntegerKey(kPlayAreaReturn)","..\\common\\common\\state\\RevealState.cpp",
                 0x69);
  }
  uVar13 = ReturnValueMap_getInteger(0xf);
  param_1[0x40] = (int)uVar13;
  pvVar7 = ReturnValueMap_findValueData(pvVar5,(int)((ulonglong)uVar13 >> 0x20));
  if (pvVar7 == (void *)0x0) {
    FUN_012f5a60(&PTR_LAB_018efc50,"..\\common\\common\\state\\RevealState.cpp",0x6d);
  }
  if (*(int *)((int)pvVar7 + 4) == 10) {
    iVar6 = *(int *)((int)pvVar7 + 8);
    param_1[0x16] = *(int *)(iVar6 + 4);
    param_1[0x17] = *(int *)(iVar6 + 8);
    MessageText_copyFrom(iVar6 + 0xc);
  }
  iVar6 = StateMachineState_getGame();
  set_pair_fields_4_8(param_1 + 0x1c,0x28be,*(uint *)(iVar6 + 0x20));
  cVar2 = PointerVector_iteratorNotAtEnd(0x15);
  if (cVar2 != '\0') {
    FUN_012fa910();
    uStack_c = 1;
    pvVar7 = ReturnValueMap_findValueData(pvVar5,key__00);
    FUN_013010e0(pvVar7);
    FUN_01301590(param_1[0x3a]);
    puVar11 = puStack_108;
    if (((puStack_10c != (undefined4 *)0x2) &&
        (FUN_012f5a60("numReturn.isIntegerValue()","..\\common\\common\\state\\RevealState.cpp",0x77
                     ), puVar11 = puStack_108, puStack_10c != (undefined4 *)0x2)) &&
       (FUN_012f5a60("mTypeID == kIntegerTypeID",
                     "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                     ,0x129), puVar11 = puStack_108, puStack_10c != (undefined4 *)0x2)) {
      puVar11 = (undefined4 *)0;
    }
    param_1[0x4b] = (int)puVar11;
    uStack_c = 0xffffffff;
    FUN_01300cd0();
  }
  cVar2 = PointerVector_iteratorNotAtEnd(0x13);
  if (cVar2 != '\0') {
    FUN_012fa910();
    uStack_c = 2;
    pvVar7 = ReturnValueMap_findValueData(pvVar5,key__01);
    FUN_013010e0(pvVar7);
    FUN_01301590(param_1[0x3a]);
    if (((puStack_10c != (undefined4 *)0x1) &&
        (FUN_012f5a60("random.isBooleanValue()","..\\common\\common\\state\\RevealState.cpp",0x7f),
        puStack_10c != (undefined4 *)0x1)) &&
       (FUN_012f5a60("mTypeID == kBooleanTypeID",
                     "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                     ,0x12f), puStack_10c != (undefined4 *)0x1)) {
      puStack_108._0_1_ = 0;
    }
    *(undefined1 *)(param_1 + 0x4a) = puStack_108._0_1_;
    uStack_c = 0xffffffff;
    FUN_01300cd0();
  }
  cVar2 = PointerVector_iteratorNotAtEnd(0x18);
  if (cVar2 != '\0') {
    cVar2 = ReturnValueMap_hasBooleanKey(0x18);
    if (cVar2 == '\0') {
      FUN_012f5a60("rvm->hasBooleanKey(kShowAllReturn)","..\\common\\common\\state\\RevealState.cpp"
                   ,0x84);
    }
    uVar3 = ReturnValueMap_getBoolean(0x18);
    *(undefined1 *)((int)param_1 + 0x131) = uVar3;
  }
  cVar2 = PointerVector_iteratorNotAtEnd(0x1b);
  if (cVar2 != '\0') {
    pvVar7 = ReturnValueMap_findValueData(pvVar5,key__02);
    if (*(int *)((int)pvVar7 + 4) != 5) {
      FUN_012f5a60("value->isExpressionTreeValue()","..\\common\\common\\state\\RevealState.cpp",
                   0x8a);
    }
    FUN_013010e0(pvVar7);
    *(undefined1 *)((int)param_1 + 0x132) = 1;
  }
  cVar2 = PointerVector_iteratorNotAtEnd(0x1c);
  if (cVar2 != '\0') {
    cVar2 = ReturnValueMap_hasIntegerKey(0x1c);
    if (cVar2 == '\0') {
      FUN_012f5a60("rvm->hasIntegerKey(kDrawPositionReturn)",
                   "..\\common\\common\\state\\RevealState.cpp",0x90);
    }
    iVar6 = ReturnValueMap_getInteger(0x1c);
    param_1[0x50] = iVar6;
  }
  cVar2 = PointerVector_iteratorNotAtEnd(0x24);
  if (cVar2 != '\0') {
    cVar2 = ReturnValueMap_hasBooleanKey(0x24);
    if (cVar2 == '\0') {
      FUN_012f5a60("rvm->hasBooleanKey(kForceReturn)","..\\common\\common\\state\\RevealState.cpp",
                   0x95);
    }
    uVar8 = ReturnValueMap_getBoolean(0x24);
    EvaluationEnvironment_setForceReturn(uVar8);
  }
  cVar2 = PointerVector_iteratorNotAtEnd(0x22);
  if (cVar2 != '\0') {
    pvVar7 = (void *)StateMachineState_getGame();
    iVar6 = Game_getField_1c8(pvVar7);
    uVar13 = StateMachineState_getGame(iVar6);
    bVar4 = IntToBoolMap_getValue((void *)uVar13,(int)((ulonglong)uVar13 >> 0x20));
    if (bVar4) {
      pvVar7 = (void *)StateMachineState_getGame();
      iVar6 = Game_getField_1c8(pvVar7);
      pcVar18 = "Got RevealID: %d";
      param_1[0x55] = iVar6;
      pvVar7 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar7,pcVar18,iVar6);
    }
  }
  cVar2 = PointerVector_iteratorNotAtEnd(0x25);
  if (cVar2 != '\0') {
    uVar3 = ReturnValueMap_getBoolean(0x25);
    *(undefined1 *)(param_1 + 0x56) = uVar3;
  }
  cVar2 = PointerVector_iteratorNotAtEnd(0x28);
  if (cVar2 != '\0') {
    cVar2 = ReturnValueMap_getBoolean(0x28);
    *(bool *)((int)param_1 + 0x159) = cVar2 == '\0';
  }
  cVar2 = PointerVector_iteratorNotAtEnd(0x26);
  if (cVar2 != '\0') {
    cVar2 = ReturnValueMap_getBoolean(0x26);
    *(bool *)((int)param_1 + 0x15a) = cVar2 == '\0';
  }
  StateMachine_destroyReturnValueMap(pvVar5);
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_c = 3;
  piVar9 = (int *)PlayElement_getGame();
  piVar9 = (int *)(**(code **)(*piVar9 + 0x48))(param_1[0x40],param_1[0x3a]);
  if (piVar9 == (int *)0x0) {
    piVar9 = (int *)StateMachineState_getGame();
    item = (void **)param_1[0x3a];
    (**(code **)(*piVar9 + 0x88))(param_1[0x40],apvStack_fc);
  }
  else {
    item = apvStack_fc;
    (**(code **)(*piVar9 + 0x34))();
  }
  pvVar5 = (void *)StateMachineState_getGame();
  bVar4 = Game_getFlag_14d(pvVar5);
  if (!bVar4) {
    param_1[0x46] = 4;
    uStack_18 = 0xffffffff;
    if (apvStack_fc[0] == (void *)0x0) {
      ExceptionList = pvStack_20;
      return 2;
    }
                    /* WARNING: Subroutine does not return */
    _free(apvStack_fc[0]);
  }
  iVar6 = param_1[0x4b];
  pcVar18 = "mNumShown: %d";
  pvVar5 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar5,pcVar18,iVar6);
  iVar6 = param_1[0x40];
  pcVar18 = "mPlayArea: %d";
  pvVar5 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar5,pcVar18,iVar6);
  puStack_10c = (undefined4 *)0x0;
  puStack_108 = (undefined4 *)0x0;
  uStack_104 = 0;
  uStack_18._0_1_ = 4;
  iVar6 = param_1[0x40];
  if (iVar6 == 1) {
    uVar16 = 0;
    pTVar15 = &Card::RTTI_Type_Descriptor;
    pTVar14 = &PlayElement::RTTI_Type_Descriptor;
    uVar8 = 0;
    pvVar5 = EvaluationEnvironment_resolveTarget((void *)param_1[0x3a]);
    iVar6 = FUN_00d8d382(pvVar5,uVar8,pTVar14,pTVar15,uVar16);
    if (iVar6 != 0) {
      PointerVector_pushBack(auStack_110,&stack0xfffffedc,item);
    }
  }
  else if (iVar6 == 2) {
    uVar16 = 0;
    pTVar15 = &Card::RTTI_Type_Descriptor;
    pTVar14 = &PlayElement::RTTI_Type_Descriptor;
    uVar8 = 0;
    pvVar5 = EvaluationEnvironment_resolveTarget2((void *)param_1[0x3a]);
    iVar6 = FUN_00d8d382(pvVar5,uVar8,pTVar14,pTVar15,uVar16);
    if (iVar6 != 0) {
      PointerVector_pushBack(auStack_110,&stack0xfffffedc,item);
    }
  }
  else if (iVar6 == 0x11) {
    pvVar5 = EvaluationEnvironment_getOriginCard((void *)param_1[0x3a]);
    if (pvVar5 != (void *)0x0) {
      EvaluationEnvironment_getOriginCard((void *)param_1[0x3a]);
      PointerVector_pushBack(auStack_110,&stack0xfffffedc,item);
    }
  }
  else if (*(char *)((int)param_1 + 0x132) == '\0') {
    if (param_1[0x4b] == 0) {
      pcVar18 = "mNumShown is zero!";
      pvVar5 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar5,pcVar18,item);
      piVar9 = (int *)PlayElement_getGame();
      iVar6 = param_1[0x40];
      piVar9 = (int *)(**(code **)(*piVar9 + 0x48))(iVar6,param_1[0x3a]);
      if (piVar9 == (int *)0x0) {
        pcVar18 = "getting cards from game";
        pvVar5 = (void *)StateMachineState_getGame();
        Game_logGeneral(pvVar5,pcVar18,iVar6);
        piVar9 = (int *)StateMachineState_getGame();
        (**(code **)(*piVar9 + 0x88))(param_1[0x40],auStack_118,param_1[0x3a]);
      }
      else {
        pcVar18 = "getting cards from play area";
        pvVar5 = (void *)StateMachineState_getGame();
        Game_logGeneral(pvVar5,pcVar18,iVar6);
        (**(code **)(*piVar9 + 0x34))(auStack_118);
      }
      if (puStack_10c == (undefined4 *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = (int)puStack_108 - (int)puStack_10c >> 2;
      }
      pcVar18 = "pileCards size: %d";
      pvVar5 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar5,pcVar18,iVar6);
    }
    else if ((char)param_1[0x4a] == '\0') {
      if (param_1[0x50] == 1) {
        piVar9 = (int *)PlayElement_getGame();
        iVar6 = param_1[0x4b];
        puVar17 = auStack_110;
        (**(code **)(*piVar9 + 0x48))(param_1[0x40],param_1[0x3a],iVar6,puVar17);
        PlayElement_collectCards(iVar6,puVar17);
      }
      else {
        piVar9 = (int *)PlayElement_getGame();
        pvVar5 = (void *)param_1[0x4b];
        puVar17 = auStack_110;
        pvVar7 = (void *)(**(code **)(*piVar9 + 0x48))(param_1[0x40],param_1[0x3a]);
        copyVirtualResultsReverse(pvVar7,pvVar5,(int)puVar17);
      }
    }
    else {
      piVar9 = (int *)PlayElement_getGame();
      iVar6 = param_1[0x4b];
      puVar17 = auStack_110;
      (**(code **)(*piVar9 + 0x48))(param_1[0x40],param_1[0x3a],iVar6,puVar17);
      FUN_0139f170(iVar6,puVar17);
    }
  }
  else {
    if (param_1[0x4e] != 5) {
      FUN_012f5a60("mUntilQuery.isExpressionTreeValue()",
                   "..\\common\\common\\state\\RevealState.cpp",0xcc);
    }
    EvaluationEnvironment_ctor();
    uStack_18._0_1_ = 5;
    EvaluationEnvironment_copyFrom(auStack_bc,(void *)param_1[0x3a],item);
    EvaluationEnvironment_setBooleanKey4(0);
    FUN_01381350(0);
    piVar9 = (int *)PlayElement_getGame();
    uVar8 = (**(code **)(*piVar9 + 0x48))
                      (param_1[0x40],param_1[0x3a],0,&PlayArea::RTTI_Type_Descriptor,
                       &PilePlayArea::RTTI_Type_Descriptor,0);
    piVar9 = (int *)FUN_00d8d382(uVar8);
    if (piVar9 != (int *)0x0) {
      uStack_ec = 0;
      uStack_e8 = 0;
      uStack_e4 = 0;
      uStack_18 = CONCAT31(uStack_18._1_3_,6);
      (**(code **)(*piVar9 + 0x34))(&uStack_f0);
      if (param_1[0x50] == 1) {
        FUN_01258ec0(auStack_e0);
      }
      uVar8 = FUN_01258ef0(auStack_e0);
      cVar2 = FUN_012586d0(uVar8);
      if (cVar2 != '\0') {
        puVar11 = (undefined4 *)FUN_01258670();
        EvaluationEnvironment_setCurrentTargetFromElement(auStack_bc,(void *)*puVar11,item);
        FUN_012fa910();
        uStack_18 = CONCAT31(uStack_18._1_3_,7);
        uVar10 = CommandObjectList_evaluateToValueData(param_1 + 0x4d,auStack_bc);
        cVar2 = (char)uVar10;
        while (cVar2 == '\0') {
          puVar11 = (undefined4 *)FUN_01258ec0(auStack_e0);
          uVar8 = FUN_01258670();
          FUN_012619f0(auStack_c4,*puVar11,puVar11[1],uVar8);
          if (param_1[0x50] == 1) {
            PointerVectorIterator_postIncrement(&stack0xfffffedc,aiStack_cc,(int *)0x0);
          }
          uVar8 = FUN_01258ef0(&stack0xfffffee4);
          cVar2 = FUN_01257b50(uVar8);
          if (cVar2 != '\0') break;
          puVar11 = (undefined4 *)FUN_01258670();
          EvaluationEnvironment_setCurrentTargetFromElement(auStack_bc,(void *)*puVar11,item);
          uVar10 = CommandObjectList_evaluateToValueData(param_1 + 0x4d,auStack_bc);
          cVar2 = (char)uVar10;
        }
        uVar8 = FUN_01258ef0(&stack0xfffffee4);
        cVar2 = FUN_012586d0(uVar8);
        if (cVar2 != '\0') {
          pvVar5 = (void *)FUN_01258670();
          PointerVector_pushBack(auStack_110,pvVar5,item);
        }
        uStack_18 = CONCAT31(uStack_18._1_3_,6);
        FUN_01300cd0();
      }
      uStack_18._0_1_ = 5;
      STLVector_int_clear(&uStack_f0);
    }
    uStack_18._0_1_ = 4;
    FUN_01385460();
  }
  puVar11 = puStack_108;
  if (puStack_108 < puStack_10c) {
    FUN_00d83c2d();
  }
  puVar12 = puStack_10c;
  if (puStack_108 < puStack_10c) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x110) {
      FUN_00d83c2d();
    }
    if (puVar12 == puVar11) break;
    if (&stack0x00000000 == (undefined1 *)0x110) {
      FUN_00d83c2d();
    }
    if (puStack_108 <= puVar12) {
      FUN_00d83c2d();
    }
    uVar8 = *puVar12;
    piVar9 = (int *)StateMachineState_getGame();
    (**(code **)(*piVar9 + 0x104))(0,uVar8);
    if (puStack_108 <= puVar12) {
      FUN_00d83c2d();
    }
    puVar12 = puVar12 + 1;
  }
  pvVar5 = Mem_Alloc(0x34);
  uStack_18._0_1_ = 8;
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)0x0;
  }
  else {
    uVar8 = StateMachineState_getGame();
    pvVar5 = GameCommand_RevealCards_ctorWithContext(pvVar5,uVar8);
  }
  uStack_18._0_1_ = 4;
  PlayElementVector_collectIds(pvVar5,auStack_110);
  ValueDataList_assign(param_1 + 0x51,auStack_110);
  iVar6 = 0;
  pvVar7 = (void *)StateMachineState_getGame();
  Game_dispatchCommandToPlayer(pvVar7,iVar6,pvVar5);
  pvVar5 = Mem_Alloc(0x3c);
  uStack_18._0_1_ = 9;
  if (pvVar5 == (void *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    puVar11 = (undefined4 *)StateMachineState_getGame();
    puVar11 = GameCommand_SynchPoint_ctor(pvVar5,puVar11,(int *)item);
  }
  uStack_18._0_1_ = 4;
  iVar6 = 0;
  pvVar5 = (void *)StateMachineState_getGame();
  Game_dispatchCommandToPlayer(pvVar5,iVar6,puVar11);
  pcVar1 = *(code **)(*param_1 + 0x3c);
  param_1[0x46] = 4;
  uVar8 = (*pcVar1)();
  uStack_18 = CONCAT31(uStack_18._1_3_,3);
  if (puStack_10c == (undefined4 *)0x0) {
    puStack_10c = (undefined4 *)0x0;
    puStack_108 = (undefined4 *)0x0;
    uStack_104 = 0;
    uStack_18 = 0xffffffff;
    if (apvStack_fc[0] == (void *)0x0) {
      ExceptionList = pvStack_20;
      return uVar8;
    }
                    /* WARNING: Subroutine does not return */
    _free(apvStack_fc[0]);
  }
                    /* WARNING: Subroutine does not return */
  _free(puStack_10c);
}

