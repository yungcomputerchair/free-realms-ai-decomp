// addr: 0x0152afd0
// name: UChatCommand_RequestFriendConfirm_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UChatCommand_RequestFriendConfirm_serialize(void * this, void *
   serializer) */

void __thiscall UChatCommand_RequestFriendConfirm_serialize(void *this,void *serializer)

{
                    /* Serializes a RequestFriendConfirm command by writing the UChatCommand base
                       fields followed by two string fields. It brackets the write with the
                       serializer virtual begin/end calls. */
  (**(code **)(*(int *)this + 8))(serializer);
  UChatCommand_dump(this,serializer);
  Serializer_appendString(serializer,(void *)((int)this + 0x44));
  Serializer_appendString(serializer,(void *)((int)this + 0x60));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

