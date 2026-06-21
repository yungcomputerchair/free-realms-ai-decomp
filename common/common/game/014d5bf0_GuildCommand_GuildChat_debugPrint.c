// addr: 0x014d5bf0
// name: GuildCommand_GuildChat_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void GuildCommand_GuildChat_debugPrint(void * this, void * out) */

void __thiscall GuildCommand_GuildChat_debugPrint(void *this,void *out)

{
  char cVar1;
  char *pcVar2;
  char local_3ec [1000];
  uint local_4;
  
                    /* Debug-prints a guild chat command: target account id, text disposition, and
                       chat text. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("Guild Chat Guild Command\n",0x19);
  GuildCommand_debugPrint(this,out);
  _sprintf(local_3ec,"Target Account ID: %d\n",*(undefined4 *)((int)this + 0xc));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  _sprintf(local_3ec,"Text disposition: %d\n",*(undefined4 *)((int)this + 0x14));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  FUN_01241650("Text: ",6);
  StdString_appendSubstring((int)this + 0x18,0,0xffffffff);
  FUN_01241650(&DAT_01770548,1);
  return;
}

