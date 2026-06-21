// addr: 0x013d3610
// name: InstanceID_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void InstanceID_dump(void * this, void * stream) */

void __thiscall InstanceID_dump(void *this,void *stream)

{
                    /* Dumps the three integer parts of an InstanceID: archetype id, series id, and
                       instance number. The string literals explicitly label the class and fields.
                        */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting InstanceID:\n");
  DebugStream_writeCString(stream,"Archetype ID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 4));
  DebugStream_writeCString(stream,"Series ID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  DebugStream_writeCString(stream,"Instance Number: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(stream,"Ending InstanceID\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

