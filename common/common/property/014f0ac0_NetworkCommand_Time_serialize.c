// addr: 0x014f0ac0
// name: NetworkCommand_Time_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_Time_serialize(void * this, void * serializer) */

void __thiscall NetworkCommand_Time_serialize(void *this,void *serializer)

{
                    /* Serializes/dumps server time fields, a string/time-zone-like field, login
                       duration, and group id for NetworkCommand_Time. Evidence is the
                       NetworkCommand_Time start/end and field label strings. */
  (**(code **)(*(int *)this + 8))(serializer);
  DebugStream_writeCString(serializer,"Starting NetworkCommand_Time\n");
  NetworkCommand_dump(this,serializer);
  DebugStream_writeCString(serializer,"Server Time:\n");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 4));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x10));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x14));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x18));
  Serializer_appendString(serializer,(void *)((int)this + 0x1c));
  DebugStream_writeCString(serializer,"Login Duration:\n");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x38));
  DebugStream_writeCString(serializer,"Group ID: ");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x3c));
  DebugStream_writeCString(serializer,"Ending NetworkCommand_Time\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

