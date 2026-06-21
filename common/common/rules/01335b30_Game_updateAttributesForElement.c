// addr: 0x01335b30
// name: Game_updateAttributesForElement
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __fastcall Game_updateAttributesForElement(int *param_1)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  void *pvVar7;
  int *piVar8;
  void *unaff_retaddr;
  void *pvStack_30;
  undefined1 auStack_20 [4];
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Updates attributes for a specific element/player, logging
                       Game::updateAttributes and setting environment flags. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167b428;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Game_logGeneral(param_1,"Game::updateAttributes",DAT_01b839d8 ^ (uint)&stack0xffffffc0);
  FUN_01348d70();
  local_18 = (int *)0x0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 0;
  cVar2 = (**(code **)(*param_1 + 0x144))(&local_1c);
  if (cVar2 != '\0') {
    piVar1 = (int *)param_1[0xb];
    if (piVar1 < (int *)param_1[10]) {
      FUN_00d83c2d();
    }
    piVar8 = (int *)param_1[10];
    if ((int *)param_1[0xb] < piVar8) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (param_1 == (int *)0xffffffdc) {
        FUN_00d83c2d();
      }
      if (piVar8 == piVar1) break;
      if (param_1 == (int *)0xffffffdc) {
        FUN_00d83c2d();
      }
      if ((int *)param_1[0xb] <= piVar8) {
        FUN_00d83c2d();
      }
      if (((*piVar8 != 0) && (iVar4 = PlayElement_getGame(), iVar4 != 0)) &&
         (piVar5 = (int *)FUN_0139d7c0(), piVar5 != (int *)0x0)) {
        (**(code **)(*piVar5 + 0x34))(auStack_20);
      }
      if ((int *)param_1[0xb] <= piVar8) {
        FUN_00d83c2d();
      }
      piVar8 = piVar8 + 1;
    }
    pvVar6 = EvaluationEnvironment_getMember14(unaff_retaddr);
    uVar3 = FUN_013837b0();
    piVar1 = local_18;
    if (local_18 < local_1c) {
      FUN_00d83c2d();
    }
    piVar8 = local_1c;
    if (local_18 < local_1c) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x20) {
        FUN_00d83c2d();
      }
      if (piVar8 == piVar1) break;
      if (&stack0x00000000 == (undefined1 *)0x20) {
        FUN_00d83c2d();
      }
      if (local_18 <= piVar8) {
        FUN_00d83c2d();
      }
      piVar5 = (int *)*piVar8;
      if (piVar5[0x19] != 0) {
        EvaluationEnvironment_setBooleanKey13(uVar3);
        iVar4 = (**(code **)(*piVar5 + 0x28))();
        pvVar7 = PlayArea_findPlayerElementById(pvStack_30,iVar4);
        iVar4 = FUN_0138a520();
        if (iVar4 != 0) {
          FUN_013815b0(pvVar7);
          (**(code **)(*piVar5 + 0x16c))(unaff_retaddr);
        }
      }
      if (local_18 <= piVar8) {
        FUN_00d83c2d();
      }
      piVar8 = piVar8 + 1;
    }
    EvaluationEnvironment_setBooleanKey13(uVar3);
    FUN_013815b0(pvVar6);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (local_1c == (int *)0x0) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_1c);
}

