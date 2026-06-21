// addr: 0x01398240
// name: Card_getValidTargetsForDragWithEnv
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall
Card_getValidTargetsForDragWithEnv(int *param_1,undefined4 param_2,int *param_3,void *param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  char cVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  undefined4 *_Memory;
  int iVar12;
  void *pvVar13;
  undefined4 uVar14;
  undefined4 unaff_EBX;
  undefined4 *puVar15;
  int *piVar16;
  undefined4 **ppuVar17;
  bool bStack_40;
  int iStack_38;
  undefined4 *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  int *piStack_20;
  undefined4 uStack_1c;
  void *pvStack_18;
  uint uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* Computes valid drag targets for a Card using an EvaluationEnvironment and
                       records target/action returns. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01684a20;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EvaluationEnvironment_tracef
            (param_4,"Card::getValidTargetsFroDragWithEnv",DAT_01b839d8 ^ (uint)&stack0xffffffb0);
  cVar8 = FUN_01383820();
  FUN_01383740();
  FUN_01383ba0();
  FUN_013837b0();
  FUN_01383520(0x3c,0);
  iVar11 = Rules_getDynamicCardReturnCard();
  _Memory = Rules_getVariable27Card(param_4);
  (**(code **)(*param_3 + 0x84))(param_4);
  cVar9 = FUN_01383820();
  if ((cVar9 == '\0') && (cVar8 == '\x01')) {
    set_boolean_value_key_17(true);
  }
  cVar8 = FUN_01383520(0x3c,0);
  if ((cVar8 == '\0') && ((char)param_3 == '\x01')) {
    EvaluationEnvironment_setBooleanReturnValue(0x3c,bStack_40);
  }
  cVar8 = FUN_01383740();
  if ((cVar8 == '\0') && ((char)((uint)unaff_EBX >> 8) == '\x01')) {
    set_boolean_value_key_18(true);
  }
  cVar8 = FUN_01383ba0();
  if ((cVar8 == '\0') && ((char)((uint)unaff_EBX >> 0x10) == '\x01')) {
    EvaluationEnvironment_setTarget1Return(1);
  }
  iVar12 = Rules_getDynamicCardReturnCard();
  if ((iVar12 == 0) && (iVar11 != 0)) {
    EvaluationEnvironment_setDynamicCardReturn(iVar11);
  }
  pvVar13 = Rules_getVariable27Card(param_4);
  if ((pvVar13 == (void *)0x0) && (iStack_38 != 0)) {
    FUN_013870c0(iStack_38);
  }
  cVar8 = FUN_013837b0();
  if ((cVar8 == '\0') && ((char)((uint)unaff_EBX >> 0x18) == '\x01')) {
    EvaluationEnvironment_setBooleanKey13(1);
  }
  set_play_element_id_field(param_4,param_1);
  EvaluationEnvironment_setBooleanKey4(0);
  EvaluationEnvironment_setBooleanKey9(1);
  uStack_2c = 0;
  uStack_28 = 0;
  piStack_24 = (int *)0x0;
  puStack_8 = (undefined1 *)0x0;
  ppuVar17 = &puStack_30;
  (**(code **)(*param_1 + 0x114))(ppuVar17,3);
  puVar6 = puStack_30;
  bVar4 = false;
  uStack_4 = uStack_4 & 0xffffff00;
  if (puStack_30 < _Memory) {
    FUN_00d83c2d();
  }
  puVar15 = _Memory;
  if (puStack_30 < _Memory) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x38) {
      FUN_00d83c2d();
    }
    if (puVar15 == puVar6) break;
    if (bVar4) goto LAB_0139849e;
    if (&stack0x00000000 == (undefined1 *)0x38) {
      FUN_00d83c2d();
    }
    if (puStack_30 <= puVar15) {
      FUN_00d83c2d();
    }
    uVar14 = *puVar15;
    EvaluationEnvironment_setActionReturn(uVar14);
    FUN_01387300(0);
    cVar8 = (**(code **)(*param_1 + 0xdc))(uVar14,param_4,1);
    if (cVar8 != '\0') {
      uVar10 = FUN_01383730();
      uStack_4 = CONCAT31(uStack_4._1_3_,uVar10);
      bVar4 = true;
    }
    if (puStack_30 <= puVar15) {
      FUN_00d83c2d();
    }
    puVar15 = puVar15 + 1;
  }
  if (!bVar4) {
    EvaluationEnvironment_tracef(param_4,"returning False (can\'t be played)",ppuVar17);
    uStack_10 = 0xffffffff;
    if (_Memory == (undefined4 *)0x0) {
      ExceptionList = pvStack_18;
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
LAB_0139849e:
  FUN_01387300(uStack_4);
  piStack_24 = (int *)0x0;
  piStack_20 = (int *)0x0;
  uStack_1c = 0;
  uStack_10 = CONCAT31(uStack_10._1_3_,1);
  pvVar13 = CommandObject_getActionFromEnvironment(param_4);
  if (pvVar13 == (void *)0x0) {
    uVar14 = (**(code **)(*param_1 + 0xcc))();
    EvaluationEnvironment_setActionReturn(uVar14);
  }
  (**(code **)(*param_1 + 0xe0))(&uStack_28,param_4);
  EvaluationEnvironment_logCardList(param_4,"validTargets results: ",&uStack_28);
  piVar7 = piStack_20;
  if (piStack_20 < piStack_24) {
    FUN_00d83c2d();
  }
  piVar16 = piStack_24;
  puVar5 = puStack_8;
  if (piStack_20 < piStack_24) {
    FUN_00d83c2d();
    puVar5 = puStack_8;
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x28) {
      FUN_00d83c2d();
    }
    if (piVar16 == piVar7) break;
    if (&stack0x00000000 == (undefined1 *)0x28) {
      FUN_00d83c2d();
    }
    if (piStack_20 <= piVar16) {
      FUN_00d83c2d();
    }
    if (*piVar16 != 0) {
      uStack_4 = PlayElement_getId();
      uVar1 = *(uint *)((int)puVar5 + 4);
      if ((uVar1 == 0) ||
         ((uint)((int)(*(int *)((int)puVar5 + 0xc) - uVar1) >> 2) <=
          (uint)((int)(*(int *)((int)puVar5 + 8) - uVar1) >> 2))) {
        uVar3 = *(uint *)((int)puVar5 + 8);
        if (uVar3 < uVar1) {
          FUN_00d83c2d();
        }
        Vector_insertSingleAndReturnIterator_realloc(&stack0xffffffb8,puVar5,uVar3,&uStack_4);
      }
      else {
        puVar2 = *(uint **)((int)puVar5 + 8);
        *puVar2 = uStack_4;
        *(uint **)((int)puVar5 + 8) = puVar2 + 1;
      }
    }
    if (piStack_20 <= piVar16) {
      FUN_00d83c2d();
    }
    piVar16 = piVar16 + 1;
  }
  uStack_10 = uStack_10 & 0xffffff00;
  if (piStack_24 == (int *)0x0) {
    piStack_24 = (int *)0x0;
    piStack_20 = (int *)0x0;
    uStack_1c = 0;
    uStack_10 = 0xffffffff;
    if (_Memory == (undefined4 *)0x0) {
      ExceptionList = pvStack_18;
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free(piStack_24);
}

