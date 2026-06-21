// addr: 0x014d2c50
// name: GuildCommand_Remove_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_Remove_debugPrint(void * this, void * out) */

void GuildCommand_Remove_debugPrint(void *this,void *out)

{
  void *in_ECX;
  
                    /* Appends the 'Remove Guild Command' header and then emits base GuildCommand
                       account-id fields. */
  FUN_01241650("Remove Guild Command\n",0x15);
  GuildCommand_debugPrint(in_ECX,this);
  return;
}

