// addr: 0x013358f0
// name: Game_endInDraw
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_endInDraw(void * game) */

void __fastcall Game_endInDraw(void *game)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  undefined1 local_1c [4];
  int *local_18;
  int *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Ends the game as a draw, logging a draw message and sending each player the
                       draw notification text. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167b3c8;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  bVar2 = unknown_getGameGuardFlag(game);
  if (!bVar2) {
    Game_logGeneral(game,"GAME ENDS IN A DRAW",uVar3);
    local_18 = (int *)0x0;
    local_14 = (int *)0x0;
    local_10 = 0;
    local_4 = 0;
    FUN_013630f0(local_1c);
    piVar1 = local_14;
    if (local_14 < local_18) {
      FUN_00d83c2d();
    }
    piVar4 = local_18;
    if (local_14 < local_18) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x1c) {
        FUN_00d83c2d();
      }
      if (piVar4 == piVar1) break;
      if (&stack0x00000000 == (undefined1 *)0x1c) {
        FUN_00d83c2d();
      }
      if (local_14 <= piVar4) {
        FUN_00d83c2d();
      }
      GamePlayer_logFormattedMessage
                (game,*piVar4,
                 "In war, there is often no clear winner. You and your opponent have ended the game in a draw, but the battle rages on!"
                );
      if (local_14 <= piVar4) {
        FUN_00d83c2d();
      }
      piVar4 = piVar4 + 1;
    }
    (**(code **)(*(int *)game + 0x1d0))();
    local_4 = 0xffffffff;
    if (local_18 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
  }
  ExceptionList = local_c;
  return;
}

