// addr: 0x0152a1e0
// name: UChatCommand_OnReceiveFriendLogout_serialize
// subsystem: common/networking/uchat_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UChatCommand_OnReceiveFriendLogout_serialize(void * this, void * stream)
    */

void __thiscall UChatCommand_OnReceiveFriendLogout_serialize(void *this,void *stream)

{
                    /* Serializes an OnReceiveFriendLogout command by writing the inherited
                       UChatCommand fields only. */
  (**(code **)(*(int *)this + 8))(stream);
  UChatCommand_dump(this,stream);
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

