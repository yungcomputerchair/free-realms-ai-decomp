// addr: 0x012b51e0
// name: ByteVectorOwner_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ByteVectorOwner_scalarDeletingDtor(void * this, char flags) */

void * __thiscall ByteVectorOwner_scalarDeletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor for an object owning a vector member at this+0xc.
                       It runs ByteVector_memberDtor and frees this when requested. */
  ByteVector_memberDtor((int)this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

