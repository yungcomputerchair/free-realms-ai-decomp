// addr: 0x014d6100
// name: GuildCommand_AskToJoinResponse_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_AskToJoinResponse_debugPrint(void * this, void * out) */

void GuildCommand_AskToJoinResponse_debugPrint(void *this,void *out)

{
  void *in_ECX;
  
                    /* Appends the 'Ask To Join Guild Response Guild Command' header and then emits
                       base GuildCommand account-id fields. */
  FUN_01241650("Ask To Join Guild Response Guild Command\n",0x29);
  GuildCommand_debugPrint(in_ECX,this);
  return;
}

