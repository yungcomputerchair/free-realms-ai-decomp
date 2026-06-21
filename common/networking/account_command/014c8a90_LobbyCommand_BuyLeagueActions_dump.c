// addr: 0x014c8a90
// name: LobbyCommand_BuyLeagueActions_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_BuyLeagueActions_dump(int * this, void * stream) */

void __thiscall LobbyCommand_BuyLeagueActions_dump(void *this,void *stream)

{
  void *pvVar1;
  
                    /* Dumps LobbyCommand_BuyLeagueActions including league id, action/count
                       scalars, an integer vector, and a trailing scalar. */
  pvVar1 = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_BuyLeagueActions\n");
  LobbyCommand_dump(this,stream,pvVar1);
  DebugStream_writeCString(stream,"leagueID ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x10);
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x20));
  DebugStream_writeCString(stream,"Ending LobbyCommand_BuyLeagueActions\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

