// addr: 0x012a85c0
// name: PropertyObject_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PropertyObject_scalarDeletingDtor(void * this, char flags) */

void * __thiscall PropertyObject_scalarDeletingDtor(void *this,char flags)

{
                    /* Generic scalar deleting destructor that calls the underlying destructor
                       FUN_013c2230 and conditionally frees the allocation. The specific class is
                       not evident in this briefing. */
  RawBuffer_free(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

