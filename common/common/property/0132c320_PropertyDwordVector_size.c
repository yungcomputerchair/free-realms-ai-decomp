// addr: 0x0132c320
// name: PropertyDwordVector_size
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int PropertyDwordVector_size(void * vec) */

int __fastcall PropertyDwordVector_size(void *vec)

{
                    /* Returns zero for an empty vector buffer, otherwise computes (end-begin)/4.
                       Evidence is the direct subtraction of fields +8 and +4 shifted by two. */
  if (*(int *)((int)vec + 4) == 0) {
    return 0;
  }
  return *(int *)((int)vec + 8) - *(int *)((int)vec + 4) >> 2;
}

