// addr: 0x0152d2a0
// name: EventCommand_SendEventPlayerFlags_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_SendEventPlayerFlags_serialize(void * this, void *
   serializer) */

void __thiscall EventCommand_SendEventPlayerFlags_serialize(void *this,void *serializer)

{
  void *map;
  
                    /* Serializes SendEventPlayerFlags by writing the SerializableIntField base
                       followed by a container at this+2. The helper at 01351620 handles the nested
                       flag collection. */
  map = serializer;
  (**(code **)(*(int *)this + 8))();
  SerializableIntField_serialize(this,serializer);
  STLMap_dwordPair_serialize(&stack0x00000000,(void *)((int)this + 8),map);
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

