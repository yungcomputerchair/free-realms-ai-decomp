// addr: 0x014d9120
// name: GameCommand_SetObserverMode_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_SetObserverMode_serialize(void * this, void * stream) */

void __thiscall GameCommand_SetObserverMode_serialize(void *this,void *stream)

{
                    /* Writes GameCommand_SetObserverMode debug/serialized output with base
                       GameCommand fields, observer-mode flag/value, and account id. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GameCommand_SetObserverMode\n");
  GameCommand_serialize(this,stream);
  DebugStream_writeCString(stream,"Observer Mode: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x24));
  DebugStream_writeCString(stream,"Account ID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x28));
  DebugStream_writeCString(stream,"Ending GameCommand_SetObserverMode\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

