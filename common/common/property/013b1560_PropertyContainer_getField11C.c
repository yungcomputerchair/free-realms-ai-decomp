// addr: 0x013b1560
// name: PropertyContainer_getField11C
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int PropertyContainer_getField11C(void * this) */

int __fastcall PropertyContainer_getField11C(void *this)

{
                    /* Returns the dword at offset 0x11c from a property/container-like object.
                       Evidence is the direct load and repeated callers in the 0127xxxx property
                       cluster. */
  return *(int *)((int)this + 0x11c);
}

