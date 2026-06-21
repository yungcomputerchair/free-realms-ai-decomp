// addr: 0x014b04f0
// name: SynchronizationCommand_SendInstances_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_SendInstances_dump(int * this, void * stream) */

void __thiscall SynchronizationCommand_SendInstances_dump(void *this,void *stream)

{
  void *vector;
  
                    /* Dumps SynchronizationCommand_SendInstances to a text/debug stream, including
                       base archetype, archetype count, instance lists, non-tradable instances, and
                       delivery id. */
  vector = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting SynchronizationCommand_SendInstances\n");
  SynchronizationCommand_serialize(this,stream,(int)vector);
  DebugStream_writeCString(stream,"Base Archetype ID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  DebugStream_writeCString(stream,"Archetype Count: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(stream,"Instances:\n");
  STLVector_cardInstance_serialize(&stack0x00000000,(void *)((int)this + 0x10),vector);
  DebugStream_writeCString(stream,"NonTradable Instances: \n");
  STLVector_cardInstance_serialize(&stack0x00000000,(void *)((int)this + 0x24),vector);
  DebugStream_writeCString(stream,"Delivery ID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 4));
  DebugStream_writeCString(stream,"Ending SynchronizationCommand_SendInstances\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

