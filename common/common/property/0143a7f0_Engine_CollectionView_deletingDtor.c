// addr: 0x0143a7f0
// name: Engine_CollectionView_deletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Engine_CollectionView_deletingDtor(void * this, int flags) */

void * __thiscall Engine_CollectionView_deletingDtor(void *this,int flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for Engine::CollectionView. It installs the
                       Engine::CollectionView vftable, runs the FRTWCollectionView/base destructor,
                       and frees this when the low flag bit is set. */
  puStack_8 = &LAB_01697918;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::CollectionView::vftable;
  local_4 = 0xffffffff;
  Engine_FRTWCollectionView_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

