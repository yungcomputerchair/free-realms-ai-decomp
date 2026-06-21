// addr: 0x014be310
// name: LobbyCommand_SetDraftedCards_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SetDraftedCards_dump(int * this, void * stream) */

void __thiscall LobbyCommand_SetDraftedCards_dump(void *this,void *stream)

{
  void *map;
  
                    /* Dumps LobbyCommand_SetDraftedCards with tournament id and the drafted-card
                       pair collection. */
  map = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_SetDraftedCards\n");
  LobbyCommand_dump(this,stream,map);
  DebugStream_writeCString(stream,"tournamentID ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  STLMap_dwordPair_serialize(&stack0x00000000,(void *)((int)this + 0xc),map);
  DebugStream_writeCString(stream,"Ending LobbyCommand_SetDraftedCards\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

