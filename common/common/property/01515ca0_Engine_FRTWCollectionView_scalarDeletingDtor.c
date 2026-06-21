// addr: 0x01515ca0
// name: Engine_FRTWCollectionView_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Engine_FRTWCollectionView_scalarDeletingDtor(void * this, char flags)
    */

void * __thiscall Engine_FRTWCollectionView_scalarDeletingDtor(void *this,char flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for Engine::FRTWCollectionView. It performs the
                       same base destruction as 01515c50 and frees this when flags bit 0 is set. */
  puStack_8 = &LAB_016b7438;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::FRTWCollectionView::vftable;
  local_4 = 0xffffffff;
  Engine_CollectionViewBase_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

