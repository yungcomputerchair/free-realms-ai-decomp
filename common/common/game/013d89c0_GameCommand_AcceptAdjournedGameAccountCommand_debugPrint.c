// addr: 0x013d89c0
// name: GameCommand_AcceptAdjournedGameAccountCommand_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void GameCommand_AcceptAdjournedGameAccountCommand_debugPrint(void * this,
   void * printer) */

void __thiscall GameCommand_AcceptAdjournedGameAccountCommand_debugPrint(void *this,void *printer)

{
  char cVar1;
  char *pcVar2;
  char local_3f0 [1004];
  uint local_4;
  
                    /* Debug-prints an Accept Adjourned Game Account Command with match id, game id,
                       accept flag, and current lobby. */
  local_4 = DAT_01b839d8 ^ (uint)local_3f0;
  FUN_01241650("Accept Adjourned Game Account Command\n",0x26);
  AccountCommand_dump(this,printer);
  _sprintf(local_3f0,"MatchID: %d\n",*(undefined4 *)((int)this + 0xc));
  pcVar2 = local_3f0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f0,(int)pcVar2 - (int)(local_3f0 + 1));
  _sprintf(local_3f0,"GameID: %d\n",*(undefined4 *)((int)this + 8));
  pcVar2 = local_3f0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f0,(int)pcVar2 - (int)(local_3f0 + 1));
  _sprintf(local_3f0,"Accept: %d\n",(uint)*(byte *)((int)this + 0x10));
  pcVar2 = local_3f0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f0,(int)pcVar2 - (int)(local_3f0 + 1));
  _sprintf(local_3f0,"CurrentLobby: %d\n",*(undefined4 *)((int)this + 0x14));
  pcVar2 = local_3f0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f0,(int)pcVar2 - (int)(local_3f0 + 1));
  return;
}

