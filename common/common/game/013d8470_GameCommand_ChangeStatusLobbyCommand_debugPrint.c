// addr: 0x013d8470
// name: GameCommand_ChangeStatusLobbyCommand_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void GameCommand_ChangeStatusLobbyCommand_debugPrint(void * this, void *
   printer) */

void __thiscall GameCommand_ChangeStatusLobbyCommand_debugPrint(void *this,void *printer)

{
  char cVar1;
  char *pcVar2;
  char local_3ec [1000];
  uint local_4;
  
                    /* Debug-prints a Change Status Lobby Command and its lobby status value. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("Change Status Lobby Command\n",0x1c);
  AccountCommand_dump(this,printer);
  _sprintf(local_3ec,"Lobby Status: %d\n",*(undefined4 *)((int)this + 8));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  return;
}

