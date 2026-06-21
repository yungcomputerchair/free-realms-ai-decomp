// addr: 0x015162c0
// name: Engine_FRTWDeckCollectionView_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Engine_FRTWDeckCollectionView_scalarDeletingDtor(void * this, char
   flags) */

void * __thiscall Engine_FRTWDeckCollectionView_scalarDeletingDtor(void *this,char flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for Engine::FRTWDeckCollectionView. It destroys
                       the object and frees memory when flags bit 0 is set. */
  puStack_8 = &LAB_016b7598;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::FRTWDeckCollectionView::vftable;
  local_4 = 0xffffffff;
  Engine_CollectionViewBase_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

