// addr: 0x014dfd00
// name: GameCommand_CardPlayed_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandCardPlayed.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall GameCommand_CardPlayed_execute(void *param_1)

{
  char cVar1;
  int *piVar2;
  
                    /* Executes a card-played command: validates mGame, updates the played card
                       object, invokes game vfunc 0xc0, and optionally advances/updates another card
                       through game vfunc 0xd0. Evidence is GameCommandCardPlayed.cpp and the mGame
                       execute pattern. */
  if (*(int *)((int)param_1 + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandCardPlayed.cpp",0x35);
  }
  GameCommand_execute(param_1);
  piVar2 = (int *)Game_getOrCreateCardForID
                            (*(undefined4 *)((int)param_1 + 0x24),*(undefined4 *)((int)param_1 + 4))
  ;
  if (*(int *)((int)param_1 + 0x28) != 0) {
    (**(code **)(*piVar2 + 0xb4))(*(int *)((int)param_1 + 0x28));
  }
  cVar1 = (**(code **)(**(int **)((int)param_1 + 8) + 0xc0))
                    (*(undefined4 *)((int)param_1 + 4),*(undefined4 *)((int)param_1 + 0x24),1,0);
  if ((cVar1 != '\0') && (*(int *)((int)param_1 + 0x30) != 0)) {
    (**(code **)(**(int **)((int)param_1 + 8) + 0xd0))
              (*(undefined4 *)((int)param_1 + 4),*(int *)((int)param_1 + 0x30),1,0);
  }
  return;
}

