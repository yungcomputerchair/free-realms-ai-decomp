// addr: 0x014cce70
// name: LobbyCommand_AdjournedGame_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_AdjournedGame_dump(int * this, void * stream) */

void __thiscall LobbyCommand_AdjournedGame_dump(void *this,void *stream)

{
  void *pvVar1;
  
                    /* Dumps LobbyCommand_AdjournedGame with game id, match id, and an integer
                       vector/list after base LobbyCommand data. */
  pvVar1 = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_AdjournedGame\n");
  LobbyCommand_dump(this,stream,pvVar1);
  DebugStream_writeCString(stream,"GameID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  DebugStream_writeCString(stream,"MatchID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x10);
  DebugStream_writeCString(stream,"Ending LobbyCommand_AdjournedGame\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

