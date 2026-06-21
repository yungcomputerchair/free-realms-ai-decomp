// addr: 0x0139f780
// name: CollectionData_getDesiredId
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint CollectionData_getDesiredId(void * this) */

uint __fastcall CollectionData_getDesiredId(void *this)

{
                    /* Returns the 32-bit field at offset 0x88, used by SynchronizationService start
                       handling as the current desired/active id. */
  return *(uint *)((int)this + 0x88);
}

