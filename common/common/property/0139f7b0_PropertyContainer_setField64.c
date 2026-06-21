// addr: 0x0139f7b0
// name: PropertyContainer_setField64
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyContainer_setField64(void * this, int value) */

void __thiscall PropertyContainer_setField64(void *this,int value)

{
                    /* Stores a dword at offset 0x64. Evidence is the direct assignment to this+100
                       and pairing with the getter at 0139f7a0. */
  *(int *)((int)this + 100) = value;
  return;
}

