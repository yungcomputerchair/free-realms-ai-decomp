// addr: 0x0139f7a0
// name: PropertyContainer_getField64
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int PropertyContainer_getField64(void * this) */

int __fastcall PropertyContainer_getField64(void *this)

{
                    /* Returns the dword field at offset 0x64. Evidence is the single load from
                       this+100; no reliable semantic name is visible in this briefing. */
  return *(int *)((int)this + 100);
}

