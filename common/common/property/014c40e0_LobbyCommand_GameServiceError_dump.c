// addr: 0x014c40e0
// name: LobbyCommand_GameServiceError_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_GameServiceError_dump(void * this, void * debugStream) */

void __thiscall LobbyCommand_GameServiceError_dump(void *this,void *debugStream)

{
  void *pvVar1;
  
                    /* Dumps LobbyCommand_GameServiceError with group id, type, and explanation
                       string. Evidence is 'Starting/Ending LobbyCommand_GameServiceError' and field
                       labels. */
  pvVar1 = debugStream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(debugStream,"Starting LobbyCommand_GameServiceError\n");
  LobbyCommand_dump(this,debugStream,pvVar1);
  DebugStream_writeCString(debugStream,"GroupID: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(debugStream,"Type: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 8));
  DebugStream_writeCString(debugStream,"Explanation: ");
  Serializer_appendString(debugStream,(void *)((int)this + 0x10));
  DebugStream_writeCString(debugStream,"Ending LobbyCommand_GameServiceError\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

