// addr: 0x0132fd50
// name: Game_logPlayerDrawDeck
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void Game_logPlayerDrawDeck(void * this, int playerIndex, void * deck) */

void __thiscall Game_logPlayerDrawDeck(void *this,int playerIndex,void *deck)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  char local_130 [100];
  char local_cc [200];
  uint local_4;
  
                    /* Logs a player's draw deck contents as card/count pairs after downcasting the
                       deck to CWDeck. */
  local_4 = DAT_01b839d8 ^ (uint)local_130;
  _sprintf(local_130,"Player%d Deck:",playerIndex);
  FUN_00d8d382(deck,0,&Deck::RTTI_Type_Descriptor,&CWDeck::RTTI_Type_Descriptor,0);
  _sprintf(local_cc,"%s DrawDeck:",local_130);
  iVar2 = (**(code **)(*(int *)deck + 0x48))();
  puVar1 = *(undefined4 **)(iVar2 + 8);
  if (puVar1 < *(undefined4 **)(iVar2 + 4)) {
    FUN_00d83c2d();
  }
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (*(undefined4 **)(iVar2 + 8) < puVar3) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (iVar2 == 0) {
      FUN_00d83c2d();
    }
    if (puVar3 == puVar1) break;
    if (iVar2 == 0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)(iVar2 + 8) <= puVar3) {
      FUN_00d83c2d();
    }
    Game_writeGameLog(this,"%s\t%d\t%d",local_cc,*puVar3,puVar3[1]);
    if (*(undefined4 **)(iVar2 + 8) <= puVar3) {
      FUN_00d83c2d();
    }
    puVar3 = puVar3 + 2;
  }
  return;
}

