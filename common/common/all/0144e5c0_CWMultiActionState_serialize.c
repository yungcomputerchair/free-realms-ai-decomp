// addr: 0x0144e5c0
// name: CWMultiActionState_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWMultiActionState_serialize(void * this, void * stream) */

void __thiscall CWMultiActionState_serialize(void *this,void *stream)

{
  void *stream_00;
  
                    /* Serializes/debug-writes a CWMultiActionState block and its multi-action
                       payload. */
  if (stream == (void *)0x0) {
    stream_00 = (void *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream_00 = (void *)(**(code **)(*(int *)this + 8))(stream);
  }
  DebugStream_writeCString(stream_00,"Starting CWMultiActionState\n");
  FUN_0146c830(stream_00);
  DebugStream_writeCString(stream_00,"Ending CWMultiActionState\n");
  (**(code **)(*(int *)this + 0xc))(stream_00);
  return;
}

