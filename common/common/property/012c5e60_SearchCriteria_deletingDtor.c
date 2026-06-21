// addr: 0x012c5e60
// name: SearchCriteria_deletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SearchCriteria_deletingDtor(void * this, char flags) */

void * __thiscall SearchCriteria_deletingDtor(void *this,char flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for SearchCriteria: sets SearchCriteria::vftable,
                       invokes FUN_012c51e0 cleanup, and frees this when requested. The vftable
                       symbol identifies the class. */
  puStack_8 = &LAB_0166eaf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = SearchCriteria::vftable;
  local_4 = 0xffffffff;
  FilterCriteria_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

