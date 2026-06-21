// addr: 0x014c3dc0
// name: LobbyCommand_JoinLeague_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_JoinLeague_serialize(void * this, void * stream) */

void __thiscall LobbyCommand_JoinLeague_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a LobbyCommand_JoinLeague block and its JoinLeague
                       fields. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting LobbyCommand_JoinLeague\n");
  LobbyCommand_JoinLeague_dumpFields(this,stream);
  DebugStream_writeCString(stream,"Ending LobbyCommand_JoinLeague\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

