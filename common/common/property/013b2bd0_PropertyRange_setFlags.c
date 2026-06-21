// addr: 0x013b2bd0
// name: PropertyRange_setFlags
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyRange_setFlags(void * this, int value) */

void __thiscall PropertyRange_setFlags(void *this,int value)

{
                    /* Stores the supplied value at offset +0xc in the same small object updated by
                       013b2bb0. Evidence is direct assignment and shared callers with the +8
                       setter. */
  *(int *)((int)this + 0xc) = value;
  return;
}

