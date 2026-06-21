// addr: 0x014e2a50
// name: ECommCommand_OrderHistory_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ECommCommand_OrderHistory_serialize(void * this, void * stream) */

void __thiscall ECommCommand_OrderHistory_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes an ECommCommand_OrderHistory block via the common
                       ECommCommand serializer. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting ECommCommand_OrderHistory\n");
  ECommCommand_serialize(this,stream);
  DebugStream_writeCString(stream,"Ending ECommCommand_OrderHistory\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

