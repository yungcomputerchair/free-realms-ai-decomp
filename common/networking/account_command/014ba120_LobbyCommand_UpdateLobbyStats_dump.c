// addr: 0x014ba120
// name: LobbyCommand_UpdateLobbyStats_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_UpdateLobbyStats_dump(int * this, void * stream) */

void __thiscall LobbyCommand_UpdateLobbyStats_dump(void *this,void *stream)

{
  void *map;
  
                    /* Dumps LobbyCommand_UpdateLobbyStats by emitting base LobbyCommand data and
                       several pair maps/vectors plus a scalar field. */
  map = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_UpdateLobbyStats\n");
  LobbyCommand_dump(this,stream,map);
  STLMap_dwordPair_serialize(&stack0x00000000,(void *)((int)this + 8),map);
  STLMap_dwordPair_serialize(&stack0x00000000,(void *)((int)this + 0x14),map);
  STLMap_dwordPair_serialize(&stack0x00000000,(void *)((int)this + 0x20),map);
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x2c));
  STLMap_dwordPair_serialize(&stack0x00000000,(void *)((int)this + 0x30),map);
  DebugStream_writeCString(stream,"Ending LobbyCommand_UpdateLobbyStats\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

