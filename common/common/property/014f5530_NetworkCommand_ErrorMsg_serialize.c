// addr: 0x014f5530
// name: NetworkCommand_ErrorMsg_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_ErrorMsg_serialize(void * this, void * serializer) */

void __thiscall NetworkCommand_ErrorMsg_serialize(void *this,void *serializer)

{
                    /* Serializes/dumps NetworkCommand_ErrorMsg by writing the base network command,
                       error message string, and error code. Evidence is the ErrorMsg and ErrorCode
                       labels. */
  (**(code **)(*(int *)this + 8))(serializer);
  DebugStream_writeCString(serializer,"Starting NetworkCommand_ErrorMsg\n");
  NetworkCommand_dump(this,serializer);
  DebugStream_writeCString(serializer,"ErrorMsg:\n");
  Serializer_appendString(serializer,(void *)((int)this + 4));
  DebugStream_writeCString(serializer,"ErrorCode:\n");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x20));
  DebugStream_writeCString(serializer,"Ending NetworkCommand_ErrorMsg\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

