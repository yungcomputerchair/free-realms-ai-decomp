// addr: 0x008ca980
// name: Stream_ReadU32
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Stream_ReadU32(void * reader, uint * outValue) */

void __cdecl Stream_ReadU32(void *reader,uint *outValue)

{
                    /* Reads a 32-bit value from the stream, writing zero and setting overflow on
                       underrun. Called directly by SelfObject_ParseFromBlob. */
  if (*(uint **)((int)reader + 0xc) < *(uint **)((int)reader + 8) + 1) {
    *outValue = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
    return;
  }
  *outValue = **(uint **)((int)reader + 8);
  *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  return;
}

