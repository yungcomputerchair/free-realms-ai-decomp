// addr: 0x014d50c0
// name: GuildCommand_EndGuilds_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_EndGuilds_debugPrint(void * this, void * out) */

void GuildCommand_EndGuilds_debugPrint(void *this,void *out)

{
  void *in_ECX;
  
                    /* Appends the 'End Guilds Guild Command' header and then emits base
                       GuildCommand account-id fields. */
  FUN_01241650("End Guilds Guild Command\n",0x19);
  GuildCommand_debugPrint(in_ECX,this);
  return;
}

