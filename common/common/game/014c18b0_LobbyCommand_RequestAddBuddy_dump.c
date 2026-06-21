// addr: 0x014c18b0
// name: LobbyCommand_RequestAddBuddy_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void LobbyCommand_RequestAddBuddy_dump(void * this, void * out) */

void __thiscall LobbyCommand_RequestAddBuddy_dump(void *this,void *out)

{
  char cVar1;
  char *pcVar2;
  char local_3ec [1000];
  uint local_4;
  
                    /* Writes a debug/text dump of the LobbyCommand_RequestAddBuddy command,
                       including target user ID. Evidence is the command banner and field format
                       strings in the function. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("Request Add Buddy Status Lobby Command\n",0x27);
  AccountCommand_dump(this,out);
  _sprintf(local_3ec,"Target User ID: %d\n",*(undefined4 *)((int)this + 8));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  return;
}

