// addr: 0x01429700
// name: GameCommand_OutOfSync_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_OutOfSync_serialize(void * this, void * stream) */

void __thiscall GameCommand_OutOfSync_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a GameCommand_OutOfSync block using the common
                       GameCommand serializer. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GameCommand_OutOfSync\n");
  GameCommand_serialize(this,stream);
  DebugStream_writeCString(stream,"Ending GameCommand_OutOfSync\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

