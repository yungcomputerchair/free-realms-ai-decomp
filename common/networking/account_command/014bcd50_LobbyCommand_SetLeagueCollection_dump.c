// addr: 0x014bcd50
// name: LobbyCommand_SetLeagueCollection_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SetLeagueCollection_dump(int * this, void * stream) */

void __thiscall LobbyCommand_SetLeagueCollection_dump(void *this,void *stream)

{
  void *vector;
  
                    /* Dumps LobbyCommand_SetLeagueCollection, including league id, a collection/map
                       field, and an additional scalar. */
  vector = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_SetLeagueCollection\n");
  LobbyCommand_dump(this,stream,vector);
  DebugStream_writeCString(stream,"leagueID ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  STLVector_cardInstance_serialize(&stack0x00000000,(void *)((int)this + 0x10),vector);
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(stream,"Ending LobbyCommand_SetLeagueCollection\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

