// addr: 0x014c4b30
// name: LobbyCommand_DisplayStats_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_DisplayStats_dump(void * this, void * debug_stream) */

void __thiscall LobbyCommand_DisplayStats_dump(void *this,void *debug_stream)

{
  void *map;
  
                    /* Dumps LobbyCommand_DisplayStats fields such as group id, tournament id,
                       round, message, duration, message argument, and an int/string stats map. */
  map = debug_stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(debug_stream,"Starting LobbyCommand_DisplayStats\n");
  LobbyCommand_dump(this,debug_stream,map);
  DebugStream_writeCString(debug_stream,"groupID");
  Serializer_appendInteger(debug_stream,*(uint *)((int)this + 0x24));
  DebugStream_writeCString(debug_stream,"TournamentID ");
  Serializer_appendInteger(debug_stream,*(uint *)((int)this + 8));
  DebugStream_writeCString(debug_stream,"Round ");
  Serializer_appendInteger(debug_stream,*(uint *)((int)this + 0x1c));
  FUN_01400b20((int)this + 0xc);
  DebugStream_writeCString(debug_stream,"Message: ");
  Serializer_appendInteger(debug_stream,*(uint *)((int)this + 0x20));
  DebugStream_writeCString(debug_stream,"Duration: ");
  Serializer_appendInteger(debug_stream,*(uint *)((int)this + 0x28));
  DebugStream_writeCString(debug_stream,"MessageArg: ");
  Serializer_appendString(debug_stream,(void *)((int)this + 0x2c));
  LobbyCommand_DisplayStats_serializeIntStringMap(&stack0x00000000,(void *)((int)this + 0x48),map);
  DebugStream_writeCString(debug_stream,"Ending LobbyCommand_DisplayStats\n");
  (**(code **)(*(int *)this + 0xc))(debug_stream);
  return;
}

