// addr: 0x01430df0
// name: GameCommand_AcceptAdjournment_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandAcceptAdjournment.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameCommandAcceptAdjournment_doCommand(void * this) */

int __fastcall GameCommand_AcceptAdjournment_execute(void *this)

{
  undefined4 uVar1;
  
                    /* Executes AcceptAdjournment by asserting mGame, running common dispatch setup,
                       and forwarding mPlayerID plus a byte flag at 0x24 to the game object. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandAcceptAdjournment.cpp",
                 0x1a);
  }
  GameCommand_execute(this);
  uVar1 = (**(code **)(**(int **)((int)this + 8) + 0x78))
                    (*(undefined4 *)((int)this + 4),*(undefined1 *)((int)this + 0x24));
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

