// addr: 0x014d03c0
// name: GuildCommand_TransferGuild_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_TransferGuild_debugPrint(void * this, void * out) */

void GuildCommand_TransferGuild_debugPrint(void *this,void *out)

{
  void *in_ECX;
  
                    /* Appends the 'Transfer Guild Guild Command' header and then emits base
                       GuildCommand account-id fields. */
  FUN_01241650("Transfer Guild Guild Command\n",0x1d);
  GuildCommand_debugPrint(in_ECX,this);
  return;
}

