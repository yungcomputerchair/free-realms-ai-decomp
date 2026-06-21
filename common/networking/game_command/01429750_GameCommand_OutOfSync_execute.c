// addr: 0x01429750
// name: GameCommand_OutOfSync_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandOutOfSync.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameCommandOutOfSync_doCommand(void * this) */

int __fastcall GameCommand_OutOfSync_execute(void *this)

{
  undefined4 uVar1;
  
                    /* Executes the OutOfSync command by asserting mGame, running the common
                       GameCommand pre-dispatch routine, and invoking a game vtable callback with
                       true. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandOutOfSync.cpp",0x49);
  }
  GameCommand_execute(this);
  uVar1 = (**(code **)(**(int **)((int)this + 8) + 0x1b4))(1);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

