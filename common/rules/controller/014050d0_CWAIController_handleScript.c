// addr: 0x014050d0
// name: CWAIController_handleScript
// subsystem: common/rules/controller
// source (binary assert): common/rules/controller/cwaicontroller.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool CWAIController_handleScript(void * this) */

bool __fastcall CWAIController_handleScript(void *this)

{
  undefined4 *puVar1;
  rsize_t _DstSize;
  undefined1 *puVar2;
  char cVar3;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  uint extraout_EDX;
  undefined4 extraout_EDX_00;
  void *outVector;
  undefined4 uVar12;
  longlong lVar13;
  undefined4 uVar14;
  TypeDescriptor *pTVar15;
  TypeDescriptor *pTVar16;
  undefined4 uVar17;
  undefined4 uStack_184;
  int iStack_180;
  undefined1 auStack_17c [4];
  undefined4 *puStack_178;
  undefined4 *puStack_174;
  undefined4 uStack_170;
  undefined1 local_16c [4];
  int iStack_168;
  int iStack_164;
  undefined1 *puStack_160;
  undefined4 uStack_15c;
  undefined4 *puStack_158;
  int iStack_150;
  undefined4 uStack_14c;
  int iStack_144;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [156];
  undefined4 uStack_54;
  void *pvStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  uint uStack_3c;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  uint uStack_c;
  
                    /* Handles the next AI script step, recursing through expression-tree steps and
                       dispatching static actions through the current state machine. Evidence
                       includes log/assert strings 'CWAIController::handleScript %d', 'Got
                       ExpressionTree', 'Got static action %s', and cwaicontroller.cpp. */
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_0169130e;
  local_14 = ExceptionList;
  local_1c = DAT_01b839d8 ^ (uint)&uStack_184;
  uVar6 = DAT_01b839d8 ^ (uint)&stack0xfffffe70;
  ExceptionList = &local_14;
  CWAIController_debugLog(this,"CWAIController::handleScript %d",*(undefined4 *)((int)this + 0x28));
  Game_logGeneral(*(void **)((int)this + 0x10),"CWAIController::handleScript %d",
                  *(undefined4 *)((int)this + 0x28));
  if (*(int *)((int)this + 0x1c) == 0) {
    FUN_012f5a60("this->aiValues","..\\common\\rules\\controller\\cwaicontroller.cpp",0x23b);
  }
  FUN_012fa910();
  uStack_c = 0;
  FUN_013111d0(*(undefined4 *)((int)this + 0x28),local_16c);
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + 1;
  if (iStack_168 != 8) {
    if (iStack_168 == 5) {
      Game_logGeneral(*(void **)((int)this + 0x10),"Got ExpressionTree",uVar6);
      EvaluationEnvironment_ctor();
      uStack_c._0_1_ = 10;
      EvaluationEnvironment_setGame(*(undefined4 *)((int)this + 0x10));
      pvVar7 = PlayArea_findPlayerElementById
                         (*(void **)((int)this + 0x10),*(int *)((int)this + 0xc));
      FUN_013815b0(pvVar7);
      pvVar7 = EvaluationEnvironment_getMember14(auStack_f0);
      pvVar7 = (void *)unknown_getField30(pvVar7);
      set_play_element_id_field(auStack_f0,pvVar7);
      FUN_013815c0(2);
      FUN_012fa910();
      uStack_c._0_1_ = 0xb;
      CommandObjectList_evaluateToValueData(local_16c,auStack_f0);
      PlayElementList_collectCommandObjects(auStack_f0,outVector);
      uStack_c = CONCAT31(uStack_c._1_3_,0xc);
      puStack_158 = puStack_174;
      if (puStack_174 < puStack_178) {
        FUN_00d83c2d();
      }
      puVar10 = puStack_178;
      if (puStack_174 < puStack_178) {
        FUN_00d83c2d();
      }
      puStack_160 = auStack_17c;
      while( true ) {
        puVar2 = puStack_160;
        if ((puStack_160 == (undefined1 *)0x0) || (puStack_160 != auStack_17c)) {
          FUN_00d83c2d();
        }
        if (puVar10 == puStack_158) break;
        if (puVar2 == (undefined1 *)0x0) {
          FUN_00d83c2d();
        }
        if (*(undefined4 **)(puVar2 + 8) <= puVar10) {
          FUN_00d83c2d();
        }
        piVar11 = (int *)*puVar10;
        CommandObjectList_ctor(&uStack_54);
        uStack_c._0_1_ = 0xd;
        (**(code **)(*piVar11 + 0x44))(&uStack_54);
        uStack_c = CONCAT31(uStack_c._1_3_,0xc);
        CommandObjectList_dtor(&uStack_54);
        if (*(undefined4 **)(puStack_160 + 8) <= puVar10) {
          FUN_00d83c2d();
        }
        puVar10 = puVar10 + 1;
      }
      uVar4 = CWAIController_handleScript(this);
      uStack_c = CONCAT31(uStack_c._1_3_,0xb);
      if (puStack_178 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_178);
      }
      puStack_178 = (undefined4 *)0x0;
      puStack_174 = (undefined4 *)0x0;
      uStack_170 = 0;
      uStack_c._0_1_ = 10;
      FUN_01300cd0();
      uStack_c = (uint)uStack_c._1_3_ << 8;
      FUN_01385460();
    }
    else {
      if (iStack_168 == 2) {
        bVar5 = ValueData_containsInt(local_16c,-100);
        if (bVar5) {
          *(undefined1 *)((int)this + 0x25) = 1;
          uStack_c = 0xffffffff;
          FUN_01300cd0();
          ExceptionList = local_14;
          return true;
        }
        uStack_c = 0xffffffff;
        FUN_01300cd0();
        ExceptionList = local_14;
        return false;
      }
      Game_logGeneral(*(void **)((int)this + 0x10),"Couldn\'t get scriptStep!",uVar6);
      uVar4 = (**(code **)(**(int **)((int)this + 0x10) + 0xe4))
                        (*(undefined4 *)((int)this + 0xc),1,0);
    }
    goto LAB_01405973;
  }
  pvVar7 = ValueData_toString(local_16c,&uStack_54);
  uStack_c._0_1_ = 1;
  if (*(uint *)((int)pvVar7 + 0x18) < 0x10) {
    iVar8 = (int)pvVar7 + 4;
  }
  else {
    iVar8 = *(int *)((int)pvVar7 + 4);
  }
  Game_logGeneral(*(void **)((int)this + 0x10),"Got static action %s",iVar8);
  uStack_c = (uint)uStack_c._1_3_ << 8;
  if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_50);
  }
  uStack_3c = 0xf;
  uStack_40 = 0;
  pvStack_50 = (void *)((uint)pvStack_50 & 0xffffff00);
  if ((iStack_168 == 8) ||
     (FUN_012f5a60("mTypeID == kValueDataListTypeID",
                   "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                   ,0x14d), iVar8 = 0, iStack_168 == 8)) {
    iVar8 = iStack_164;
  }
  if ((*(int *)(iVar8 + 4) == 0) || ((uint)(*(int *)(iVar8 + 8) - *(int *)(iVar8 + 4) >> 2) < 2)) {
    FUN_012f5a60("valList->size() > 1","..\\common\\rules\\controller\\cwaicontroller.cpp",0x242);
  }
  puVar1 = *(undefined4 **)(iVar8 + 4);
  puVar10 = *(undefined4 **)(iVar8 + 8);
  if (puVar10 < puVar1) {
    FUN_00d83c2d();
    puVar10 = *(undefined4 **)(iVar8 + 8);
  }
  if (puVar10 <= puVar1) {
    FUN_00d83c2d();
  }
  ValueData_ctor(*puVar1);
  uStack_c = CONCAT31(uStack_c._1_3_,2);
  pvVar7 = *(void **)(iVar8 + 4);
  if (*(void **)(iVar8 + 8) < pvVar7) {
    FUN_00d83c2d();
  }
  iVar9 = *(int *)(iVar8 + 8) - ((int)pvVar7 + 4) >> 2;
  if (0 < iVar9) {
    _DstSize = iVar9 * 4;
    _memmove_s(pvVar7,_DstSize,(void *)((int)pvVar7 + 4),_DstSize);
  }
  *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + -4;
  uVar12 = uStack_14c;
  if (((iStack_150 != 2) &&
      (FUN_012f5a60("actionTypeData.isIntegerValue()",
                    "..\\common\\rules\\controller\\cwaicontroller.cpp",0x245), uVar12 = uStack_14c,
      iStack_150 != 2)) &&
     (FUN_012f5a60("mTypeID == kIntegerTypeID",
                   "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                   ,0x129), uVar12 = uStack_14c, iStack_150 != 2)) {
    uVar12 = 0;
  }
  switch(uVar12) {
  case 1:
    puVar10 = (undefined4 *)FUN_014045d0();
    ValueData_ctor(*puVar10);
    uStack_c = CONCAT31(uStack_c._1_3_,6);
    puVar10 = (undefined4 *)FUN_012fbda0(auStack_128);
    FUN_014045f0(auStack_130,*puVar10,puVar10[1]);
    uStack_184 = *(undefined4 *)((int)this + 0xc);
    if (puStack_178 != (undefined4 *)0x2) goto LAB_014055af;
LAB_014055a4:
    iStack_180 = 0;
    iStack_180 = FUN_0123c340();
    break;
  default:
    pvVar7 = this;
    CWAIController_debugLog(this,"Couldn\'t get input type.",uVar6);
    Game_logGeneral(*(void **)((int)this + 0x10),"Couldn\'t get input type.",pvVar7);
    uVar4 = CWAIController_handleScript(this);
    uStack_c = uStack_c & 0xffffff00;
    FUN_01300cd0();
    goto LAB_01405973;
  case 4:
    puVar10 = (undefined4 *)FUN_014045d0();
    ValueData_ctor(*puVar10);
    uStack_c._0_1_ = 3;
    puVar10 = (undefined4 *)FUN_012fbda0(auStack_120);
    FUN_014045f0(&puStack_160,*puVar10,puVar10[1]);
    puVar10 = (undefined4 *)FUN_014045d0();
    ValueData_ctor(*puVar10);
    uStack_c = CONCAT31(uStack_c._1_3_,4);
    puVar10 = (undefined4 *)FUN_012fbda0(auStack_118);
    FUN_014045f0(&puStack_160,*puVar10,puVar10[1]);
    uStack_13c = *(undefined4 *)((int)this + 0xc);
    uStack_138 = 0;
    lVar13 = (ulonglong)extraout_EDX << 0x20;
    uStack_134 = 0;
    if (puStack_178 == (undefined4 *)0x2) {
      lVar13 = FUN_0123c340();
    }
    else if (puStack_178 == (undefined4 *)0x3) {
      pvVar7 = (void *)FUN_0123c310();
      iVar8 = Game_findNamedEntryValue(*(void **)((int)this + 0x10),pvVar7);
      lVar13 = CONCAT44(extraout_EDX_00,iVar8);
    }
    uStack_138 = (undefined4)lVar13;
    if (iStack_144 == 2) {
      uVar17 = 0;
      pTVar16 = &Card::RTTI_Type_Descriptor;
      pTVar15 = &PlayElement::RTTI_Type_Descriptor;
      uVar14 = 0;
      pvVar7 = find_play_element_in_maps
                         (*(void **)((int)this + 0x10),(int)((ulonglong)lVar13 >> 0x20));
      piVar11 = (int *)FUN_00d8d382(pvVar7,uVar14,pTVar15,pTVar16,uVar17);
      if (piVar11 != (int *)0x0) {
        pvStack_50 = (void *)0x0;
        uStack_4c = 0;
        uStack_48 = 0;
        uStack_c = CONCAT31(uStack_c._1_3_,5);
        (**(code **)(*piVar11 + 200))(&uStack_54);
        puVar10 = (undefined4 *)FUN_01258f50(auStack_110);
        puStack_160 = (undefined1 *)*puVar10;
        uStack_15c = puVar10[1];
        puVar10 = (undefined4 *)FUN_01258f20(auStack_f8);
        uStack_184 = *puVar10;
        iStack_180 = puVar10[1];
        cVar3 = FUN_01258760(&puStack_160);
        while (cVar3 != '\0') {
          puStack_158 = (undefined4 *)FUN_01257b90();
          puStack_158 = (undefined4 *)*puStack_158;
          uVar14 = FUN_01321f20();
          iVar8 = PackedActionId_getHighBits(uVar14);
          iVar9 = FUN_0123c340();
          if (iVar8 == iVar9) {
            uStack_134 = FUN_01321f20();
            break;
          }
          FUN_0138c550(auStack_130,0);
          cVar3 = FUN_01258760(&puStack_160);
        }
        uStack_c = CONCAT31(uStack_c._1_3_,4);
        FUN_012591b0();
      }
    }
    pvVar7 = Game_getCurrentTurn(*(void **)((int)this + 0x10));
    piVar11 = GameTurn_getCurrentStateMachine(pvVar7);
    uVar4 = (**(code **)(*piVar11 + 0x38))(uVar12,&uStack_13c);
    uStack_c = CONCAT31(uStack_c._1_3_,3);
    FUN_01300cd0();
    goto LAB_0140552b;
  case 5:
    puVar10 = (undefined4 *)FUN_014045d0();
    ValueData_ctor(*puVar10);
    uStack_c = CONCAT31(uStack_c._1_3_,7);
    puVar10 = (undefined4 *)FUN_012fbda0(auStack_108);
    FUN_014045f0(auStack_130,*puVar10,puVar10[1]);
    uStack_184 = *(undefined4 *)((int)this + 0xc);
    if (puStack_178 == (undefined4 *)0x2) goto LAB_014055a4;
LAB_014055af:
    iStack_180 = 0;
    if (puStack_178 == (undefined4 *)0x3) {
      pvVar7 = (void *)FUN_0123c310();
      iStack_180 = Game_findNamedEntryValue(*(void **)((int)this + 0x10),pvVar7);
    }
    break;
  case 0xb:
    puVar10 = (undefined4 *)FUN_014045d0();
    ValueData_ctor(*puVar10);
    uStack_c._0_1_ = 8;
    puVar10 = (undefined4 *)FUN_012fbda0(auStack_100);
    FUN_014045f0(auStack_130,*puVar10,puVar10[1]);
    ValueDataArg_initEmptyString(&uStack_54);
    uStack_c._0_1_ = 9;
    uStack_54 = *(undefined4 *)((int)this + 0xc);
    pvStack_50 = (void *)0x1;
    pvVar7 = Game_getCurrentTurn(*(void **)((int)this + 0x10));
    piVar11 = GameTurn_getCurrentStateMachine(pvVar7);
    uVar4 = (**(code **)(*piVar11 + 0x38))(uVar12,&uStack_54);
    uStack_c._0_1_ = 8;
    EmbeddedStdString_clearAt0C(&uStack_54);
    goto LAB_01405537;
  }
  pvVar7 = Game_getCurrentTurn(*(void **)((int)this + 0x10));
  piVar11 = GameTurn_getCurrentStateMachine(pvVar7);
  uVar4 = (**(code **)(*piVar11 + 0x38))(uVar12,&uStack_184);
LAB_0140552b:
LAB_01405537:
  uStack_c._0_1_ = 2;
  FUN_01300cd0();
  uStack_c = (uint)uStack_c._1_3_ << 8;
  FUN_01300cd0();
LAB_01405973:
  uStack_c = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_14;
  return (bool)uVar4;
}

