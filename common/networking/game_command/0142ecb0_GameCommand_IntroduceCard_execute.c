// addr: 0x0142ecb0
// name: GameCommand_IntroduceCard_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandIntroduceCard.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameCommandIntroduceCard_doCommand(void * this) */

int __fastcall GameCommand_IntroduceCard_execute(void *this)

{
  int *piVar1;
  undefined4 uVar2;
  
                    /* Executes IntroduceCard by validating mGame and mPlayerID,
                       initializing/updating the introduced card object, then notifying the game
                       with mPlayerID and the card/play-element field. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandIntroduceCard.cpp",0x2b);
  }
  if (*(int *)((int)this + 4) == 0) {
    FUN_012f5a60("mPlayerID","..\\common\\networking\\game_command\\GameCommandIntroduceCard.cpp",
                 0x2c);
  }
  GameCommand_execute(this);
  piVar1 = (int *)Game_getOrCreateCardForForcedID
                            (*(undefined4 *)((int)this + 0x24),*(undefined4 *)((int)this + 4));
  (**(code **)(*piVar1 + 0xb8))();
  (**(code **)(*piVar1 + 0xb4))(*(undefined4 *)((int)this + 0x28));
  uVar2 = (**(code **)(**(int **)((int)this + 8) + 0xc4))
                    (*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 0x24));
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

