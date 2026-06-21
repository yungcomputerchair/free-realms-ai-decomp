// addr: 0x014bd610
// name: LobbyCommand_SetLeagueCards_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SetLeagueCards_dump(int * this, void * stream) */

void __thiscall LobbyCommand_SetLeagueCards_dump(void *this,void *stream)

{
  void *map;
  
                    /* Dumps LobbyCommand_SetLeagueCards with base LobbyCommand data, league id, and
                       the league cards collection. */
  map = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_SetLeagueCards\n");
  LobbyCommand_dump(this,stream,map);
  DebugStream_writeCString(stream,"leagueID ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  STLMap_intToIntVector_serialize(&stack0x00000000,(void *)((int)this + 0xc),map);
  DebugStream_writeCString(stream,"Ending LobbyCommand_SetLeagueCards\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

