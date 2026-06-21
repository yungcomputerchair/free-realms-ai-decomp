// addr: 0x014deab0
// name: GameCommand_DiscardCard_setupCard
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandDiscardCard.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_DiscardCard_setupCard(void * this, void * card) */

void __thiscall GameCommand_DiscardCard_setupCard(void *this,void *card)

{
  undefined4 uVar1;
  int iVar2;
  
                    /* Initializes the discard-card command from a Card object, storing the card id
                       and property instance id, logging the card name, and asserting both ids were
                       populated. */
  if (card == (void *)0x0) {
    FUN_012f5a60(&DAT_018778b4,"..\\common\\networking\\game_command\\GameCommandDiscardCard.cpp",
                 0x29);
  }
  uVar1 = PlayElement_getId();
  *(undefined4 *)((int)this + 0x24) = uVar1;
  uVar1 = FUN_0138a380();
  *(undefined4 *)((int)this + 0x28) = uVar1;
  iVar2 = Card_getPropertyMap();
  if (*(uint *)(iVar2 + 0x18) < 0x10) {
    iVar2 = iVar2 + 4;
  }
  else {
    iVar2 = *(int *)(iVar2 + 4);
  }
  Game_logGeneral(*(void **)((int)this + 8),"GameCommand_DiscardCard::setupCard: %s",iVar2);
  if (*(int *)((int)this + 0x24) == 0) {
    FUN_012f5a60("mCardID","..\\common\\networking\\game_command\\GameCommandDiscardCard.cpp",0x2f);
  }
  if (*(int *)((int)this + 0x28) == 0) {
    FUN_012f5a60("mPropertyInstanceID.first",
                 "..\\common\\networking\\game_command\\GameCommandDiscardCard.cpp",0x30);
  }
  return;
}

