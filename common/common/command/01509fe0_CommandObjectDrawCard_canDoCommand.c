// addr: 0x01509fe0
// name: CommandObjectDrawCard_canDoCommand
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectDrawCard.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObjectDrawCard_canDoCommand(void * this) */

bool __fastcall CommandObjectDrawCard_canDoCommand(void *this)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_retaddr;
  
                    /* Checks whether a DrawCard command is legal: verifies mPlayer, enforces the
                       four-card hand draw limit, resolves the source pile play area, and optionally
                       performs an extra pile-specific availability check. */
  if (*(int *)((int)this + 0x130) == 0) {
    FUN_012f5a60("mPlayer","..\\common\\common\\command\\CommandObjectDrawCard.cpp",0x76);
  }
  piVar2 = Game_getCurrentTurn(*(void **)((int)this + 0x30));
  iVar4 = *piVar2;
  uVar3 = GamePlayer_getPlayerId();
  cVar1 = (**(code **)(iVar4 + 0x40))(uVar3);
  if (cVar1 == '\0') {
    Game_logGeneralFormatted
              (*(undefined4 *)((int)this + 0x30),"You\'ve already drawn 4 cards into hand.");
  }
  else {
    piVar2 = (int *)PlayElement_getGame();
    uVar3 = (**(code **)(*piVar2 + 0x48))(*(undefined4 *)((int)this + 0x124),unaff_retaddr);
    iVar4 = FUN_00d8d382(uVar3,0,&PlayArea::RTTI_Type_Descriptor,&PilePlayArea::RTTI_Type_Descriptor
                         ,0);
    if (iVar4 != 0) {
      if ((*(int *)((int)this + 0x128) == 1) && (iVar4 = Game_getFirstDeckCard(), iVar4 == 0)) {
        return false;
      }
      return true;
    }
  }
  return false;
}

