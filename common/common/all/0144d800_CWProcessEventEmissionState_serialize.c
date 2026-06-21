// addr: 0x0144d800
// name: CWProcessEventEmissionState_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWProcessEventEmissionState_serialize(void * this, void * stream) */

void __thiscall CWProcessEventEmissionState_serialize(void *this,void *stream)

{
  void *stream_00;
  
                    /* Serializes/debug-writes a CWProcessEventEmissionState block and its
                       state-specific payload. */
  if (stream == (void *)0x0) {
    stream_00 = (void *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream_00 = (void *)(**(code **)(*(int *)this + 8))(stream);
  }
  DebugStream_writeCString(stream_00,"Starting CWProcessEventEmissionState\n");
  FUN_01465a60(stream_00);
  DebugStream_writeCString(stream_00,"Ending CWProcessEventEmissionState\n");
  (**(code **)(*(int *)this + 0xc))(stream_00);
  return;
}

