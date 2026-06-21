// addr: 0x013ee2a0
// name: NetworkCommand_RequestData_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_RequestData_dump(void * this, void * serializer) */

void __thiscall NetworkCommand_RequestData_dump(void *this,void *serializer)

{
                    /* Dumps NetworkCommand_RequestData, emits base NetworkCommand fields, labels
                       the Message field, writes one integer, and closes with a named debug string.
                       Evidence is exact "Starting/Ending NetworkCommand_RequestData" and "Message:"
                       strings. */
  (**(code **)(*(int *)this + 8))(serializer);
  DebugStream_writeCString(serializer,"Starting NetworkCommand_RequestData\n");
  NetworkCommand_dump(this,serializer);
  DebugStream_writeCString(serializer,"Message:\n");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 4));
  DebugStream_writeCString(serializer,"Ending NetworkCommand_RequestData\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

