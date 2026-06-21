// addr: 0x014528a0
// name: CWArchetype_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWArchetype_serialize(void * this, void * stream) */

void __thiscall CWArchetype_serialize(void *this,void *stream)

{
  void *stream_00;
  
                    /* Serializes/debug-writes a CWArchetype block by delegating to
                       Archetype_debugDump. */
  if (stream == (void *)0x0) {
    stream_00 = (void *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream_00 = (void *)(**(code **)(*(int *)this + 8))(stream);
  }
  DebugStream_writeCString(stream_00,"Starting CWArchetype\n");
  Archetype_debugDump(this,stream_00);
  DebugStream_writeCString(stream_00,"Ending CWArchetype\n");
  (**(code **)(*(int *)this + 0xc))(stream_00);
  return;
}

