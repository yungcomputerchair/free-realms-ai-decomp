// addr: 0x013b42d0
// name: LobbyCommand_SendText_printDebug
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void LobbyCommand_SendText_printDebug(void * this, void * out) */

void __thiscall LobbyCommand_SendText_printDebug(void *this,void *out)

{
  char cVar1;
  char *pcVar2;
  char local_3ec [1000];
  uint local_4;
  
                    /* Prints a Send Text Lobby Command debug dump with group id, target user id,
                       text disposition, quick-chat flag, chat id, and text payload. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("Send Text Lobby Command\n",0x18);
  AccountCommand_dump(this,out);
  _sprintf(local_3ec,"GroupID: %d\n",*(undefined4 *)((int)this + 8));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  _sprintf(local_3ec,"Target User ID: %d\n",*(undefined4 *)((int)this + 0xc));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  _sprintf(local_3ec,"Text disposition: %d\n",*(undefined4 *)((int)this + 0x10));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  _sprintf(local_3ec,"Is Quick Chat: %d\n",(uint)*(byte *)((int)this + 0x30));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  _sprintf(local_3ec,"Chat ID: %d\n",*(undefined4 *)((int)this + 0x34));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  FUN_01241650("Text: ",6);
  StdString_appendSubstring((int)this + 0x14,0,0xffffffff);
  FUN_01241650(&DAT_01770548,1);
  return;
}

