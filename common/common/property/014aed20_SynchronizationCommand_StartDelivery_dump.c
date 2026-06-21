// addr: 0x014aed20
// name: SynchronizationCommand_StartDelivery_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_StartDelivery_dump(void * this, void *
   debug_stream) */

void __thiscall SynchronizationCommand_StartDelivery_dump(void *this,void *debug_stream)

{
  void *vector;
  
                    /* Writes all fields of SynchronizationCommand_StartDelivery to a debug stream,
                       including archetype count, collection mod id, delivery and transaction
                       identifiers, and two card-instance vectors. */
  vector = debug_stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(debug_stream,"Starting SynchronizationCommand_StartDelivery\n");
  SynchronizationCommand_serialize(this,debug_stream,(int)vector);
  DebugStream_writeCString(debug_stream,"Archetype Count: ");
  Serializer_appendInteger(debug_stream,*(uint *)((int)this + 4));
  DebugStream_writeCString(debug_stream,"CollectionModID: ");
  Serializer_appendInteger(debug_stream,*(uint *)((int)this + 0x34));
  DebugStream_writeCString(debug_stream,"Silent: ");
  Serializer_appendInteger(debug_stream,(uint)*(byte *)((int)this + 0x38));
  DebugStream_writeCString(debug_stream,"Delivery ID: ");
  Serializer_appendInteger(debug_stream,*(uint *)((int)this + 8));
  DebugStream_writeCString(debug_stream,"Transaction ID: ");
  Serializer_appendInteger(debug_stream,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(debug_stream,"Transaction Source: ");
  Serializer_appendString(debug_stream,(void *)((int)this + 0x10));
  DebugStream_writeCString(debug_stream,"Transaction Source ID: ");
  Serializer_appendInteger(debug_stream,*(uint *)((int)this + 0x2c));
  DebugStream_writeCString(debug_stream,"Transaction Source ID 2: ");
  Serializer_appendInteger(debug_stream,*(uint *)((int)this + 0x30));
  STLVector_cardInstance_serialize(&stack0x00000000,(void *)((int)this + 0x3c),vector);
  STLVector_cardInstance_serialize(&stack0x00000000,(void *)((int)this + 0x4c),vector);
  DebugStream_writeCString(debug_stream,"Ending SynchronizationCommand_StartDelivery\n");
  (**(code **)(*(int *)this + 0xc))(debug_stream);
  return;
}

