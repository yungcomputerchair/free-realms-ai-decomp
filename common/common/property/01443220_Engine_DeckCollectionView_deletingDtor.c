// addr: 0x01443220
// name: Engine_DeckCollectionView_deletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Engine_DeckCollectionView_deletingDtor(void * this, int flags) */

void * __thiscall Engine_DeckCollectionView_deletingDtor(void *this,int flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for Engine::DeckCollectionView. It performs
                       DeckCollectionView/base cleanup and frees this when the low flag bit is set.
                        */
  puStack_8 = &LAB_01699248;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::DeckCollectionView::vftable;
  local_4 = 0xffffffff;
  Engine_FRTWDeckCollectionView_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

