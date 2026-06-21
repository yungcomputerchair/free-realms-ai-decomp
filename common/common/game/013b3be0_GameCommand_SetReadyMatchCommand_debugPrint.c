// addr: 0x013b3be0
// name: GameCommand_SetReadyMatchCommand_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void GameCommand_SetReadyMatchCommand_debugPrint(void * this, void * printer)
    */

void __thiscall GameCommand_SetReadyMatchCommand_debugPrint(void *this,void *printer)

{
  char cVar1;
  char *pcVar2;
  char local_3ec [1000];
  uint local_4;
  
                    /* Debug-prints a Set Ready Match Command and its ready flag. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("Set Ready Match Command\n",0x18);
  GameCommand_MatchCommand_debugPrint(this,printer);
  _sprintf(local_3ec,"Ready: %d\n",(uint)*(byte *)((int)this + 0xc));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  return;
}

