// addr: 0x014de230
// name: GameCommand_EndObserverMode_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_EndObserverMode_serialize(void * this, void * stream) */

void __thiscall GameCommand_EndObserverMode_serialize(void *this,void *stream)

{
                    /* Writes GameCommand_EndObserverMode debug/serialized output with base
                       GameCommand fields and Observer Mode value. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GameCommand_EndObserverMode\n");
  GameCommand_serialize(this,stream);
  DebugStream_writeCString(stream,"Observer Mode: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x24));
  DebugStream_writeCString(stream,"Ending GameCommand_EndObserverMode\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

