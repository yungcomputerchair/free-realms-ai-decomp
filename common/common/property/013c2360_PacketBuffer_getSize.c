// addr: 0x013c2360
// name: PacketBuffer_getSize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int PacketBuffer_getSize(void * buffer) */

int __fastcall PacketBuffer_getSize(void *buffer)

{
                    /* Returns the buffer size field at offset +4. Evidence is the single load and
                       numerous callers in serialization/deserialization paths. */
  return *(int *)((int)buffer + 4);
}

