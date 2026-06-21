// addr: 0x014d8140
// name: GameCommand_SetupGame_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_SetupGame_dump(void * this, void * writer) */

void __thiscall GameCommand_SetupGame_dump(void *this,void *writer)

{
  void *map;
  
                    /* Appends a textual/debug dump for GameCommand_SetupGame, writing game
                       identifiers, player order/account vectors, version/match settings, and
                       league/match-structure fields. */
  map = writer;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(writer,"Starting GameCommand_SetupGame\n");
  GameCommand_serialize(this,writer);
  DebugStream_writeCString(writer,"Game ID: ");
  Serializer_appendInteger(writer,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(writer,"Game Server ID: ");
  Serializer_appendInteger(writer,*(uint *)((int)this + 0x24));
  DebugStream_writeCString(writer,"Server ID: ");
  Serializer_appendInteger(writer,*(uint *)((int)this + 0x24));
  DebugStream_writeCString(writer,"Player Count: ");
  Serializer_appendInteger(writer,*(uint *)((int)this + 0x2c));
  DebugStream_writeCString(writer,"Player Order Data:\n");
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x30);
  DebugStream_writeCString(writer,"Ordered Account IDs:\n");
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x40);
  DebugStream_writeCString(writer,"GameVersion:\n");
  Serializer_appendInteger(writer,*(uint *)((int)this + 0x50));
  DebugStream_writeCString(writer,"MatchID: \n");
  Serializer_appendInteger(writer,*(uint *)((int)this + 0x54));
  DebugStream_writeCString(writer,"Duration: ");
  Serializer_appendInteger(writer,*(uint *)((int)this + 0x58));
  DebugStream_writeCString(writer,"GameType: ");
  Serializer_appendInteger(writer,*(uint *)((int)this + 0x5c));
  DebugStream_writeCString(writer,"PlayType: ");
  Serializer_appendInteger(writer,*(uint *)((int)this + 0x60));
  DebugStream_writeCString(writer,"ExtraFormatFlag: ");
  Serializer_appendInteger(writer,*(uint *)((int)this + 100));
  DebugStream_writeCString(writer,"GameNum: ");
  Serializer_appendInteger(writer,*(uint *)((int)this + 0x68));
  STLMap_intToIntVector_serialize(&stack0x00000000,(void *)((int)this + 0x6c),map);
  DebugStream_writeCString(writer,"LeagueID");
  Serializer_appendInteger(writer,*(uint *)((int)this + 0x78));
  DebugStream_writeCString(writer,"MatchStructure");
  Serializer_appendInteger(writer,*(uint *)((int)this + 0x7c));
  DebugStream_writeCString(writer,"Ending GameCommand_SetupGame\n");
  (**(code **)(*(int *)this + 0xc))(writer);
  return;
}

