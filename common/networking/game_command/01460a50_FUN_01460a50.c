// addr: 0x01460a50
// name: FUN_01460a50
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_01460a50(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  void *game;
  undefined4 *puVar6;
  char *fmt;
  undefined1 local_8 [8];
  
                    /* Unidentified helper; references strings setting revealed cards. cards.size()
                       = %d. */
  if (*(int *)(param_2 + 4) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2;
  }
  fmt = "setting revealed cards. cards.size() = %d";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,iVar5);
  puVar1 = *(undefined4 **)(param_2 + 8);
  if (puVar1 < *(undefined4 **)(param_2 + 4)) {
    FUN_00d83c2d();
  }
  puVar6 = *(undefined4 **)(param_2 + 4);
  if (*(undefined4 **)(param_2 + 8) < puVar6) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (param_2 == 0) {
      FUN_00d83c2d();
    }
    if (puVar6 == puVar1) break;
    if (param_2 == 0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)(param_2 + 8) <= puVar6) {
      FUN_00d83c2d();
    }
    uVar2 = *(uint *)(param_1 + 0x148);
    if ((uVar2 == 0) ||
       ((uint)((int)(*(int *)(param_1 + 0x150) - uVar2) >> 2) <=
        (uint)((int)(*(int *)(param_1 + 0x14c) - uVar2) >> 2))) {
      uVar4 = *(uint *)(param_1 + 0x14c);
      if (uVar4 < uVar2) {
        FUN_00d83c2d();
      }
      FUN_012619f0(local_8,param_1 + 0x144,uVar4,puVar6);
    }
    else {
      puVar3 = *(undefined4 **)(param_1 + 0x14c);
      *puVar3 = *puVar6;
      *(undefined4 **)(param_1 + 0x14c) = puVar3 + 1;
    }
    if (*(undefined4 **)(param_2 + 8) <= puVar6) {
      FUN_00d83c2d();
    }
    puVar6 = puVar6 + 1;
  }
  return;
}

