// addr: 0x014d4400
// name: GuildCommand_Kick_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_Kick_dump(void * this, void * out) */

void __thiscall GuildCommand_Kick_dump(void *this,void *out)

{
                    /* Writes a debug/text dump of the GuildCommand_Kick command, including member
                       name. Evidence is the command banner and field format strings in the
                       function. */
  FUN_01241650("Guild Kick Guild Command\n",0x19);
  GuildCommand_debugPrint(this,out);
  FUN_01241650("Name: ",6);
  StdString_appendSubstring((int)this + 0xc,0,0xffffffff);
  return;
}

