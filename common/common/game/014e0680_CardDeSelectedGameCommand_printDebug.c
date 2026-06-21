// addr: 0x014e0680
// name: CardDeSelectedGameCommand_printDebug
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void CardDeSelectedGameCommand_printDebug(void * this, void * out) */

void __thiscall CardDeSelectedGameCommand_printDebug(void *this,void *out)

{
  char cVar1;
  char *pcVar2;
  char local_3ec [1000];
  uint local_4;
  
                    /* Prints a Card DeSelected Game Command debug dump and the deselected card id.
                        */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("Card DeSelected Game Command\n",0x1d);
  GameCommand_dump(this,out);
  _sprintf(local_3ec,"DeSelectedCardID: %d\n",*(undefined4 *)((int)this + 0x24));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  return;
}

