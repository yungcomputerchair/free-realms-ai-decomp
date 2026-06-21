// addr: 0x01529540
// name: UChatCommand_OnReceiveFriendConfirmResponse_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UChatCommand_OnReceiveFriendConfirmResponse_serialize(void * this, void *
   archive) */

void __thiscall UChatCommand_OnReceiveFriendConfirmResponse_serialize(void *this,void *archive)

{
                    /* Serializes the friend-confirm response command by serializing its base UChat
                       command state and appending the boolean response byte at offset 0x44. */
  (**(code **)(*(int *)this + 8))(archive);
  UChatCommand_dump(this,archive);
  Serializer_appendInteger(archive,(uint)*(byte *)((int)this + 0x44));
  (**(code **)(*(int *)this + 0xc))(archive);
  return;
}

