// addr: 0x014c2b60
// name: LobbyCommand_RemoveAdjournedGame_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_RemoveAdjournedGame_dump(void * this, void * stream) */

void __thiscall LobbyCommand_RemoveAdjournedGame_dump(void *this,void *stream)

{
  void *pvVar1;
  
                    /* Appends a textual/debug dump for LobbyCommand_RemoveAdjournedGame, including
                       game id and match id. Evidence is the Starting/Ending
                       LobbyCommand_RemoveAdjournedGame strings and labels. */
  pvVar1 = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_RemoveAdjournedGame\n");
  LobbyCommand_dump(this,stream,pvVar1);
  DebugStream_writeCString(stream,"GameID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  DebugStream_writeCString(stream,"MatchID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(stream,"Ending LobbyCommand_RemoveAdjournedGame\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

