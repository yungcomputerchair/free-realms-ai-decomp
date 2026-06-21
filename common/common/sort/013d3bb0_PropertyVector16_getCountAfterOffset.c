// addr: 0x013d3bb0
// name: PropertyVector16_getCountAfterOffset
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int PropertyVector16_getCountAfterOffset(void * thisObj) */

int __fastcall PropertyVector16_getCountAfterOffset(void *thisObj)

{
                    /* Returns total vector element count minus the +8 offset field, or the negated
                       offset when no backing vector exists. Evidence is arithmetic using begin/end
                       at +0x14/+0x18 and the +8 field, and calls from SortService special criteria.
                        */
  if (*(int *)((int)thisObj + 0x14) == 0) {
    return -*(int *)((int)thisObj + 8);
  }
  return (*(int *)((int)thisObj + 0x18) - *(int *)((int)thisObj + 0x14) >> 4) -
         *(int *)((int)thisObj + 8);
}

