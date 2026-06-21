// addr: 0x012c5e20
// name: SearchCriteria_baseDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SearchCriteria_baseDeletingDtor(void * this, char flags) */

void * __thiscall SearchCriteria_baseDeletingDtor(void *this,char flags)

{
                    /* Deleting destructor thunk that runs the SearchCriteria cleanup helper
                       FUN_012c51e0 and optionally frees the object. Unlike 012c5e60 it does not
                       reset the SearchCriteria vftable first, suggesting a base/member destructor
                       thunk. */
  FilterCriteria_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

