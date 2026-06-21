// addr: 0x013504e0
// name: Game_findPlayerByAccountId
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall Game_findPlayerByAccountId(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
                    /* Searches two Game player vectors for a GamePlayer whose account id matches
                       the requested id and returns the player pointer, or null. Evidence: repeated
                       calls to GamePlayer_getAccountId over player lists. */
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  if (puVar1 < *(undefined4 **)(param_1 + 0x28)) {
    FUN_00d83c2d();
  }
  puVar4 = *(undefined4 **)(param_1 + 0x28);
  if (*(undefined4 **)(param_1 + 0x2c) < puVar4) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (param_1 == -0x24) {
      FUN_00d83c2d();
    }
    if (puVar4 == puVar1) {
      puVar1 = *(undefined4 **)(param_1 + 0x4c);
      if (puVar1 < *(undefined4 **)(param_1 + 0x48)) {
        FUN_00d83c2d();
      }
      puVar4 = *(undefined4 **)(param_1 + 0x48);
      if (*(undefined4 **)(param_1 + 0x4c) < puVar4) {
        FUN_00d83c2d();
      }
      while( true ) {
        if (param_1 == -0x44) {
          FUN_00d83c2d();
        }
        if (puVar4 == puVar1) {
          return 0;
        }
        if (param_1 == -0x44) {
          FUN_00d83c2d();
        }
        if (*(undefined4 **)(param_1 + 0x4c) <= puVar4) {
          FUN_00d83c2d();
        }
        uVar2 = *puVar4;
        iVar3 = GamePlayer_getAccountId();
        if (iVar3 == param_2) break;
        if (*(undefined4 **)(param_1 + 0x4c) <= puVar4) {
          FUN_00d83c2d();
        }
        puVar4 = puVar4 + 1;
      }
      return uVar2;
    }
    if (param_1 == -0x24) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)(param_1 + 0x2c) <= puVar4) {
      FUN_00d83c2d();
    }
    uVar2 = *puVar4;
    iVar3 = GamePlayer_getAccountId();
    if (iVar3 == param_2) break;
    if (*(undefined4 **)(param_1 + 0x2c) <= puVar4) {
      FUN_00d83c2d();
    }
    puVar4 = puVar4 + 1;
  }
  return uVar2;
}

