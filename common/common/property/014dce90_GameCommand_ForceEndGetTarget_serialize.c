// addr: 0x014dce90
// name: GameCommand_ForceEndGetTarget_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_ForceEndGetTarget_serialize(void * this, void * stream) */

void __thiscall GameCommand_ForceEndGetTarget_serialize(void *this,void *stream)

{
                    /* Writes GameCommand_ForceEndGetTarget debug/serialized output with base
                       GameCommand fields and mStateID. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GameCommand_ForceEndGetTarget\n");
  GameCommand_serialize(this,stream);
  DebugStream_writeCString(stream,"mStateID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x24));
  DebugStream_writeCString(stream,"Ending GameCommand_ForceEndGetTarget\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

