// addr: 0x0129da60
// name: RuleSetIndexMap_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * RuleSetIndexMap_scalarDeletingDtor(void * this, char flags) */

void * __thiscall RuleSetIndexMap_scalarDeletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor for an object containing a RuleSetDB index map. It
                       runs the member destructor and frees this when the low deletion flag is set.
                        */
  RuleSetIndexMap_dtor((int)this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

