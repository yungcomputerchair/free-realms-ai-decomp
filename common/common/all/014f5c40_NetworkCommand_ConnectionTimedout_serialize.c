// addr: 0x014f5c40
// name: NetworkCommand_ConnectionTimedout_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_ConnectionTimedout_serialize(void * this, void * stream)
    */

void __thiscall NetworkCommand_ConnectionTimedout_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a NetworkCommand_ConnectionTimedout block via the
                       common NetworkCommand serializer. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting NetworkCommand_ConnectionTimedout\n");
  NetworkCommand_dump(this,stream);
  DebugStream_writeCString(stream,"Ending NetworkCommand_ConnectionTimedout\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

