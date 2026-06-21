// addr: 0x014dd3d0
// name: GameCommand_FinishMultiaction_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_FinishMultiaction_serialize(void * this, void * stream) */

void __thiscall GameCommand_FinishMultiaction_serialize(void *this,void *stream)

{
                    /* Writes GameCommand_FinishMultiaction debug/serialized output with base
                       GameCommand fields and mGetTargetStateID. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GameCommand_FinishMultiaction\n");
  GameCommand_serialize(this,stream);
  DebugStream_writeCString(stream,"mGetTargetStateID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x24));
  DebugStream_writeCString(stream,"Ending GameCommand_FinishMultiaction\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

