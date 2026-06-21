// addr: 0x012b58c0
// name: UIntVectorOwner_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UIntVectorOwner_scalarDeletingDtor(void * this, char flags) */

void * __thiscall UIntVectorOwner_scalarDeletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor for an object owning a UIntVector-like member at
                       this+0xc. It destroys the vector member and conditionally frees this. */
  UIntVector_memberDtor((int)this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

