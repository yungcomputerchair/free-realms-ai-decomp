// addr: 0x012c5470
// name: FilterCriteria_setPrimaryFilter
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FilterCriteria_setPrimaryFilter(void * this, int value) */

void __thiscall FilterCriteria_setPrimaryFilter(void *this,int value)

{
                    /* Stores the supplied value into FilterCriteria field +4. Evidence is direct
                       assignment to this+4 and nearby FilterCriteria constructor initializing that
                       field. */
  *(int *)((int)this + 4) = value;
  return;
}

