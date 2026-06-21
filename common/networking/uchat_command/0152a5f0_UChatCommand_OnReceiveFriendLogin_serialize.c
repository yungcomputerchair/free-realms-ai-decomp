// addr: 0x0152a5f0
// name: UChatCommand_OnReceiveFriendLogin_serialize
// subsystem: common/networking/uchat_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UChatCommand_OnReceiveFriendLogin_serialize(void * this, void * stream)
    */

void __thiscall UChatCommand_OnReceiveFriendLogin_serialize(void *this,void *stream)

{
                    /* Serializes an OnReceiveFriendLogin command by writing the inherited
                       UChatCommand fields only. */
  (**(code **)(*(int *)this + 8))(stream);
  UChatCommand_dump(this,stream);
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

