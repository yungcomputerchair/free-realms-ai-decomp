// addr: 0x0144bd20
// name: CWStateMachine_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWStateMachine_serialize(void * this, void * stream) */

void __thiscall CWStateMachine_serialize(void *this,void *stream)

{
  void *stream_00;
  
                    /* Serializes/debug-writes a CWStateMachine block by delegating to
                       StateMachine_serialize. */
  if (stream == (void *)0x0) {
    stream_00 = (void *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream_00 = (void *)(**(code **)(*(int *)this + 8))(stream);
  }
  DebugStream_writeCString(stream_00,"Starting CWStateMachine\n");
  StateMachine_serialize(this,stream_00);
  DebugStream_writeCString(stream_00,"Ending CWStateMachine\n");
  (**(code **)(*(int *)this + 0xc))(stream_00);
  return;
}

