// addr: 0x01483560
// name: InstanceSubID_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void InstanceSubID_serialize(int * this, void * writer) */

void __thiscall InstanceSubID_serialize(void *this,void *writer)

{
                    /* Serializes/dumps an InstanceSubID, writing Series ID and Instance Number
                       between Starting/Ending InstanceSubID markers. */
  (**(code **)(*(int *)this + 8))(writer);
  DebugStream_writeCString(writer,"Starting InstanceSubID:\n");
  DebugStream_writeCString(writer,"Series ID: ");
  Serializer_appendInteger(writer,*(uint *)((int)this + 4));
  DebugStream_writeCString(writer,"Instance Number: ");
  Serializer_appendInteger(writer,*(uint *)((int)this + 8));
  DebugStream_writeCString(writer,"Ending InstanceSubID\n");
  (**(code **)(*(int *)this + 0xc))(writer);
  return;
}

