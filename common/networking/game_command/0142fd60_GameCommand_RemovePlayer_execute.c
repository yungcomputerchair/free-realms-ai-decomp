// addr: 0x0142fd60
// name: GameCommand_RemovePlayer_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandRemovePlayer.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameCommandRemovePlayer_doCommand(void * this) */

int __fastcall GameCommand_RemovePlayer_execute(void *this)

{
  undefined4 uVar1;
  
                    /* Executes RemovePlayer by asserting mGame, running common command
                       pre-dispatch, then calling the game callback with mPlayerID and the stored
                       field at 0x24. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandRemovePlayer.cpp",0x20);
  }
  GameCommand_execute(this);
  uVar1 = (**(code **)(**(int **)((int)this + 8) + 0xb4))
                    (*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 0x24));
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

