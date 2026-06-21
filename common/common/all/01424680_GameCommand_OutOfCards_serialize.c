// addr: 0x01424680
// name: GameCommand_OutOfCards_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_OutOfCards_serialize(void * this, void * stream) */

void __thiscall GameCommand_OutOfCards_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a GameCommand_OutOfCards block using the common
                       GameCommand serializer. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GameCommand_OutOfCards\n");
  GameCommand_serialize(this,stream);
  DebugStream_writeCString(stream,"Ending GameCommand_OutOfCards\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

