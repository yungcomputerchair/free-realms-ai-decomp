// addr: 0x012c5490
// name: FilterCriteria_setSecondaryFilter
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FilterCriteria_setSecondaryFilter(void * this, int value) */

void __thiscall FilterCriteria_setSecondaryFilter(void *this,int value)

{
                    /* Stores the supplied value into FilterCriteria field +8. Evidence is direct
                       assignment to this+8 and callers next to FilterCriteria_setPrimaryFilter. */
  *(int *)((int)this + 8) = value;
  return;
}

