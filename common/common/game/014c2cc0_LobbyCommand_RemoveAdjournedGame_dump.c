// addr: 0x014c2cc0
// name: LobbyCommand_RemoveAdjournedGame_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void LobbyCommand_RemoveAdjournedGame_dump(void * this, void * out) */

void __thiscall LobbyCommand_RemoveAdjournedGame_dump(void *this,void *out)

{
  char cVar1;
  char *pcVar2;
  char local_3f0 [1004];
  uint local_4;
  
                    /* Writes a debug/text dump of the LobbyCommand_RemoveAdjournedGame command,
                       including match ID and game ID. Evidence is the command banner and field
                       format strings in the function. */
  local_4 = DAT_01b839d8 ^ (uint)local_3f0;
  FUN_01241650("Remove Adjourned Game Account Command\n",0x26);
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
  return;
}

