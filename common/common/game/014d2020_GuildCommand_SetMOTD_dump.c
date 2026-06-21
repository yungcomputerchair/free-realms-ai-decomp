// addr: 0x014d2020
// name: GuildCommand_SetMOTD_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_SetMOTD_dump(void * this, void * out) */

void __thiscall GuildCommand_SetMOTD_dump(void *this,void *out)

{
                    /* Writes a debug/text dump of the GuildCommand_SetMOTD command, including MOTD
                       text. Evidence is the command banner and field format strings in the
                       function. */
  FUN_01241650("Guild SetMOTD Guild Command\n",0x1c);
  GuildCommand_debugPrint(this,out);
  FUN_01241650("Text: ",6);
  StdString_appendSubstring((int)this + 0xc,0,0xffffffff);
  return;
}

