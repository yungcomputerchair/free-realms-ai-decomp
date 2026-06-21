// addr: 0x0152b630
// name: UChatCommand_RequestSetFriendComment_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UChatCommand_RequestSetFriendComment_serialize(void * this, void *
   serializer) */

void __thiscall UChatCommand_RequestSetFriendComment_serialize(void *this,void *serializer)

{
                    /* Serializes RequestSetFriendComment by writing UChatCommand base fields and
                       three string fields. */
  (**(code **)(*(int *)this + 8))(serializer);
  UChatCommand_dump(this,serializer);
  Serializer_appendString(serializer,(void *)((int)this + 0x44));
  Serializer_appendString(serializer,(void *)((int)this + 0x60));
  Serializer_appendString(serializer,(void *)((int)this + 0x7c));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

