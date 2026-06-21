// addr: 0x0129dc60
// name: RuleSetNameMap_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * RuleSetNameMap_scalarDeletingDtor(void * this, char flags) */

void * __thiscall RuleSetNameMap_scalarDeletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor for an object containing the RuleSetDB name-map
                       variant. It destroys the map and conditionally frees the object when flags&1
                       is set. */
  RuleSetNameMap_dtor((int)this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

