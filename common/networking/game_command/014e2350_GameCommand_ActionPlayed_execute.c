// addr: 0x014e2350
// name: GameCommand_ActionPlayed_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandActionPlayed.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall GameCommand_ActionPlayed_execute(void *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
                    /* Executes an action-played command by updating primary/secondary/tertiary card
                       objects, invoking the game action-played vfunc, and then conditionally
                       advancing related cards in an order controlled by the member at 0x54.
                       Evidence is GameCommandActionPlayed.cpp, mGame assertion, and the base
                       execute prologue call. */
  if (*(int *)((int)param_1 + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandActionPlayed.cpp",0x127);
  }
  GameCommand_execute(param_1);
  piVar2 = (int *)Game_getOrCreateCardForID
                            (*(undefined4 *)((int)param_1 + 0x24),*(undefined4 *)((int)param_1 + 4))
  ;
  if (*(int *)((int)param_1 + 0x28) != 0) {
    (**(code **)(*piVar2 + 0xb4))(*(int *)((int)param_1 + 0x28));
  }
  if ((*(int *)((int)param_1 + 0x30) != 0) && (*(int *)((int)param_1 + 0x34) != 0)) {
    piVar2 = (int *)Game_getOrCreateCardForID
                              (*(int *)((int)param_1 + 0x30),*(undefined4 *)((int)param_1 + 0x3c));
    (**(code **)(*piVar2 + 0xb4))(*(undefined4 *)((int)param_1 + 0x34));
  }
  if ((*(int *)((int)param_1 + 0x40) != 0) && (*(int *)((int)param_1 + 0x44) != 0)) {
    piVar2 = (int *)Game_getOrCreateCardForID
                              (*(int *)((int)param_1 + 0x40),*(undefined4 *)((int)param_1 + 0x4c));
    (**(code **)(*piVar2 + 0xb4))(*(undefined4 *)((int)param_1 + 0x44));
  }
  cVar1 = (**(code **)(**(int **)((int)param_1 + 8) + 0xcc))
                    (*(undefined4 *)((int)param_1 + 4),*(undefined4 *)((int)param_1 + 0x24),
                     *(undefined4 *)((int)param_1 + 0x50),1,*(undefined1 *)((int)param_1 + 0x58));
  if (*(int *)((int)param_1 + 0x54) == 2) {
    if (cVar1 == '\0') {
      return;
    }
    if (*(int *)((int)param_1 + 0x40) != 0) {
      cVar1 = (**(code **)(**(int **)((int)param_1 + 8) + 0xd0))
                        (*(undefined4 *)((int)param_1 + 4),*(int *)((int)param_1 + 0x40),1,
                         *(undefined1 *)((int)param_1 + 0x58));
    }
    if (cVar1 == '\0') {
      return;
    }
    iVar3 = *(int *)((int)param_1 + 0x30);
  }
  else {
    if (cVar1 == '\0') {
      return;
    }
    if (*(int *)((int)param_1 + 0x30) != 0) {
      cVar1 = (**(code **)(**(int **)((int)param_1 + 8) + 0xd0))
                        (*(undefined4 *)((int)param_1 + 4),*(int *)((int)param_1 + 0x30),1,
                         *(undefined1 *)((int)param_1 + 0x58));
    }
    if (cVar1 == '\0') {
      return;
    }
    iVar3 = *(int *)((int)param_1 + 0x40);
  }
  if (iVar3 != 0) {
    (**(code **)(**(int **)((int)param_1 + 8) + 0xd0))
              (*(undefined4 *)((int)param_1 + 4),iVar3,1,*(undefined1 *)((int)param_1 + 0x58));
  }
  return;
}

