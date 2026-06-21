// addr: 0x0143b8f0
// name: Engine_ArchetypeView_deletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Engine_ArchetypeView_deletingDtor(void * this, int flags) */

void * __thiscall Engine_ArchetypeView_deletingDtor(void *this,int flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for Engine::ArchetypeView. It runs the
                       ArchetypeView destructor chain and frees this when the low flag bit is set.
                        */
  puStack_8 = &LAB_01697ce8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::ArchetypeView::vftable;
  local_4 = 0xffffffff;
  Engine_FRTWArchetypeView_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

