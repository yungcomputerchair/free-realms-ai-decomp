// addr: 0x01529dd0
// name: UChatCommand_OnReceiveFriendConfirmRequest_serialize
// subsystem: common/networking/uchat_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UChatCommand_OnReceiveFriendConfirmRequest_serialize(void * this, void *
   stream) */

void __thiscall UChatCommand_OnReceiveFriendConfirmRequest_serialize(void *this,void *stream)

{
                    /* Serializes an OnReceiveFriendConfirmRequest command by writing the inherited
                       UChatCommand fields only. */
  (**(code **)(*(int *)this + 8))(stream);
  UChatCommand_dump(this,stream);
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

