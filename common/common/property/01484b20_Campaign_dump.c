// addr: 0x01484b20
// name: Campaign_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Campaign_dump(void * this, void * debugStream) */

void __thiscall Campaign_dump(void *this,void *debugStream)

{
  void *stream;
  
                    /* Dumps a Campaign with archetype id, enabled/premium flags, title, image,
                       description, account key, and related serializable list. Evidence is
                       'Starting/Ending Campaign' and field labels. */
  stream = (void *)(**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(stream,"Starting Campaign\n");
  DebugStream_writeCString(stream,"ID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 4));
  DebugStream_writeCString(stream,"Enabled: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 8));
  DebugStream_writeCString(stream,"Title: ");
  Serializer_appendString(stream,(void *)((int)this + 0xc));
  DebugStream_writeCString(stream,"ImageName: ");
  Serializer_appendString(stream,(void *)((int)this + 0x28));
  DebugStream_writeCString(stream,"Description: ");
  Serializer_appendString(stream,(void *)((int)this + 0x44));
  Campaign_unknownSerializableList_serialize(&stack0x00000000,(int)this + 0x60);
  DebugStream_writeCString(stream,"AccountKey: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x70));
  DebugStream_writeCString(stream,"Premium Only: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 9));
  DebugStream_writeCString(stream,"Archetype ID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x74));
  DebugStream_writeCString(stream,"Ending Campaign\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

