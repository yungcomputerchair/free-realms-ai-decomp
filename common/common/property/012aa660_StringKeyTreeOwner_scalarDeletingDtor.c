// addr: 0x012aa660
// name: StringKeyTreeOwner_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StringKeyTreeOwner_scalarDeletingDtor(void * this, char flags) */

void * __thiscall StringKeyTreeOwner_scalarDeletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor for an owner object containing the string-key
                       tree. It calls the owner destructor FUN_012aa5d0 and conditionally frees
                       this. */
  StringKeyTreeOwner_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

