// addr: 0x01331120
// name: Game_matchGameWon
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall Game_matchGameWon(void *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
                    /* Checks whether a match is over for best-of settings, logging each player's
                       games won and returning true when a player reaches the required wins.
                       Evidence: log string "CWGame::matchGameWon" and comparisons against match
                       mode 2/3. */
  if ((*(int *)((int)param_1 + 0x34c) != 2) && (*(int *)((int)param_1 + 0x34c) != 3)) {
    return 1;
  }
  piVar1 = *(int **)((int)param_1 + 0x3d0);
  piVar2 = (int *)*piVar1;
  do {
    if (param_1 == (void *)0xfffffc34) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) {
      return 0;
    }
    if (param_1 == (void *)0xfffffc34) {
      FUN_00d83c2d();
    }
    if ((piVar2 == (int *)*(int *)((int)param_1 + 0x3d0)) &&
       (FUN_00d83c2d(), piVar2 == (int *)*(int *)((int)param_1 + 0x3d0))) {
      FUN_00d83c2d();
    }
    Game_logGeneral(param_1,"CWGame::matchGameWon: Player %d has %d games won.",piVar2[3]);
    if (*(int *)((int)param_1 + 0x34c) == 2) {
      if (piVar2 == (int *)*(int *)((int)param_1 + 0x3d0)) {
        FUN_00d83c2d();
      }
      bVar4 = SBORROW4(piVar2[4],2);
      iVar3 = piVar2[4] + -2;
LAB_013311d8:
      if (bVar4 == iVar3 < 0) {
        return 1;
      }
    }
    else if (*(int *)((int)param_1 + 0x34c) == 3) {
      if (piVar2 == (int *)*(int *)((int)param_1 + 0x3d0)) {
        FUN_00d83c2d();
      }
      bVar4 = SBORROW4(piVar2[4],3);
      iVar3 = piVar2[4] + -3;
      goto LAB_013311d8;
    }
    FUN_004d21f9();
  } while( true );
}

