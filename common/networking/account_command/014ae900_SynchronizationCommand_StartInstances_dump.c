// addr: 0x014ae900
// name: SynchronizationCommand_StartInstances_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_StartInstances_dump(void * this, void * stream) */

void __thiscall SynchronizationCommand_StartInstances_dump(void *this,void *stream)

{
  void *serializer;
  
                    /* Appends a textual/debug dump for SynchronizationCommand_StartInstances,
                       including account id, collection type, archetype count, and collection mod
                       id. Evidence is the Starting/Ending SynchronizationCommand_StartInstances
                       strings and labeled field strings. */
  serializer = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting SynchronizationCommand_StartInstances\n");
  SynchronizationCommand_serialize(this,stream,(int)serializer);
  DebugStream_writeCString(stream,"AccountID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 4));
  DebugStream_writeCString(stream,"Collection Type: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  DebugStream_writeCString(stream,"Archetype Count: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(stream,"CollectionModID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x10));
  DebugStream_writeCString(stream,"Ending SynchronizationCommand_StartInstances\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

