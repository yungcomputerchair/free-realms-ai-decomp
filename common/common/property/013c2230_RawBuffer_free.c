// addr: 0x013c2230
// name: RawBuffer_free
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RawBuffer_free(void * buffer) */

void __fastcall RawBuffer_free(void *buffer)

{
                    /* Frees the allocation owned by a simple raw-buffer structure if it is
                       non-null. The structure's first word is the data pointer used by many
                       compression/deserialization routines. */
  if (*(void **)buffer != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)buffer);
  }
  return;
}

