// addr: 0x01397c10
// name: FUN_01397c10
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_01397c10(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  code *pcVar5;
  uint uVar6;
  int playerId_;
  void *pvVar7;
  int *piVar8;
  undefined1 auStack_a0 [144];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Small helper/dispatcher using calls: FUN_01385460;
                       PlayArea_findPlayerElementById; FUN_01418e20; Game_logGeneral; FUN_01381430;
                       FUN_01393f90. No class-identifying evidence is present. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0168498b;
  local_c = ExceptionList;
  uVar6 = DAT_01b839d8 ^ (uint)&stack0xffffff38;
  ExceptionList = &local_c;
  piVar1 = (int *)param_1[0x31];
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (param_1 == (int *)0xffffff40) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) break;
    if (param_1 == (int *)0xffffff40) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)param_1[0x31]) {
      FUN_00d83c2d();
    }
    piVar3 = (int *)piVar2[6];
    if (piVar3 < (int *)piVar2[5]) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)param_1[0x31]) {
      FUN_00d83c2d();
    }
    piVar8 = (int *)piVar2[5];
    if ((int *)piVar2[6] < piVar8) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (piVar2 == (int *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if (piVar8 == piVar3) break;
      if (piVar2 == (int *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if ((int *)piVar2[6] <= piVar8) {
        FUN_00d83c2d();
      }
      puVar4 = (undefined4 *)*piVar8;
      if (puVar4 != (undefined4 *)0x0) {
        Game_logGeneral((void *)param_1[0xc],"Removing Modifier",uVar6);
        AttributeModifier_resetState();
        (**(code **)*puVar4)(1);
      }
      if ((int *)piVar2[6] <= piVar8) {
        FUN_00d83c2d();
      }
      piVar8 = piVar8 + 1;
    }
    FUN_0138cca0();
  }
  FUN_01393f90(*(undefined4 *)(param_1[0x31] + 4));
  *(int *)(param_1[0x31] + 4) = param_1[0x31];
  param_1[0x32] = 0;
  *(int *)param_1[0x31] = param_1[0x31];
  *(int *)(param_1[0x31] + 8) = param_1[0x31];
  EvaluationEnvironment_ctor();
  uStack_4 = 0;
  EvaluationEnvironment_setGame(param_1[0xc]);
  playerId_ = (**(code **)(*param_1 + 0x28))();
  pvVar7 = PlayArea_findPlayerElementById((void *)param_1[0xc],playerId_);
  FUN_013815b0(pvVar7);
  set_play_element_id_field(auStack_a0,param_1);
  pcVar5 = *(code **)(*param_1 + 0x16c);
  *(undefined1 *)(param_1 + 0x27) = 1;
  (*pcVar5)(auStack_a0);
  *(undefined1 *)(param_1 + 0x27) = 0;
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_01385460();
  ExceptionList = pvStack_10;
  return;
}

