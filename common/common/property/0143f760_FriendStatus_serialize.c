// addr: 0x0143f760
// name: FriendStatus_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FriendStatus_serialize(void * this, void * serializer) */

void __thiscall FriendStatus_serialize(void *this,void *serializer)

{
                    /* Serializes FriendStatus by writing an integer id, three string-like fields,
                       and a final integer/status field between serializer begin/end virtual calls.
                        */
  (**(code **)(*(int *)this + 8))(serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 4));
  Serializer_appendString(serializer,(void *)((int)this + 8));
  Serializer_appendString(serializer,(void *)((int)this + 0x24));
  Serializer_appendString(serializer,(void *)((int)this + 0x40));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x5c));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

