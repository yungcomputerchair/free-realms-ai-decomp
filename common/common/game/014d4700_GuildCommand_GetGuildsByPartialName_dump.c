// addr: 0x014d4700
// name: GuildCommand_GetGuildsByPartialName_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void GuildCommand_GetGuildsByPartialName_dump(void * this, void * out) */

void __thiscall GuildCommand_GetGuildsByPartialName_dump(void *this,void *out)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char local_3ec [1000];
  uint local_4;
  
                    /* Writes a debug/text dump of the GuildCommand_GetGuildsByPartialName command,
                       including partial guild name and number of returned guilds. Evidence is the
                       command banner and field format strings in the function. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("Get Guild By Partial Name Guild Command\n",0x28);
  GuildCommand_debugPrint(this,out);
  if (*(uint *)((int)this + 0x40) < 0x10) {
    iVar3 = (int)this + 0x2c;
  }
  else {
    iVar3 = *(int *)((int)this + 0x2c);
  }
  _sprintf(local_3ec,"Partial Guild Name: %s\n",iVar3);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  if (*(int *)((int)this + 0xc) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)((int)this + 0x10) - *(int *)((int)this + 0xc) >> 2;
  }
  _sprintf(local_3ec,"Guilds: %d of them\n",iVar3);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  return;
}

