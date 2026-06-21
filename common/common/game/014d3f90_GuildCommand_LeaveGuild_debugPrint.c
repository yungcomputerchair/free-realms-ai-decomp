// addr: 0x014d3f90
// name: GuildCommand_LeaveGuild_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_LeaveGuild_debugPrint(void * this, void * out) */

void GuildCommand_LeaveGuild_debugPrint(void *this,void *out)

{
  void *in_ECX;
  
                    /* Appends the 'Leave Guild Guild Command' header and then emits base
                       GuildCommand account-id fields. */
  FUN_01241650("Leave Guild Guild Command\n",0x1a);
  GuildCommand_debugPrint(in_ECX,this);
  return;
}

