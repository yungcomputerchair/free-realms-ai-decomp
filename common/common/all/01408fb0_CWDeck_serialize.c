// addr: 0x01408fb0
// name: CWDeck_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWDeck_serialize(void * this, void * stream) */

void __thiscall CWDeck_serialize(void *this,void *stream)

{
  void *stream_00;
  
                    /* Writes a CWDeck block with start/end markers and serializes the deck
                       contents. */
  if (stream == (void *)0x0) {
    stream_00 = (void *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream_00 = (void *)(**(code **)(*(int *)this + 8))(stream);
  }
  DebugStream_writeCString(stream_00,"Starting CWDeck\n");
  FUN_013ce4f0(stream_00);
  DebugStream_writeCString(stream_00,"Ending CWDeck\n");
  (**(code **)(*(int *)this + 0xc))(stream_00);
  return;
}

