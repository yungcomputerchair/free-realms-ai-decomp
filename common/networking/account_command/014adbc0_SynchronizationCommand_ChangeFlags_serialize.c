// addr: 0x014adbc0
// name: SynchronizationCommand_ChangeFlags_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_ChangeFlags_serialize(int * this, int serializer)
    */

void __thiscall SynchronizationCommand_ChangeFlags_serialize(void *this,int serializer)

{
  void *vector;
  
                    /* Serializes SynchronizationCommand_ChangeFlags with base synchronization data,
                       Instances, Flags, Operation, and AccountID. */
  vector = (void *)serializer;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString((void *)serializer,"Starting SynchronizationCommand_ChangeFlags\n");
  SynchronizationCommand_serialize(this,(int *)serializer,(int)vector);
  DebugStream_writeCString((void *)serializer,"Instances:\n");
  STLVector_cardInstance_serialize(&stack0x00000000,(void *)((int)this + 4),vector);
  DebugStream_writeCString((void *)serializer,"Flags: ");
  Serializer_appendInteger((void *)serializer,*(uint *)((int)this + 0x18));
  DebugStream_writeCString((void *)serializer,"Operation: ");
  Serializer_appendInteger((void *)serializer,*(uint *)((int)this + 0x1c));
  DebugStream_writeCString((void *)serializer,"AccountID: ");
  Serializer_appendInteger((void *)serializer,*(uint *)((int)this + 0x14));
  DebugStream_writeCString((void *)serializer,"Ending SynchronizationCommand_ChangeFlags\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

