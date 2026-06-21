// addr: 0x014301f0
// name: GameCommand_SelectDeckForPlayer_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandSelectDeckForPlayer.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommandSelectDeckForPlayer_doCommand(void * this) */

void __fastcall GameCommand_SelectDeckForPlayer_execute(void *this)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  
                    /* Executes SelectDeckForPlayer by validating mGame, resolving the player from
                       mPlayerID, obtaining the stored deck object/string data, and calling the game
                       callback to select the deck. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandSelectDeckForPlayer.cpp",
                 0x70);
  }
  GameCommand_execute(this);
  pvVar2 = PlayArea_findPlayerElementById(*(void **)((int)this + 8),*(int *)((int)this + 4));
  if (pvVar2 == (void *)0x0) {
    FUN_012f5a60("player","..\\common\\networking\\game_command\\GameCommandSelectDeckForPlayer.cpp"
                 ,0x74);
  }
  iVar1 = **(int **)((int)this + 8);
  uVar3 = (**(code **)(**(int **)((int)this + 0x40) + 0x74))();
  (**(code **)(iVar1 + 0x38))(pvVar2,uVar3);
  return;
}

