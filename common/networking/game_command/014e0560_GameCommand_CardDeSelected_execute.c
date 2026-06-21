// addr: 0x014e0560
// name: GameCommand_CardDeSelected_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandCardDeSelected.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommandCardDeSelected_doCommand(void * this) */

void __fastcall GameCommand_CardDeSelected_execute(void *this)

{
                    /* Executes CardDeSelected by validating mGame, running common dispatch setup,
                       and forwarding mPlayerID plus the selected card/id field at 0x24 to the game
                       callback. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandCardDeSelected.cpp",0x5b)
    ;
  }
  GameCommand_execute(this);
  (**(code **)(**(int **)((int)this + 8) + 0xd4))
            (*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 0x24));
  return;
}

