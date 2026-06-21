// addr: 0x014ce180
// name: LobbyCommand_AddIgnoreByNameResponse_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void LobbyCommand_AddIgnoreByNameResponse_dump(void * this, void * out) */

void __thiscall LobbyCommand_AddIgnoreByNameResponse_dump(void *this,void *out)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char local_3ec [1000];
  uint local_4;
  
                    /* Writes a debug/text dump of the LobbyCommand_AddIgnoreByNameResponse command,
                       including ignore account ID, ignore name, result code, and explanation
                       string. Evidence is the command banner and field format strings in the
                       function. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("Add Ignore By Name Response Lobby Command\n",0x2a);
  AccountCommand_dump(this,out);
  _sprintf(local_3ec,"Ignore Account ID: %d\n",*(undefined4 *)((int)this + 8));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  if (*(uint *)((int)this + 0x24) < 0x10) {
    iVar3 = (int)this + 0x10;
  }
  else {
    iVar3 = *(int *)((int)this + 0x10);
  }
  _sprintf(local_3ec,"Ignore Name: %s\n",iVar3);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  _sprintf(local_3ec,"Results: %d\n",*(undefined4 *)((int)this + 0x28));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  if (*(uint *)((int)this + 0x44) < 0x10) {
    iVar3 = (int)this + 0x30;
  }
  else {
    iVar3 = *(int *)((int)this + 0x30);
  }
  _sprintf(local_3ec,"Explanation: %s\n",iVar3);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  return;
}

