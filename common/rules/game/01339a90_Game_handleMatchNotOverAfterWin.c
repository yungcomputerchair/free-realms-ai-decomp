// addr: 0x01339a90
// name: Game_handleMatchNotOverAfterWin
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall Game_handleMatchNotOverAfterWin(void *param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 unaff_EDI;
  undefined1 local_10 [8];
  undefined1 local_8 [8];
  
                    /* If the overall match is not over after an individual game result, logs "Match
                       is not over yet", sets pending flags, and rotates/reset player lists for
                       another game. Evidence: string and caller after Game_gameWonByPlayerInternal.
                        */
  if (*(int *)((int)param_1 + 0x34c) != 1) {
    cVar1 = Game_matchGameWon();
    if ((((cVar1 == '\0') && (param_2 != 3)) && (param_2 != 1)) &&
       ((param_2 != 2 && (param_2 != 0)))) {
      Game_logGeneral(param_1,"Match is not over yet",unaff_EDI);
      *(undefined1 *)((int)param_1 + 0x131) = 1;
      *(undefined1 *)((int)param_1 + 0x38a) = 1;
      puVar2 = (undefined4 *)FUN_013302b0();
      param_2 = *puVar2;
      puVar2 = (undefined4 *)FUN_01269060(local_10);
      FUN_01331280(local_8,*puVar2,puVar2[1]);
      FUN_01336350(&param_2);
      puVar2 = (undefined4 *)FUN_013302b0();
      param_2 = *puVar2;
      puVar2 = (undefined4 *)FUN_01269060(local_8);
      FUN_01331280(local_10,*puVar2,puVar2[1]);
      FUN_01336350(&param_2);
    }
  }
  return;
}

