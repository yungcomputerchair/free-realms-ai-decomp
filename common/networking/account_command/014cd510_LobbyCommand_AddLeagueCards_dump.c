// addr: 0x014cd510
// name: LobbyCommand_AddLeagueCards_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_AddLeagueCards_dump(int * this, void * stream) */

void __thiscall LobbyCommand_AddLeagueCards_dump(void *this,void *stream)

{
  void *vector;
  
                    /* Dumps LobbyCommand_AddLeagueCards with base LobbyCommand data, league id, and
                       a card pair/map collection. */
  vector = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_AddLeagueCards\n");
  LobbyCommand_dump(this,stream,vector);
  DebugStream_writeCString(stream,"leagueID ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  STLVector_cardInstance_serialize(&stack0x00000000,(void *)((int)this + 0xc),vector);
  DebugStream_writeCString(stream,"Ending LobbyCommand_AddLeagueCards\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

