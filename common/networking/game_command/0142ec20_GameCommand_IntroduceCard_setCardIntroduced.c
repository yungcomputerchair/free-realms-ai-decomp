// addr: 0x0142ec20
// name: GameCommand_IntroduceCard_setCardIntroduced
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandIntroduceCard.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_IntroduceCard_setCardIntroduced(void * this, void *
   gameOrContext) */

void __thiscall GameCommand_IntroduceCard_setCardIntroduced(void *this,void *gameOrContext)

{
  undefined4 uVar1;
  
                    /* Sets introduced-card state by assigning an introduced card/play-element id
                       and property/archetype id, logging 'setCardIntroduced: PlayElementID=%d
                       ArchetypeID=%d', and asserting both values are nonzero. Evidence is the
                       explicit log string and asserts in GameCommandIntroduceCard.cpp. */
  if (gameOrContext == (void *)0x0) {
    FUN_012f5a60(&DAT_018778b4,"..\\common\\networking\\game_command\\GameCommandIntroduceCard.cpp",
                 0x1f);
  }
  uVar1 = PlayElement_getId();
  *(undefined4 *)((int)this + 0x24) = uVar1;
  uVar1 = FUN_0138a380();
  *(undefined4 *)((int)this + 0x28) = uVar1;
  Game_logGeneral(*(void **)((int)this + 8),"setCardIntroduced: PlayElementID=%d ArchetypeID=%d",
                  *(undefined4 *)((int)this + 0x24));
  if (*(int *)((int)this + 0x24) == 0) {
    FUN_012f5a60("mIntroducedCardID",
                 "..\\common\\networking\\game_command\\GameCommandIntroduceCard.cpp",0x25);
  }
  if (*(int *)((int)this + 0x28) == 0) {
    FUN_012f5a60("mIntroducedPropertyInstanceID.first",
                 "..\\common\\networking\\game_command\\GameCommandIntroduceCard.cpp",0x26);
  }
  return;
}

