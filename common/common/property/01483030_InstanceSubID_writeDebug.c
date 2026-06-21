// addr: 0x01483030
// name: InstanceSubID_writeDebug
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void InstanceSubID_writeDebug(void * this, void * stream) */

void __thiscall InstanceSubID_writeDebug(void *this,void *stream)

{
                    /* Writes InstanceSubID debug output: nested InstanceSubID serialization
                       followed by its Flags value. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting InstanceSubID:\n");
  InstanceSubID_serialize(this,stream);
  DebugStream_writeCString(stream,"Flags: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(stream,"Ending InstanceSubID\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

