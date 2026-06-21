// addr: 0x01515c50
// name: Engine_FRTWCollectionView_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Engine_FRTWCollectionView_dtor(void * this) */

void __fastcall Engine_FRTWCollectionView_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for Engine::FRTWCollectionView. It installs the FRTWCollectionView
                       vftable and then destroys the CollectionViewBase subobject. */
  puStack_8 = &LAB_016b7408;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::FRTWCollectionView::vftable;
  local_4 = 0xffffffff;
  Engine_CollectionViewBase_dtor(this);
  ExceptionList = local_c;
  return;
}

