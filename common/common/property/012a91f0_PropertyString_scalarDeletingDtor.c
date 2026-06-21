// addr: 0x012a91f0
// name: PropertyString_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PropertyString_scalarDeletingDtor(void * this, char flags) */

void * __thiscall PropertyString_scalarDeletingDtor(void *this,char flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for a string-like property object. It destroys the
                       string storage via FUN_012a8f50 and frees this when requested by the flags
                       byte. */
  puStack_8 = &LAB_0166c25b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  StdString_dtor_012a8f50((void *)((int)this + 0xc));
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

