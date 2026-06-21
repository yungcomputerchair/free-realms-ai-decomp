// addr: 0x014da330
// name: GameCommand_Reshuffle_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandReshuffle.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char GameCommandReshuffle_doCommand(void * this) */

char __fastcall GameCommand_Reshuffle_execute(void *this)

{
                    /* Executes Reshuffle at the command layer; this implementation only validates
                       mGame, runs common dispatch setup, and returns success. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandReshuffle.cpp",0x18);
  }
  GameCommand_execute(this);
  return '\x01';
}

