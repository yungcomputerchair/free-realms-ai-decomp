// addr: 0x013b2900
// name: PropertyRange_setStart
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyRange_setStart(void * this, int value) */

void __thiscall PropertyRange_setStart(void *this,int value)

{
                    /* Stores the supplied value at offset +4, paired with adjacent setters for +8
                       and +0xc. Evidence is direct assignment and repeated callers in property
                       setup routines. */
  *(int *)((int)this + 4) = value;
  return;
}

