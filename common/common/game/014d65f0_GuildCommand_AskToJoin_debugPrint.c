// addr: 0x014d65f0
// name: GuildCommand_AskToJoin_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_AskToJoin_debugPrint(void * this, void * out) */

void GuildCommand_AskToJoin_debugPrint(void *this,void *out)

{
  void *in_ECX;
  
                    /* Appends the 'Ask To Join Guild Guild Command' header and then emits base
                       GuildCommand account-id fields. */
  FUN_01241650("Ask To Join Guild Guild Command\n",0x20);
  GuildCommand_debugPrint(in_ECX,this);
  return;
}

