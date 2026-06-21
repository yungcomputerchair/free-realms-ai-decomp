// addr: 0x00c8b950
// name: RecipeData_deletingDtor
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * RecipeData_deletingDtor(void * this, byte flags_) */

void * __thiscall RecipeData_deletingDtor(void *this,byte flags_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deleting destructor wrapper for RecipeData: calls RecipeData_dtor and frees
                       the object when the low flag bit is set. */
  puStack_8 = &LAB_01605ea8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  RecipeData_dtor(this);
  if ((flags_ & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

