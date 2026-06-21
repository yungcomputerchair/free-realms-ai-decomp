// addr: 0x014bc4f0
// name: LobbyCommand_SetLeagueInfo_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SetLeagueInfo_dump(void * this, void * writer) */

void __thiscall LobbyCommand_SetLeagueInfo_dump(void *this,void *writer)

{
  void *map;
  
                    /* Appends a textual/debug dump for LobbyCommand_SetLeagueInfo, including the
                       lobby-command base fields, league/group/points, booster fields, and
                       challenged-player list. */
  map = writer;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(writer,"Starting LobbyCommand_SetLeagueInfo\n");
  LobbyCommand_dump(this,writer,map);
  DebugStream_writeCString(writer,"leagueID ");
  Serializer_appendInteger(writer,*(uint *)((int)this + 8));
  DebugStream_writeCString(writer,"groupID ");
  Serializer_appendInteger(writer,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(writer,"leaguePoints");
  Serializer_appendInteger(writer,*(uint *)((int)this + 0x28));
  STLMap_intToInt_serialize_012fc6a0(&stack0x00000000,(void *)((int)this + 0x10),(int)map);
  STLMap_intToInt_serialize_012fc6a0(&stack0x00000000,(void *)((int)this + 0x1c),(int)map);
  DebugStream_writeCString(writer,"PurchaseableBooster: ");
  Serializer_appendInteger(writer,*(uint *)((int)this + 0x2c));
  DebugStream_writeCString(writer,"Booster Cost: ");
  Serializer_appendInteger(writer,*(uint *)((int)this + 0x30));
  DebugStream_writeCString(writer,"Booster Week: ");
  Serializer_appendInteger(writer,*(uint *)((int)this + 0x34));
  DebugStream_writeCString(writer,"Booster Avail To Purchase: ");
  Serializer_appendInteger(writer,*(uint *)((int)this + 0x38));
  DebugStream_writeCString(writer,"ChallengedPlayers: ");
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x3c);
  DebugStream_writeCString(writer,"Ending LobbyCommand_SetLeagueInfo\n");
  (**(code **)(*(int *)this + 0xc))(writer);
  return;
}

