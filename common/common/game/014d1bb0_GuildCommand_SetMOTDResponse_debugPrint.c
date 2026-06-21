// addr: 0x014d1bb0
// name: GuildCommand_SetMOTDResponse_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_SetMOTDResponse_debugPrint(void * this, void * out) */

void GuildCommand_SetMOTDResponse_debugPrint(void *this,void *out)

{
  void *in_ECX;
  
                    /* Appends the 'Guild Set MOTD Response Guild Command' header and then emits
                       base GuildCommand account-id fields. */
  FUN_01241650("Guild Set MOTD Response Guild Command\n",0x26);
  GuildCommand_debugPrint(in_ECX,this);
  return;
}

