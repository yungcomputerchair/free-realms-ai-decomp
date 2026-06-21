// addr: 0x013b2bb0
// name: PropertyRange_setEnd2
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyRange_setEnd2(void * this, int value) */

void __thiscall PropertyRange_setEnd2(void *this,int value)

{
                    /* Stores a value at offset +8 for a second, similar small range/tuple object.
                       Evidence is the direct assignment and call pairing with 013b2bd0 in
                       FUN_013b12d0/FUN_013b13d0. */
  *(int *)((int)this + 8) = value;
  return;
}

