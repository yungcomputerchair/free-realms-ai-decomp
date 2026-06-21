// addr: 0x013d3bd0
// name: PropertyVector16_getOffsetMinusCount
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int PropertyVector16_getOffsetMinusCount(void * thisObj) */

int __fastcall PropertyVector16_getOffsetMinusCount(void *thisObj)

{
                    /* Returns the +8 offset field minus the current PropertyVector16 element count.
                       Evidence is direct arithmetic over +8 and the begin/end count at +0x14/+0x18,
                       used by SortService pseudo-field criteria. */
  if (*(int *)((int)thisObj + 0x14) == 0) {
    return *(int *)((int)thisObj + 8);
  }
  return *(int *)((int)thisObj + 8) -
         (*(int *)((int)thisObj + 0x18) - *(int *)((int)thisObj + 0x14) >> 4);
}

