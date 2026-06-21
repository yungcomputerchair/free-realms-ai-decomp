// addr: 0x013d94d0
// name: LobbyCommand_DeleteAdjournedGame_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void LobbyCommand_DeleteAdjournedGame_dump(void * this, void * out) */

void __thiscall LobbyCommand_DeleteAdjournedGame_dump(void *this,void *out)

{
  char cVar1;
  char *pcVar2;
  char local_3f0 [1004];
  uint local_4;
  
                    /* Writes a text dump for Delete Adjourned Game lobby commands, after the
                       LobbyCommand base dump, showing match, game, and lobby IDs. */
  local_4 = DAT_01b839d8 ^ (uint)local_3f0;
  FUN_01241650("Delete Adjourned Game Lobby Command\n",0x24);
  AccountCommand_dump(this,out);
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
  _sprintf(local_3f0,"LobbyID: %d\n",*(undefined4 *)((int)this + 0x10));
  pcVar2 = local_3f0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f0,(int)pcVar2 - (int)(local_3f0 + 1));
  return;
}

