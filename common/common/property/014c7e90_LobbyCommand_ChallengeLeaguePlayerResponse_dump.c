// addr: 0x014c7e90
// name: LobbyCommand_ChallengeLeaguePlayerResponse_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_ChallengeLeaguePlayerResponse_dump(void * this, void *
   debugStream) */

void __thiscall LobbyCommand_ChallengeLeaguePlayerResponse_dump(void *this,void *debugStream)

{
  int *piVar1;
  bool bVar2;
  void *pvVar3;
  
                    /* Dumps LobbyCommand_ChallengeLeaguePlayerResponse, including league fields,
                       deck id, optional deck object, and allow-observer flag. Evidence is
                       'Starting/Ending LobbyCommand_ChallengeLeaguePlayerResponse' and field
                       labels. */
  pvVar3 = debugStream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(debugStream,"Starting LobbyCommand_ChallengeLeaguePlayerResponse\n");
  LobbyCommand_dump(this,debugStream,pvVar3);
  DebugStream_writeCString(debugStream,"leagueID ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 8));
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0xc));
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x10));
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x14));
  DebugStream_writeCString(debugStream,"Deck ID: ");
  Serializer_appendString(debugStream,(void *)((int)this + 0x18));
  DebugStream_writeCString(debugStream,"Deck:");
  piVar1 = *(int **)((int)this + 0x34);
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger(debugStream,1);
  }
  else {
    bVar2 = Serializer_appendInteger(debugStream,0);
    if (bVar2) {
      (**(code **)(*piVar1 + 0x28))(debugStream);
    }
  }
  DebugStream_writeCString(debugStream,"AllowObserver");
  Serializer_appendInteger(debugStream,(uint)*(byte *)((int)this + 0x38));
  DebugStream_writeCString(debugStream,"Ending LobbyCommand_ChallengeLeaguePlayerResponse\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

