// addr: 0x014cdd80
// name: LobbyCommand_AddIgnoreByNameResponse_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_AddIgnoreByNameResponse_dump(void * this, void *
   debugStream) */

void __thiscall LobbyCommand_AddIgnoreByNameResponse_dump(void *this,void *debugStream)

{
  void *pvVar1;
  
                    /* Dumps LobbyCommand_AddIgnoreByNameResponse with ignored account id, name,
                       result code, and explanation. Evidence is 'Starting/Ending
                       LobbyCommand_AddIgnoreByNameResponse' and field labels. */
  pvVar1 = debugStream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(debugStream,"Starting LobbyCommand_AddIgnoreByNameResponse\n");
  LobbyCommand_dump(this,debugStream,pvVar1);
  DebugStream_writeCString(debugStream,"Ignore Account ID: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 8));
  DebugStream_writeCString(debugStream,"Ignore Name: ");
  Serializer_appendString(debugStream,(void *)((int)this + 0xc));
  DebugStream_writeCString(debugStream,"Results: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x28));
  DebugStream_writeCString(debugStream,"Explanation: ");
  Serializer_appendString(debugStream,(void *)((int)this + 0x2c));
  DebugStream_writeCString(debugStream,"Ending LobbyCommand_AddIgnoreByNameResponse\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

