// addr: 0x014d1720
// name: GuildCommand_ShowMOTD_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_ShowMOTD_dump(void * this, void * out) */

void __thiscall GuildCommand_ShowMOTD_dump(void *this,void *out)

{
                    /* Writes a debug/text dump of the GuildCommand_ShowMOTD command, including
                       message text. Evidence is the command banner and field format strings in the
                       function. */
  FUN_01241650("Guild ShowMOTD Guild Command\n",0x1d);
  GuildCommand_debugPrint(this,out);
  FUN_01241650("Message: ",9);
  StdString_appendSubstring((int)this + 0x30,0,0xffffffff);
  return;
}

