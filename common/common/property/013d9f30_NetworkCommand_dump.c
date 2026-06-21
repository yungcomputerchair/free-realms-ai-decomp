// addr: 0x013d9f30
// name: NetworkCommand_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_dump(void * this, void * stream) */

void __thiscall NetworkCommand_dump(void *this,void *stream)

{
                    /* Dumps the NetworkCommand base fields, currently the spoof value, between
                       start/end markers. The referenced strings explicitly name NetworkCommand and
                       Spoof Value. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting NetworkCommand\n");
  DebugStream_writeCString(stream,"Spoof Value: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 4));
  DebugStream_writeCString(stream,"Ending NetworkCommand\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

