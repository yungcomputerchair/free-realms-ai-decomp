// addr: 0x012f80a0
// name: UI_CollectionManagerScreen_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UI_CollectionManagerScreen_ctor(void * this) */

void * __fastcall UI_CollectionManagerScreen_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UI::CollectionManagerScreen by running FRTWCollectionManagerScreen
                       construction and installing UI::CollectionManagerScreen::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01674fe8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UI_FRTWCollectionManagerScreen_ctor(this);
  *(undefined ***)this = UI::CollectionManagerScreen::vftable;
  ExceptionList = local_c;
  return this;
}

