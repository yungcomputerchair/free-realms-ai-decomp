// addr: 0x01402850
// name: Match_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Match_dump(void * this, void * streamOrLogger) */

void __thiscall Match_dump(void *this,void *streamOrLogger)

{
                    /* Dumps a Match object, including base output and the GameID field, between
                       Starting/Ending Match markers. */
  (**(code **)(*(int *)this + 8))(streamOrLogger);
  DebugStream_writeCString(streamOrLogger,"Starting Match\n");
  Lobby_dump(streamOrLogger);
  DebugStream_writeCString(streamOrLogger,"GameID: ");
  Serializer_appendInteger(streamOrLogger,*(uint *)((int)this + 0x70));
  DebugStream_writeCString(streamOrLogger,"Ending Match\n");
  (**(code **)(*(int *)this + 0xc))(streamOrLogger);
  return;
}

