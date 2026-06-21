// addr: 0x012bbef0
// name: PropertyTree15_ownerDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PropertyTree15_ownerDeletingDtor(void * this, char flags) */

void * __thiscall PropertyTree15_ownerDeletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor for an object that owns the tree member destroyed
                       by 012bbd40. It runs member destruction and frees this when the low flag bit
                       is set. */
  PropertyTree15_memberDtor((int)this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

