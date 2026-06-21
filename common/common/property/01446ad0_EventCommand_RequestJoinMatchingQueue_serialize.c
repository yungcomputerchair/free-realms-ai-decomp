// addr: 0x01446ad0
// name: EventCommand_RequestJoinMatchingQueue_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RequestJoinMatchingQueue_serialize(void * this, void *
   serializer) */

void __thiscall EventCommand_RequestJoinMatchingQueue_serialize(void *this,void *serializer)

{
  int *piVar1;
  bool bVar2;
  void *map;
  
                    /* Serializes EventCommand_RequestJoinMatchingQueue: base
                       SerializableIntField/EventCommand data, a string, integer, optional embedded
                       object, and an int-to-int-vector map. Evidence is the nearby
                       RequestJoinMatchingQueue factory/ctor and SerializableIntField_serialize
                       call. */
  map = serializer;
  (**(code **)(*(int *)this + 8))();
  SerializableIntField_serialize(this,serializer);
  Serializer_appendString(serializer,(void *)((int)this + 8));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x28));
  piVar1 = *(int **)((int)this + 0x24);
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger(serializer,1);
  }
  else {
    bVar2 = Serializer_appendInteger(serializer,0);
    if (bVar2) {
      (**(code **)(*piVar1 + 0x28))(serializer);
    }
  }
  STLMap_intToIntVector_serialize(&stack0x00000000,(void *)((int)this + 0x2c),map);
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

