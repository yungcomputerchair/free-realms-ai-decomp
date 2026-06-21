// addr: 0x01390100
// name: FUN_01390100
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
FUN_01390100(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined1 local_10 [4];
  int *local_c;
  undefined1 local_8 [8];
  
                    /* Generic library/game/deserialization helper with insufficient state-method
                       evidence; body is container manipulation, factory/display-action setup,
                       account/lobby lookup, or broad game utility logic. */
  piVar7 = (int *)FUN_0138eb80(local_10,&param_2);
  iVar1 = *piVar7;
  iVar2 = piVar7[1];
  iVar3 = *(int *)(param_1 + 0xfc);
  if ((iVar1 == 0) || (iVar1 != param_1 + 0xf8)) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar3) {
    if (iVar1 == 0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)(iVar1 + 4)) {
      FUN_00d83c2d();
    }
    piVar7 = (int *)FUN_0137bb00(local_8,&param_3);
    iVar3 = piVar7[1];
    iVar4 = *piVar7;
    if (iVar2 == *(int *)(iVar1 + 4)) {
      FUN_00d83c2d();
    }
    iVar1 = *(int *)(iVar2 + 0x14);
    if ((iVar4 == 0) || (iVar4 != iVar2 + 0x10)) {
      FUN_00d83c2d();
    }
    if (iVar3 != iVar1) {
      param_3 = PlayElement_getId();
      if (iVar4 == 0) {
        FUN_00d83c2d();
      }
      if (iVar3 == *(int *)(iVar4 + 4)) {
        FUN_00d83c2d();
      }
      piVar7 = *(int **)(iVar3 + 0x18);
      if (piVar7 < *(int **)(iVar3 + 0x14)) {
        FUN_00d83c2d();
      }
      if (iVar3 == *(int *)(iVar4 + 4)) {
        FUN_00d83c2d();
      }
      piVar5 = *(int **)(iVar3 + 0x14);
      piVar6 = piVar5;
      if (*(int **)(iVar3 + 0x18) < piVar5) {
        FUN_00d83c2d();
      }
      for (; (piVar6 != piVar7 && (*piVar6 != param_3)); piVar6 = piVar6 + 1) {
      }
      local_c = piVar5;
      if (iVar3 == *(int *)(iVar4 + 4)) {
        FUN_00d83c2d();
      }
      piVar7 = *(int **)(iVar3 + 0x18);
      if (piVar7 < *(int **)(iVar3 + 0x14)) {
        FUN_00d83c2d();
      }
      if (iVar3 + 0x10 == 0) {
        FUN_00d83c2d();
      }
      if (piVar6 != piVar7) {
        if (iVar3 == *(int *)(iVar4 + 4)) {
          FUN_00d83c2d();
        }
        FUN_0041f3b5(local_10,iVar3 + 0x10,piVar6);
      }
    }
  }
  piVar7 = find_play_element_in_maps(*(void **)(param_1 + 0x30),param_1);
  (**(code **)(*piVar7 + 0x16c))(param_5);
  return;
}

