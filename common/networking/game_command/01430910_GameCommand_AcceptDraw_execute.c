// addr: 0x01430910
// name: GameCommand_AcceptDraw_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandAcceptDraw.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameCommandAcceptDraw_doCommand(void * this) */

int __fastcall GameCommand_AcceptDraw_execute(void *this)

{
  undefined4 uVar1;
  
                    /* Executes AcceptDraw by asserting mGame, running the common command dispatch
                       helper, and forwarding mPlayerID plus a byte flag at 0x24 to the game object.
                        */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandAcceptDraw.cpp",0x19);
  }
  GameCommand_execute(this);
  uVar1 = (**(code **)(**(int **)((int)this + 8) + 0x1e4))
                    (*(undefined4 *)((int)this + 4),*(undefined1 *)((int)this + 0x24));
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

