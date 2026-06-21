// addr: 0x0144e9d0
// name: CWHandleResponseState_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWHandleResponseState_serialize(void * this, void * stream) */

void __thiscall CWHandleResponseState_serialize(void *this,void *stream)

{
  void *stream_00;
  
                    /* Serializes/debug-writes a CWHandleResponseState block and its
                       response-handling payload. */
  if (stream == (void *)0x0) {
    stream_00 = (void *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream_00 = (void *)(**(code **)(*(int *)this + 8))(stream);
  }
  DebugStream_writeCString(stream_00,"Starting CWHandleResponseState\n");
  FUN_01414fa0(stream_00);
  DebugStream_writeCString(stream_00,"Ending CWHandleResponseState\n");
  (**(code **)(*(int *)this + 0xc))(stream_00);
  return;
}

