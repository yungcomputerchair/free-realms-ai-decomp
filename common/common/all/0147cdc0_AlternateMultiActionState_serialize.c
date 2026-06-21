// addr: 0x0147cdc0
// name: AlternateMultiActionState_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AlternateMultiActionState_serialize(void * this, void * stream) */

void __thiscall AlternateMultiActionState_serialize(void *this,void *stream)

{
  void *stream_00;
  
                    /* Serializes/debug-writes an AlternateMultiActionState, including the inherited
                       multi-action state and OtherPlayerText value. */
  if (stream == (void *)0x0) {
    stream_00 = (void *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream_00 = (void *)(**(code **)(*(int *)this + 8))(stream);
  }
  DebugStream_writeCString(stream_00,"Starting AlternateMultiActionState\n");
  FUN_0146c830(stream_00);
  DebugStream_writeCString(stream_00,"OtherPlayerText: ");
  (**(code **)(*(int *)((int)this + 0x178) + 0x28))(0);
  DebugStream_writeCString(stream_00,"Ending AlternateMultiActionState\n");
  (**(code **)(*(int *)this + 0xc))(stream_00);
  return;
}

