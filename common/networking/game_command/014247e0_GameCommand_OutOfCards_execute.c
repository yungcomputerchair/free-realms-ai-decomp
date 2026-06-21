// addr: 0x014247e0
// name: GameCommand_OutOfCards_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandOutOfCards.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameCommand_OutOfCards_execute(void * this) */

int __fastcall GameCommand_OutOfCards_execute(void *this)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Executes OutOfCards by selecting the command player, obtaining a list of
                       related cards/elements, and marking each with state/value 3. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01694ea8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandOutOfCards.cpp",0x1d,
                 DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  }
  GameCommand_execute(this);
  PlayArea_findPlayerElementById(*(void **)((int)this + 8),*(int *)((int)this + 4));
  PlayElement_getGame();
  piVar2 = (int *)FUN_0139d7a0();
  puStack_18 = (undefined4 *)0x0;
  uStack_14 = 0;
  pvStack_10 = (void *)0x0;
  uStack_4 = 0;
  (**(code **)(*piVar2 + 0x34))(&puStack_1c);
  puVar3 = puStack_1c;
  if (puStack_18 < puStack_1c) {
    FUN_00d83c2d();
  }
  while( true ) {
    puVar1 = puStack_18;
    if (puStack_18 < puStack_1c) {
      FUN_00d83c2d();
    }
    if (&stack0x00000000 == (undefined1 *)0x20) {
      FUN_00d83c2d();
    }
    if (puVar3 == puVar1) break;
    if (&stack0x00000000 == (undefined1 *)0x20) {
      FUN_00d83c2d();
    }
    if (puStack_18 <= puVar3) {
      FUN_00d83c2d();
    }
    FUN_01342eb0(*puVar3,3);
    if (puStack_18 <= puVar3) {
      FUN_00d83c2d();
    }
    puVar3 = puVar3 + 1;
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (puStack_1c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_1c);
  }
  ExceptionList = pvStack_10;
  return 1;
}

