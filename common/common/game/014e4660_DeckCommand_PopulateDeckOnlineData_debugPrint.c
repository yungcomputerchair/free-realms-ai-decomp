// addr: 0x014e4660
// name: DeckCommand_PopulateDeckOnlineData_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void DeckCommand_PopulateDeckOnlineData_debugPrint(void * this, void * out) */

void __thiscall DeckCommand_PopulateDeckOnlineData_debugPrint(void *this,void *out)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *local_3f0;
  char local_3ec [1000];
  uint local_4;
  
                    /* Debug-prints a populate-deck-online-data deck command and lists each deck id
                       string from the embedded deck collection. */
  local_4 = DAT_01b839d8 ^ (uint)&local_3f0;
  FUN_01241650("Populate Deck Online Data Deck Command\n",0x27);
  GameCommand_DeckCommand_debugPrint(out);
  local_3f0 = *(undefined4 **)((int)this + 0xc);
  if (local_3f0 < *(undefined4 **)((int)this + 8)) {
    FUN_00d83c2d();
  }
  puVar5 = *(undefined4 **)((int)this + 8);
  if (*(undefined4 **)((int)this + 0xc) < puVar5) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xfffffffc) {
      FUN_00d83c2d();
    }
    if (puVar5 == local_3f0) break;
    if (this == (void *)0xfffffffc) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)this + 0xc) <= puVar5) {
      FUN_00d83c2d();
    }
    pvVar2 = Deck_getPropertyList((void *)*puVar5);
    if (*(uint *)((int)pvVar2 + 0x18) < 0x10) {
      iVar3 = (int)pvVar2 + 4;
    }
    else {
      iVar3 = *(int *)((int)pvVar2 + 4);
    }
    _sprintf(local_3ec,"DeckID: %s\n",iVar3);
    pcVar4 = local_3ec;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_01241650(local_3ec,(int)pcVar4 - (int)(local_3ec + 1));
    if (*(undefined4 **)((int)this + 0xc) <= puVar5) {
      FUN_00d83c2d();
    }
    puVar5 = puVar5 + 1;
  }
  return;
}

