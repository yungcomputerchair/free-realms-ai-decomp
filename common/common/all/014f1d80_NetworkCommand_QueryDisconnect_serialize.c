// addr: 0x014f1d80
// name: NetworkCommand_QueryDisconnect_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_QueryDisconnect_serialize(void * this, void * stream) */

void __thiscall NetworkCommand_QueryDisconnect_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a NetworkCommand_QueryDisconnect block via the common
                       NetworkCommand serializer. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting NetworkCommand_QueryDisconnect\n");
  NetworkCommand_dump(this,stream);
  DebugStream_writeCString(stream,"Ending NetworkCommand_QueryDisconnect\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

