// addr: 0x013b2440
// name: PropertyRange_setEnd
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyRange_setEnd(void * this, int value) */

void __thiscall PropertyRange_setEnd(void *this,int value)

{
                    /* Stores the supplied value at offset +8, used with adjacent setters for
                       offsets +4,+8,+0xc. Evidence is direct assignment and callers in property
                       range/setup routines. */
  *(int *)((int)this + 8) = value;
  return;
}

