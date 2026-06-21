// addr: 0x014d2400
// name: GuildCommand_SetListenStatus_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_SetListenStatus_debugPrint(void * this, void * out) */

void GuildCommand_SetListenStatus_debugPrint(void *this,void *out)

{
  void *in_ECX;
  
                    /* Appends the 'Set Listen Status Guild Command' header and then emits base
                       GuildCommand account-id fields. */
  FUN_01241650("Set Listen Status Guild Command\n",0x20);
  GuildCommand_debugPrint(in_ECX,this);
  return;
}

