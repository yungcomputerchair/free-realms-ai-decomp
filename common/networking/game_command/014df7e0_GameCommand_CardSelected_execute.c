// addr: 0x014df7e0
// name: GameCommand_CardSelected_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandCardSelected.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall GameCommand_CardSelected_execute(void *param_1)

{
  int *piVar1;
  
                    /* Executes a card-selected command: validates mGame, finds a play element/card
                       object, updates an optional associated object, then calls a game vfunc with
                       the player id, card id, and flag byte. Evidence is
                       GameCommandCardSelected.cpp, mGame assertion, and common command execute
                       prologue call. */
  if (*(int *)((int)param_1 + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandCardSelected.cpp",0x8e);
  }
  GameCommand_execute(param_1);
  piVar1 = (int *)Game_getOrCreateCardForID
                            (*(undefined4 *)((int)param_1 + 0x24),*(undefined4 *)((int)param_1 + 4))
  ;
  if ((piVar1 != (int *)0x0) && (*(int *)((int)param_1 + 0x28) != 0)) {
    (**(code **)(*piVar1 + 0xb4))(*(int *)((int)param_1 + 0x28));
  }
  (**(code **)(**(int **)((int)param_1 + 8) + 0xd0))
            (*(undefined4 *)((int)param_1 + 4),*(undefined4 *)((int)param_1 + 0x24),1,
             *(undefined1 *)((int)param_1 + 0x34));
  return;
}

