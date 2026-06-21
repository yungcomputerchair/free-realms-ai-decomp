// addr: 0x012efb60
// name: PropertyObject_getField120
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PropertyObject_getField120(void * this) */

void * __fastcall PropertyObject_getField120(void *this)

{
                    /* Returns the address of the subobject or field block at offset 0x120. Evidence
                       is the single instruction returning this+0x120; it is paired with the +0x104
                       accessor. */
  return (void *)((int)this + 0x120);
}

