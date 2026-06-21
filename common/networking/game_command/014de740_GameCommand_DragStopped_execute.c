// addr: 0x014de740
// name: GameCommand_DragStopped_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandDragStopped.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommandDragStopped_doCommand(void * this) */

void __fastcall GameCommand_DragStopped_execute(void *this)

{
                    /* Executes DragStopped by validating mGame, running common dispatch setup, and
                       forwarding mPlayerID plus the object/id field at 0x24 to the game callback.
                        */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandDragStopped.cpp",0x5a);
  }
  GameCommand_execute(this);
  (**(code **)(**(int **)((int)this + 8) + 0xfc))
            (*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 0x24));
  return;
}

