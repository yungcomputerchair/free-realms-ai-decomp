// addr: 0x0139dbb0
// name: PlayArea_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayArea_serialize(void * this, void * stream) */

void __thiscall PlayArea_serialize(void *this,void *stream)

{
                    /* Writes a PlayArea block to the debug/serialization stream, including
                       start/end markers and the base PlayElement serialization. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting PlayArea\n");
  PlayElement_serialize(this,stream);
  DebugStream_writeCString(stream,"Ending PlayArea\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

