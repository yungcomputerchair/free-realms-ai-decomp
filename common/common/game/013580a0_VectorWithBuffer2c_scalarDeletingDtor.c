// addr: 0x013580a0
// name: VectorWithBuffer2c_scalarDeletingDtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * VectorWithBuffer2c_scalarDeletingDtor(void * this, char flags) */

void * __thiscall VectorWithBuffer2c_scalarDeletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor that runs the VectorWithBuffer2c member destructor
                       helper, then frees this when the low flag bit is set. No concrete class name
                       is available. */
  VectorWithBuffer2c_memberDtorAt0c(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

