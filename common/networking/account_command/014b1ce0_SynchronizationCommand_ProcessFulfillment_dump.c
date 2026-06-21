// addr: 0x014b1ce0
// name: SynchronizationCommand_ProcessFulfillment_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_ProcessFulfillment_dump(void * this, void *
   stream) */

void __thiscall SynchronizationCommand_ProcessFulfillment_dump(void *this,void *stream)

{
  void *serializer;
  
                    /* Appends a textual/debug dump for SynchronizationCommand_ProcessFulfillment,
                       including the Instance-related fields. Evidence is the Starting/Ending
                       SynchronizationCommand_ProcessFulfillment strings and Instance label. */
  serializer = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting SynchronizationCommand_ProcessFulfillment\n");
  SynchronizationCommand_serialize(this,stream,(int)serializer);
  DebugStream_writeCString(stream,"Instance: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x10));
  DebugStream_writeCString(stream,"Ending SynchronizationCommand_ProcessFulfillment\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

