// addr: 0x014d9bd0
// name: GameCommand_SetRevealCards_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void GameCommand_SetRevealCards_debugPrint(void * this, void * out) */

void __thiscall GameCommand_SetRevealCards_debugPrint(void *this,void *out)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *local_1fc;
  char local_1f8 [500];
  uint local_4;
  
                    /* Debug-prints the set-reveal-cards game command and lists each card id from
                       the command vector. */
  local_4 = DAT_01b839d8 ^ (uint)&local_1fc;
  FUN_01241650("Set Reveal CardsGame Command\n",0x1d);
  GameCommand_dump(this,out);
  local_1fc = *(undefined4 **)((int)this + 0x2c);
  if (local_1fc < *(undefined4 **)((int)this + 0x28)) {
    FUN_00d83c2d();
  }
  puVar3 = *(undefined4 **)((int)this + 0x28);
  if (*(undefined4 **)((int)this + 0x2c) < puVar3) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xffffffdc) {
      FUN_00d83c2d();
    }
    if (puVar3 == local_1fc) break;
    if (this == (void *)0xffffffdc) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)this + 0x2c) <= puVar3) {
      FUN_00d83c2d();
    }
    _sprintf(local_1f8,"CardID: %d\n",*puVar3);
    pcVar2 = local_1f8;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_01241650(local_1f8,(int)pcVar2 - (int)(local_1f8 + 1));
    if (*(undefined4 **)((int)this + 0x2c) <= puVar3) {
      FUN_00d83c2d();
    }
    puVar3 = puVar3 + 1;
  }
  return;
}

