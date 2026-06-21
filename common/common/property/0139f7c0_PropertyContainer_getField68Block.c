// addr: 0x0139f7c0
// name: PropertyContainer_getField68Block
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PropertyContainer_getField68Block(void * this) */

void * __fastcall PropertyContainer_getField68Block(void *this)

{
                    /* Returns the address of an embedded block at offset 0x68. Evidence is the
                       trivial this+0x68 accessor and nearby PropertyContainer field accessors. */
  return (void *)((int)this + 0x68);
}

