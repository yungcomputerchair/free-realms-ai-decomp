// addr: 0x0143a900
// name: Engine_ArchetypeViewBase_deletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Engine_ArchetypeViewBase_deletingDtor(void * this, int flags) */

void * __thiscall Engine_ArchetypeViewBase_deletingDtor(void *this,int flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for Engine::ArchetypeViewBase. It performs the
                       same vftable/base cleanup as the non-deleting destructor and frees this when
                       flags&1 is set. */
  puStack_8 = &LAB_016979a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::ArchetypeViewBase::vftable;
  local_4 = 0xffffffff;
  Engine_SortableView_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

