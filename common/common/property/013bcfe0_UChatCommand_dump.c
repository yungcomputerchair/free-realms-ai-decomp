// addr: 0x013bcfe0
// name: UChatCommand_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UChatCommand_dump(void * this, void * debugStream) */

void __thiscall UChatCommand_dump(void *this,void *debugStream)

{
                    /* Dumps base UChatCommand fields: account id, result, source avatar name, and
                       source address. Evidence is the 'Starting UChatCommand'/'Ending UChatCommand'
                       strings and many UChat subclass callers. */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting UChatCommand\n");
  NetworkCommand_dump(this,debugStream);
  DebugStream_writeCString(debugStream,"AccountID: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 4));
  DebugStream_writeCString(debugStream,"Result: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 8));
  DebugStream_writeCString(debugStream,"SourceAvatarName: ");
  Serializer_appendString(debugStream,(void *)((int)this + 0xc));
  DebugStream_writeCString(debugStream,"SourceAddress: ");
  Serializer_appendString(debugStream,(void *)((int)this + 0x28));
  DebugStream_writeCString(debugStream,"Ending UChatCommand\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

