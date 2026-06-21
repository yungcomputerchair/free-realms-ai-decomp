// addr: 0x013ef280
// name: Exception_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Exception_dump(void * this, void * serializer) */

void __thiscall Exception_dump(void *this,void *serializer)

{
                    /* Dumps an Exception object with ErrorMsg, FileName, LineNumber, Expression,
                       PlayerID, and From Server fields. Evidence is the explicit "Starting
                       Exception"/field label strings and Serializer append calls. */
  (**(code **)(*(int *)this + 8))(serializer);
  DebugStream_writeCString(serializer,"Starting Exception\n");
  DebugStream_writeCString(serializer,"ErrorMsg:");
  Serializer_appendString(serializer,(void *)((int)this + 4));
  DebugStream_writeCString(serializer,"FileName:");
  Serializer_appendString(serializer,(void *)((int)this + 0x20));
  DebugStream_writeCString(serializer,"LineNumber: ");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x3c));
  DebugStream_writeCString(serializer,"Expression: ");
  Serializer_appendString(serializer,(void *)((int)this + 0x40));
  DebugStream_writeCString(serializer,"PlayerID: ");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x5c));
  DebugStream_writeCString(serializer,"From Server: ");
  Serializer_appendInteger(serializer,(uint)*(byte *)((int)this + 0x60));
  DebugStream_writeCString(serializer,"Ending Exception\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

