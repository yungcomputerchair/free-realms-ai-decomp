// addr: 0x01399a30
// name: Card_getKeywords
// subsystem: common/common/game
// source (binary assert): common/common/game/Card.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x01399d0b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall Card_getKeywords(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  void *pvVar8;
  void *element;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int *piStack_c8;
  int local_bc;
  int aiStack_b8 [3];
  int *local_ac;
  undefined1 auStack_a8 [148];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Builds the card keyword list from keyword data and active modifiers,
                       filtering negated/suppressed keywords and avoiding duplicates. Returns the
                       output vector. */
  puStack_8 = &LAB_01684ba5;
  local_c = ExceptionList;
  uVar7 = DAT_01b839d8 ^ (uint)&stack0xffffff14;
  ExceptionList = &local_c;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  local_4 = 0;
  local_ac = (int *)0x1;
  FUN_012fa910(uVar7);
  local_4 = 1;
  cVar5 = (**(code **)(*param_1 + 4))(2,&local_bc);
  if (cVar5 != '\0') {
    FUN_01300db0();
    iVar9 = local_bc;
    if (((param_1 != (int *)0x6) &&
        (FUN_012f5a60("keywordData.isIntegerListValue()","..\\common\\common\\game\\Card.cpp",0x1031
                     ), iVar9 = local_bc, param_1 != (int *)0x6)) &&
       (FUN_012f5a60("mTypeID == kIntegerListTypeID",
                     "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                     ,0x135), iVar9 = local_bc, param_1 != (int *)0x6)) {
      iVar9 = 0;
    }
    piVar1 = *(int **)(iVar9 + 8);
    if (piVar1 < *(int **)(iVar9 + 4)) {
      FUN_00d83c2d();
    }
    iVar11 = local_bc;
    if ((param_1 != (int *)0x6) &&
       (FUN_012f5a60("mTypeID == kIntegerListTypeID",
                     "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                     ,0x135), iVar11 = local_bc, param_1 != (int *)0x6)) {
      iVar11 = 0;
    }
    piVar13 = *(int **)(iVar11 + 4);
    if (*(int **)(iVar11 + 8) < piVar13) {
      FUN_00d83c2d();
    }
    while( true ) {
      if ((iVar11 == 0) || (iVar11 != iVar9)) {
        FUN_00d83c2d();
      }
      if (piVar13 == piVar1) break;
      if (iVar11 == 0) {
        FUN_00d83c2d();
      }
      if (*(int **)(iVar11 + 8) <= piVar13) {
        FUN_00d83c2d();
      }
      iVar2 = *piVar13;
      bVar6 = PackedId_consumeHighBitFlag_alt((uint *)&stack0xffffff20);
      if ((!bVar6) &&
         ((cVar5 = (**(code **)(*(int *)param_1[0xc] + 0x1fc))(iVar2), cVar5 == '\0' ||
          (cVar5 = (**(code **)(*(int *)param_1[0xc] + 0x1f8))(param_1), cVar5 == '\0')))) {
        piVar3 = *(int **)(param_2 + 8);
        if (piVar3 < *(int **)(param_2 + 4)) {
          FUN_00d83c2d();
        }
        piVar12 = *(int **)(param_2 + 4);
        if (*(int **)(param_2 + 8) < piVar12) {
          FUN_00d83c2d();
        }
        for (; (piVar12 != piVar3 && (*piVar12 != iVar2)); piVar12 = piVar12 + 1) {
        }
        piVar3 = *(int **)(param_2 + 8);
        if (piVar3 < *(int **)(param_2 + 4)) {
          FUN_00d83c2d();
          param_1 = piStack_c8;
        }
        if (param_2 == 0) {
          FUN_00d83c2d();
        }
        if (piVar12 == piVar3) {
          FUN_0042c155(&stack0xffffff20);
        }
      }
      if (*(int **)(iVar11 + 8) <= piVar13) {
        FUN_00d83c2d();
      }
      piVar13 = piVar13 + 1;
    }
  }
  cVar5 = (**(code **)(*param_1 + 0x48))();
  if (cVar5 != '\0') {
    EvaluationEnvironment_ctor();
    local_c = (void *)CONCAT31(local_c._1_3_,2);
    EvaluationEnvironment_setGame(param_1[0xc]);
    set_play_element_id_field(auStack_a8,param_1);
    pvVar8 = PlayArea_findPlayerElementById((void *)param_1[0xc],param_1[0x10]);
    if (pvVar8 != (void *)0x0) {
      FUN_013815b0(pvVar8);
    }
    EvaluationEnvironment_setGame(param_1[0xc]);
    (**(code **)(*param_1 + 0x214))(0xdc,&stack0xffffff1c);
    puVar4 = puRam00000008;
    if (puRam00000008 < _DAT_00000004) {
      FUN_00d83c2d();
    }
    puVar10 = _DAT_00000004;
    if (puRam00000008 < _DAT_00000004) {
      FUN_00d83c2d();
    }
    for (; FUN_00d83c2d(), puVar10 != puVar4; puVar10 = puVar10 + 1) {
      FUN_00d83c2d();
      if (puRam00000008 <= puVar10) {
        FUN_00d83c2d();
      }
      pvVar8 = (void *)*puVar10;
      if (pvVar8 == (void *)0x0) {
        FUN_012f5a60("modifier","..\\common\\common\\game\\Card.cpp",0x1059);
      }
      element = EvaluationEnvironment_getOriginCard(auStack_a8);
      set_play_element_id_field(auStack_a8,piStack_c8);
      iVar9 = AttributeModifier_getAttributeID(pvVar8);
      aiStack_b8[0] = iVar9;
      set_play_element_id_field(auStack_a8,element);
      bVar6 = PackedId_consumeHighBitFlag_alt((uint *)&stack0xffffff20);
      if ((!bVar6) &&
         ((cVar5 = (**(code **)(*(int *)piStack_c8[0xc] + 0x1fc))(iVar9), cVar5 == '\0' ||
          (cVar5 = (**(code **)(*(int *)piStack_c8[0xc] + 0x1f8))(piStack_c8), cVar5 == '\0')))) {
        iVar11 = local_4;
        piVar1 = *(int **)(local_4 + 8);
        if (piVar1 < *(int **)(local_4 + 4)) {
          FUN_00d83c2d();
        }
        piVar13 = *(int **)(iVar11 + 4);
        piVar3 = piVar13;
        if (*(int **)(iVar11 + 8) < piVar13) {
          FUN_00d83c2d();
        }
        for (; (iVar2 = local_4, piVar3 != piVar1 && (*piVar3 != iVar9)); piVar3 = piVar3 + 1) {
        }
        piVar1 = *(int **)(local_4 + 8);
        local_ac = piVar13;
        if (piVar1 < *(int **)(local_4 + 4)) {
          FUN_00d83c2d();
        }
        if ((iVar11 == 0) || (iVar11 != iVar2)) {
          FUN_00d83c2d();
        }
        if (piVar3 == piVar1) {
          FUN_0042c155(aiStack_b8);
        }
      }
      if (puRam00000008 <= puVar10) {
        FUN_00d83c2d();
      }
    }
    local_c = (void *)CONCAT31(local_c._1_3_,1);
    FUN_01385460();
    param_2 = local_4;
  }
  local_c = (void *)((uint)local_c & 0xffffff00);
  FUN_01300cd0();
  ExceptionList = pvStack_14;
  return param_2;
}

