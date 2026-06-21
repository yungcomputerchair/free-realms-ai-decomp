// addr: 0x013d3810
// name: PersistentComponent_getPersistentId
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int PersistentComponent_getPersistentId(void * this) */

int __fastcall PersistentComponent_getPersistentId(void *this)

{
                    /* Returns the dword field at offset +4, likely the PersistentComponent id/base
                       identifier. Evidence is the direct load and callers including
                       PropertyContainer_insertChildIfPresent and synchronization property routines.
                        */
  return *(int *)((int)this + 4);
}

