// addr: 0x013a0f00
// name: CollectionData_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionData_dump(void * this, void * debugStream) */

void __thiscall CollectionData_dump(void *this,void *debugStream)

{
  void *stream;
  
                    /* Dumps CollectionData fields such as id, name, notes, collection map, owner
                       account, type, and mod id. Evidence is the 'Starting CollectionData'/'Ending
                       CollectionData' strings and field labels. */
  if (debugStream == (void *)0x0) {
    debugStream = (void *)0x13a0f1b;
    stream = (void *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream = (void *)(**(code **)(*(int *)this + 8))();
  }
  DebugStream_writeCString(stream,"Starting CollectionData:\n");
  DebugStream_writeCString(stream,"Collection ID: ");
  Serializer_appendString(stream,(void *)((int)this + 4));
  DebugStream_writeCString(stream,"Collection Name: ");
  Serializer_appendString(stream,(void *)((int)this + 0x20));
  DebugStream_writeCString(stream,"Notes: ");
  Serializer_appendString(stream,(void *)((int)this + 0x3c));
  DebugStream_writeCString(stream,"Collection map: ");
  CollectionDataChildMap_serialize(&stack0x00000000,(void *)((int)this + 0x58),debugStream);
  DebugStream_writeCString(stream,"Owner Account ID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 100));
  DebugStream_writeCString(stream,"Owner Account Name: ");
  Serializer_appendString(stream,(void *)((int)this + 0x68));
  DebugStream_writeCString(stream,"Collection Type: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x84));
  DebugStream_writeCString(stream,"Collection ModID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x88));
  DebugStream_writeCString(stream,"Ending CollectionData\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

