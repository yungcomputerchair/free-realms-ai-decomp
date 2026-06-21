// addr: 0x014ce690
// name: LobbyCommand_AddIgnoreByName_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void LobbyCommand_AddIgnoreByName_dump(void * this, void * out) */

void __thiscall LobbyCommand_AddIgnoreByName_dump(void *this,void *out)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char local_3ec [1000];
  uint local_4;
  
                    /* Writes a debug/text dump of the LobbyCommand_AddIgnoreByName command,
                       including ignore name. Evidence is the command banner and field format
                       strings in the function. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("Add Ignore By Name Lobby Command\n",0x21);
  AccountCommand_dump(this,out);
  if (*(uint *)((int)this + 0x20) < 0x10) {
    iVar3 = (int)this + 0xc;
  }
  else {
    iVar3 = *(int *)((int)this + 0xc);
  }
  _sprintf(local_3ec,"Ignore Name: %s\n",iVar3);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  return;
}

