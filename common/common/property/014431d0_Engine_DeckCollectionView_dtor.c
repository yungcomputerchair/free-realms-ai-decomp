// addr: 0x014431d0
// name: Engine_DeckCollectionView_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Engine_DeckCollectionView_dtor(void * this) */

void __fastcall Engine_DeckCollectionView_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for Engine::DeckCollectionView. It installs the DeckCollectionView
                       vftable and delegates base cleanup to FUN_01516260. */
  puStack_8 = &LAB_01699218;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = Engine::DeckCollectionView::vftable;
  local_4 = 0xffffffff;
  Engine_FRTWDeckCollectionView_dtor(this);
  ExceptionList = local_c;
  return;
}

