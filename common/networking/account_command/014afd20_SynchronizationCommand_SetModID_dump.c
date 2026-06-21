// addr: 0x014afd20
// name: SynchronizationCommand_SetModID_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_SetModID_dump(void * this, void * stream) */

void __thiscall SynchronizationCommand_SetModID_dump(void *this,void *stream)

{
  void *serializer;
  
                    /* Appends a textual/debug dump for SynchronizationCommand_SetModID, including
                       its ModID field. Evidence is the Starting/Ending
                       SynchronizationCommand_SetModID strings and the ModID label. */
  serializer = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting SynchronizationCommand_SetModID\n");
  SynchronizationCommand_serialize(this,stream,(int)serializer);
  DebugStream_writeCString(stream,"ModID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 4));
  DebugStream_writeCString(stream,"Ending SynchronizationCommand_SetModID\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

