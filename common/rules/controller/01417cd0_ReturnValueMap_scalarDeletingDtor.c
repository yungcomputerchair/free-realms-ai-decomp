// addr: 0x01417cd0
// name: ReturnValueMap_scalarDeletingDtor
// subsystem: common/rules/controller
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ReturnValueMap_scalarDeletingDtor(void * this, char flags_) */

void * __thiscall ReturnValueMap_scalarDeletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for ReturnValueMap: runs ReturnValueMap_dtor and
                       frees this when the low flag bit is set. */
  ReturnValueMap_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

