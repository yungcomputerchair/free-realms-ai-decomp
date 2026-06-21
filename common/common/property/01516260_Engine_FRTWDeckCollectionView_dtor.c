// addr: 0x01516260
// name: Engine_FRTWDeckCollectionView_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Engine_FRTWDeckCollectionView_dtor(void * this) */

void __fastcall Engine_FRTWDeckCollectionView_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for Engine::FRTWDeckCollectionView. It installs that vftable and
                       delegates to CollectionViewBase destruction. */
  puStack_8 = &LAB_016b7568;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::FRTWDeckCollectionView::vftable;
  local_4 = 0xffffffff;
  Engine_CollectionViewBase_dtor(this);
  ExceptionList = local_c;
  return;
}

