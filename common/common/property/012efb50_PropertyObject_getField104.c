// addr: 0x012efb50
// name: PropertyObject_getField104
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PropertyObject_getField104(void * this) */

void * __fastcall PropertyObject_getField104(void *this)

{
                    /* Returns the address of the subobject or field block at offset 0x104. Evidence
                       is the single instruction returning this+0x104; callers use it as an
                       accessor. */
  return (void *)((int)this + 0x104);
}

