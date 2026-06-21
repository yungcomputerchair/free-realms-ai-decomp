// addr: 0x01360c90
// name: Game_updateAttributes
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __fastcall Game_updateAttributes(int *param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  void *pvVar5;
  int iVar6;
  void *pvVar7;
  int *piVar8;
  void *unaff_retaddr;
  void *pvStack_30;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Updates game attributes while setting an environment boolean return and
                       logging Game::updateAttributes. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167ec78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Game_logGeneral(param_1,"Game::updateAttributes",DAT_01b839d8 ^ (uint)&stack0xffffffc0);
  param_1[0xca] = param_1[0xca] + 1;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 0;
  cVar3 = (**(code **)(*param_1 + 0x144))(&local_1c);
  if (cVar3 != '\0') {
    pvVar5 = EvaluationEnvironment_getMember14(unaff_retaddr);
    uVar4 = FUN_013837b0();
    piVar2 = local_18;
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
      if (piVar8 == piVar2) break;
      if (&stack0x00000000 == (undefined1 *)0x20) {
        FUN_00d83c2d();
      }
      if (local_18 <= piVar8) {
        FUN_00d83c2d();
      }
      piVar1 = (int *)*piVar8;
      if (piVar1[0x19] != 0) {
        EvaluationEnvironment_setBooleanKey13(uVar4);
        iVar6 = (**(code **)(*piVar1 + 0x28))();
        pvVar7 = PlayArea_findPlayerElementById(pvStack_30,iVar6);
        iVar6 = FUN_0138a520();
        if (iVar6 != 0) {
          FUN_013815b0(pvVar7);
          (**(code **)(*piVar1 + 0x16c))(unaff_retaddr);
        }
      }
      if (local_18 <= piVar8) {
        FUN_00d83c2d();
      }
      piVar8 = piVar8 + 1;
    }
    EvaluationEnvironment_setBooleanKey13(uVar4);
    FUN_013815b0(pvVar5);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (local_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_1c);
  }
  ExceptionList = local_10;
  return;
}

