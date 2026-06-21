// addr: 0x014c6290
// name: LobbyCommand_ChangeLobbyDisplay_debugPrintBrief
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void LobbyCommand_ChangeLobbyDisplay_dump(void * this, void * out) */

void __thiscall LobbyCommand_ChangeLobbyDisplay_debugPrintBrief(void *this,void *out)

{
  char cVar1;
  char *pcVar2;
  char local_3ec [1000];
  uint local_4;
  
                    /* Writes a debug/text dump of the LobbyCommand_ChangeLobbyDisplay command,
                       including group ID. Evidence is the command banner and field format strings
                       in the function. [QA: dumps header + Group ID only; vftable 0x01902928] */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("Change Lobby display Lobby Command\n",0x23);
  AccountCommand_dump(this,out);
  _sprintf(local_3ec,"Group ID: %d\n",*(undefined4 *)((int)this + 8));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  return;
}

