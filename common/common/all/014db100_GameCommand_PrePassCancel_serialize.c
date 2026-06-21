// addr: 0x014db100
// name: GameCommand_PrePassCancel_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_PrePassCancel_serialize(void * this, void * stream) */

void __thiscall GameCommand_PrePassCancel_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a GameCommand_PrePassCancel block via the common
                       GameCommand serializer. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GameCommand_PrePassCancel\n");
  GameCommand_serialize(this,stream);
  DebugStream_writeCString(stream,"Ending GameCommand_PrePassCancel\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

