// addr: 0x012da130
// name: PropertyVector_deletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PropertyVector_deletingDtor(void * this, char flags) */

void * __thiscall PropertyVector_deletingDtor(void *this,char flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for the vector-like object cleared by 012d8fb0. It
                       clears/destroys the contained buffer and frees this when the low deletion
                       flag is set. */
  puStack_8 = &LAB_01670e4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  PropertyVector_clear((int)this + 0xc);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

