// addr: 0x015299c0
// name: UChatCommand_OnReceiveFriendConfirmReciprocateRequest_serialize
// subsystem: common/networking/uchat_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UChatCommand_OnReceiveFriendConfirmReciprocateRequest_serialize(void *
   this, void * stream) */

void __thiscall
UChatCommand_OnReceiveFriendConfirmReciprocateRequest_serialize(void *this,void *stream)

{
                    /* Serializes an OnReceiveFriendConfirmReciprocateRequest command by writing the
                       inherited UChatCommand fields only. */
  (**(code **)(*(int *)this + 8))(stream);
  UChatCommand_dump(this,stream);
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

