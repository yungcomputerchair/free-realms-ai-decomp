// addr: 0x014be760
// name: LobbyCommand_SetDraft_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SetDraft_dump(int * this, void * stream) */

void __thiscall LobbyCommand_SetDraft_dump(void *this,void *stream)

{
  void *vector;
  
                    /* Dumps LobbyCommand_SetDraft with tournament id, round, timer, card list,
                       group id, and send-deck flag. */
  vector = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_SetDraft\n");
  LobbyCommand_dump(this,stream,vector);
  DebugStream_writeCString(stream,"tournamentID ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  DebugStream_writeCString(stream,"round");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(stream,"timer: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x10));
  STLVector_cardInstance_serialize(&stack0x00000000,(void *)((int)this + 0x18),vector);
  DebugStream_writeCString(stream,"groupID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x14));
  DebugStream_writeCString(stream,"SendDeck: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x28));
  DebugStream_writeCString(stream,"Ending LobbyCommand_SetDraft\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

