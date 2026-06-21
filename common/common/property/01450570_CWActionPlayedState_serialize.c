// addr: 0x01450570
// name: CWActionPlayedState_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWActionPlayedState_serialize(void * this, void * stream) */

void __thiscall CWActionPlayedState_serialize(void *this,void *stream)

{
  void *stream_00;
  
                    /* Writes a CWActionPlayedState record, selecting a default stream when none is
                       provided, then emits base action state data plus an integer and boolean flag.
                        */
  if (stream == (void *)0x0) {
    stream_00 = (void *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream_00 = (void *)(**(code **)(*(int *)this + 8))(stream);
  }
  DebugStream_writeCString(stream_00,"Starting CWActionPlayedState\n");
  FUN_014820b0(stream_00);
  Serializer_appendInteger(stream_00,*(uint *)((int)this + 0x19c));
  Serializer_appendInteger(stream_00,(uint)(*(char *)((int)this + 0x1a0) != '\0'));
  DebugStream_writeCString(stream_00,"Ending CWActionPlayedState\n");
  (**(code **)(*(int *)this + 0xc))(stream_00);
  return;
}

