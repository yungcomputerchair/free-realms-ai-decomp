// addr: 0x0152a900
// name: UChatCommand_OnReceiveFriendLogin_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UChatCommand_OnReceiveFriendLogin_serialize(void * this, void *
   serializer) */

void __thiscall UChatCommand_OnReceiveFriendLogin_serialize(void *this,void *serializer)

{
                    /* Serializes UChatCommand_OnReceiveFriendLogin: calls the base serializer then
                       appends an integer, two string/buffer members, and a byte flag. */
  (**(code **)(*(int *)this + 8))(serializer);
  UChatCommand_dump(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x44));
  Serializer_appendString(serializer,(void *)((int)this + 0x4c));
  Serializer_appendString(serializer,(void *)((int)this + 0x68));
  Serializer_appendInteger(serializer,(uint)*(byte *)((int)this + 0x48));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

