// addr: 0x00a756b0
// name: DynamicStringTable_getEntryName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * DynamicStringTable_getEntryName(void * this, int entryIndex_) */

char * __thiscall DynamicStringTable_getEntryName(void *this,int entryIndex_)

{
                    /* Bounds-checks entryIndex against a count at this+0x248 and returns the string
                       at offset +4 in 0x20-byte records, otherwise 'Error!'. */
  if ((uint)entryIndex_ < *(uint *)((int)this + 0x248)) {
    return *(char **)(*(int *)((int)this + 0x244) + 4 + entryIndex_ * 0x20);
  }
  return "Error!";
}

