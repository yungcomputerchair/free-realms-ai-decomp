// addr: 0x014c87a0
// name: LobbyCommand_ChallengeLeaguePlayer_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_ChallengeLeaguePlayer_dump(void * this, void * stream) */

void __thiscall LobbyCommand_ChallengeLeaguePlayer_dump(void *this,void *stream)

{
  void *pvVar1;
  
                    /* Appends a textual/debug dump for LobbyCommand_ChallengeLeaguePlayer,
                       including leagueID and several challenge/player fields. Evidence is the
                       Starting/Ending LobbyCommand_ChallengeLeaguePlayer strings and leagueID
                       label. */
  pvVar1 = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_ChallengeLeaguePlayer\n");
  LobbyCommand_dump(this,stream,pvVar1);
  DebugStream_writeCString(stream,"leagueID ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x10));
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x14));
  DebugStream_writeCString(stream,"Ending LobbyCommand_ChallengeLeaguePlayer\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

