// addr: 0x014d54a0
// name: GuildCommand_CreateGuild_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_CreateGuild_dump(void * this, void * out) */

void __thiscall GuildCommand_CreateGuild_dump(void *this,void *out)

{
                    /* Writes a debug/text dump of the GuildCommand_CreateGuild command, including
                       guild title, then base guild command fields. Evidence is the command banner
                       and field format strings in the function. */
  FUN_01241650("Create Guild Guild Command\n",0x1b);
  FUN_01241650("Title: ",7);
  StdString_appendSubstring((int)this + 8,0,0xffffffff);
  FUN_01241650(&DAT_01770548,1);
  GuildCommand_debugPrint(this,out);
  return;
}

