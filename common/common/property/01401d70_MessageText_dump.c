// addr: 0x01401d70
// name: MessageText_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MessageText_dump(void * this, void * streamOrLogger) */

void __thiscall MessageText_dump(void *this,void *streamOrLogger)

{
  void *stream;
  
                    /* Dumps a MessageText object by printing start/end markers, a Message: label,
                       two integer fields, and the nested message payload. */
  if (streamOrLogger == (void *)0x0) {
    stream = (void *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream = (void *)(**(code **)(*(int *)this + 8))(streamOrLogger);
  }
  DebugStream_writeCString(stream,"Starting Message\n");
  DebugStream_writeCString(stream,"Message: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 4));
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  FUN_01401c40((int)this + 0xc);
  DebugStream_writeCString(stream,"Ending Message\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

