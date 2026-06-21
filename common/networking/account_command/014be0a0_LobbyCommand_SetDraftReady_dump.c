// addr: 0x014be0a0
// name: LobbyCommand_SetDraftReady_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SetDraftReady_dump(void * this, void * stream) */

void __thiscall LobbyCommand_SetDraftReady_dump(void *this,void *stream)

{
  void *pvVar1;
  
                    /* Appends a textual/debug dump for LobbyCommand_SetDraftReady, including
                       tournamentID, groupID, and ready fields. Evidence is the Starting/Ending
                       LobbyCommand_SetDraftReady strings and labels. */
  pvVar1 = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_SetDraftReady\n");
  LobbyCommand_dump(this,stream,pvVar1);
  DebugStream_writeCString(stream,"tournamentID ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  DebugStream_writeCString(stream,"GroupID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x10));
  DebugStream_writeCString(stream,"Ready: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(stream,"Ending LobbyCommand_SetDraftReady\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

