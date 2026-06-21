// addr: 0x014de290
// name: GameCommand_EndObserverMode_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandEndObserverMode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameCommandEndObserverMode_doCommand(void * this) */

int __fastcall GameCommand_EndObserverMode_execute(void *this)

{
  undefined4 uVar1;
  
                    /* Executes EndObserverMode by validating mGame, running common command dispatch
                       setup, and invoking a no-argument game callback. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandEndObserverMode.cpp",0x61
                );
  }
  GameCommand_execute(this);
  uVar1 = (**(code **)(**(int **)((int)this + 8) + 0x7c))();
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

