// addr: 0x0145a290
// name: CWCommandObject_Destroy_deletingDtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWCommandObject_Destroy_deletingDtor(void * this, char flags_) */

void * __thiscall CWCommandObject_Destroy_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for CWCommandObject_Destroy: runs the class
                       destructor and frees this when requested by the flags byte. */
  CWCommandObject_Destroy_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

