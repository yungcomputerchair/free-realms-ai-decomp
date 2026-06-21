// addr: 0x01516860
// name: CWProcessEventEmissionStateForActivePlayer_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWProcessEventEmissionStateForActivePlayer_serialize(void * this, void *
   stream) */

void __thiscall CWProcessEventEmissionStateForActivePlayer_serialize(void *this,void *stream)

{
  void *stream_00;
  
                    /* Serializes/debug-writes a CWProcessEventEmissionStateForActivePlayer block
                       and its state-specific payload. */
  if (stream == (void *)0x0) {
    stream_00 = (void *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream_00 = (void *)(**(code **)(*(int *)this + 8))(stream);
  }
  DebugStream_writeCString(stream_00,"Starting CWProcessEventEmissionStateForActivePlayer\n");
  FUN_015113d0(stream_00);
  DebugStream_writeCString(stream_00,"Ending CWProcessEventEmissionStateForActivePlayer\n");
  (**(code **)(*(int *)this + 0xc))(stream_00);
  return;
}

