// addr: 0x014ba8f0
// name: LobbyCommand_UpdateTournament_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void LobbyCommand_UpdateTournament_dump(void * this, void * out) */

void __thiscall LobbyCommand_UpdateTournament_dump(void *this,void *out)

{
  char cVar1;
  char *pcVar2;
  char local_3ec [1000];
  uint local_4;
  
                    /* Writes a debug/text dump of the LobbyCommand_UpdateTournament command,
                       including group ID, tournament ID, round, and substate. Evidence is the
                       command banner and field format strings in the function. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("Change Lobby display Lobby Command\n",0x23);
  AccountCommand_dump(this,out);
  _sprintf(local_3ec,"Group ID: %d\n",*(undefined4 *)((int)this + 0x1c));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  _sprintf(local_3ec,"Tournament ID: %d\n",*(undefined4 *)((int)this + 8));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  _sprintf(local_3ec,"Round: %d\n",*(undefined4 *)((int)this + 0x20));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  _sprintf(local_3ec,"SubState: %d\n",*(undefined4 *)((int)this + 0x24));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  return;
}

