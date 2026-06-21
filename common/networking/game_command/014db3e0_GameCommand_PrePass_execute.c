// addr: 0x014db3e0
// name: GameCommand_PrePass_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandPrePass.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameCommandPrePass_doCommand(void * this) */

int __fastcall GameCommand_PrePass_execute(void *this)

{
  undefined4 extraout_EAX;
  
                    /* Executes PrePass after validating mGame by calling a helper with the command
                       player id and returning success. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandPrePass.cpp",0x19);
  }
  Game_prepass(*(void **)((int)this + 8),*(int *)((int)this + 4));
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}

