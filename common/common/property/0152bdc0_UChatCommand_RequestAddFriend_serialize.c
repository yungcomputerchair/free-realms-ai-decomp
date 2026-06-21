// addr: 0x0152bdc0
// name: UChatCommand_RequestAddFriend_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UChatCommand_RequestAddFriend_serialize(void * this, void * serializer)
    */

void __thiscall UChatCommand_RequestAddFriend_serialize(void *this,void *serializer)

{
                    /* Serializes RequestAddFriend by writing UChatCommand base fields, three
                       strings, and a boolean/integer flag. */
  (**(code **)(*(int *)this + 8))(serializer);
  UChatCommand_dump(this,serializer);
  Serializer_appendString(serializer,(void *)((int)this + 0x44));
  Serializer_appendString(serializer,(void *)((int)this + 0x60));
  Serializer_appendString(serializer,(void *)((int)this + 0x7c));
  Serializer_appendInteger(serializer,(uint)*(byte *)((int)this + 0x98));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

