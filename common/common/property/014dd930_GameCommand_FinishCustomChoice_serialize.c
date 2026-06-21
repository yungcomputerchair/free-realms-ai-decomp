// addr: 0x014dd930
// name: GameCommand_FinishCustomChoice_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_FinishCustomChoice_serialize(void * this, void * stream) */

void __thiscall GameCommand_FinishCustomChoice_serialize(void *this,void *stream)

{
                    /* Writes GameCommand_FinishCustomChoice debug/serialized output with base
                       GameCommand fields, mButtonID, and mStateID. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GameCommand_FinishCustomChoice\n");
  GameCommand_serialize(this,stream);
  DebugStream_writeCString(stream,"mButtonID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x24));
  DebugStream_writeCString(stream,"mStateID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x28));
  DebugStream_writeCString(stream,"Ending GameCommand_FinishCustomChoice\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

