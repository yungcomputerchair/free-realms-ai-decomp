// addr: 0x014c0110
// name: LobbyCommand_SelectTournamentDeck_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SelectTournamentDeck_dump(void * this, void * debugStream)
    */

void __thiscall LobbyCommand_SelectTournamentDeck_dump(void *this,void *debugStream)

{
  int *piVar1;
  bool bVar2;
  void *pvVar3;
  
                    /* Dumps LobbyCommand_SelectTournamentDeck with deck id, optional deck object,
                       tournament id, group id, and overwrite flag. Evidence is 'Starting/Ending
                       LobbyCommand_SelectTournamentDeck' and field labels. */
  pvVar3 = debugStream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(debugStream,"Starting LobbyCommand_SelectTournamentDeck\n");
  LobbyCommand_dump(this,debugStream,pvVar3);
  DebugStream_writeCString(debugStream,"Deck ID: ");
  Serializer_appendString(debugStream,(void *)((int)this + 8));
  DebugStream_writeCString(debugStream,"Deck:");
  piVar1 = *(int **)((int)this + 0x24);
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger(debugStream,1);
  }
  else {
    bVar2 = Serializer_appendInteger(debugStream,0);
    if (bVar2) {
      (**(code **)(*piVar1 + 0x28))(debugStream);
    }
  }
  DebugStream_writeCString(debugStream,"TournamentID: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x28));
  DebugStream_writeCString(debugStream,"GroupID: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x2c));
  DebugStream_writeCString(debugStream,"Overwrite: ");
  Serializer_appendInteger(debugStream,(uint)*(byte *)((int)this + 0x30));
  DebugStream_writeCString(debugStream,"Ending LobbyCommand_SelectTournamentDeck\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

