// addr: 0x014e1a60
// name: GameCommand_BatchControl_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandBatchControl.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameCommand_BatchControl_execute(void * this) */

int __fastcall GameCommand_BatchControl_execute(void *this)

{
  undefined4 extraout_EAX;
  
                    /* Executes a batch-control command: validates mGame, runs the base command
                       execute prologue, applies the 0x24 member through a game/state helper, and
                       returns success. Evidence is GameCommandBatchControl.cpp and the mGame
                       execute pattern. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandBatchControl.cpp",0x20);
  }
  GameCommand_execute(this);
  Game_setBatchControl(*(void **)((int)this + 8),*(int *)((int)this + 0x24));
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}

