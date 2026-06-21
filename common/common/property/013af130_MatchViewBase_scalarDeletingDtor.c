// addr: 0x013af130
// name: MatchViewBase_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MatchViewBase_scalarDeletingDtor(void * this, char flags) */

void * __thiscall MatchViewBase_scalarDeletingDtor(void *this,char flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Compiler scalar-deleting destructor for Engine::MatchViewBase. It installs
                       the MatchViewBase vtable, destroys its base/member state, and conditionally
                       frees this. */
  puStack_8 = &LAB_01686dd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::MatchViewBase::vftable;
  local_4 = 0xffffffff;
  Engine_SortableView_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

