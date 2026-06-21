// addr: 0x005dba7a
// name: StdVectorDword_capacityFromEnd
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int StdVectorDword_capacityFromEnd(void * vec) */

int __fastcall StdVectorDword_capacityFromEnd(void *vec)

{
                    /* Returns a 4-byte-element count using the pointer at +0xc against begin at +4,
                       or zero when begin is null. */
  if (*(int *)((int)vec + 4) == 0) {
    return 0;
  }
  return *(int *)((int)vec + 0xc) - *(int *)((int)vec + 4) >> 2;
}

