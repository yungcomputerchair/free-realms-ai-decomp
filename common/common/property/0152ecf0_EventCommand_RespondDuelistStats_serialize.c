// addr: 0x0152ecf0
// name: EventCommand_RespondDuelistStats_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RespondDuelistStats_serialize(void * this, void *
   serializer) */

void __thiscall EventCommand_RespondDuelistStats_serialize(void *this,void *serializer)

{
  void *map;
  
                    /* Serializes RespondDuelistStats by writing base data, four integer fields, and
                       an int-to-int-vector map. */
  map = serializer;
  (**(code **)(*(int *)this + 8))();
  SerializableIntField_serialize(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x10));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x14));
  STLMap_intToIntVector_serialize(&stack0x00000000,(void *)((int)this + 0x18),map);
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

