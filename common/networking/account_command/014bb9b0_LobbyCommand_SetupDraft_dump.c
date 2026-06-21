// addr: 0x014bb9b0
// name: LobbyCommand_SetupDraft_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SetupDraft_dump(int * this, void * stream) */

void __thiscall LobbyCommand_SetupDraft_dump(void *this,void *stream)

{
  void *pvVar1;
  
                    /* Dumps LobbyCommand_SetupDraft with tournament id, two integer vectors/lists,
                       and group id after base LobbyCommand data. */
  pvVar1 = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_SetupDraft\n");
  LobbyCommand_dump(this,stream,pvVar1);
  DebugStream_writeCString(stream,"tournamentID ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  STLVector_int_serialize(&stack0x00000000,(int)this + 0xc);
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x1c);
  DebugStream_writeCString(stream,"GroupID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x2c));
  DebugStream_writeCString(stream,"Ending LobbyCommand_SetupDraft\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

