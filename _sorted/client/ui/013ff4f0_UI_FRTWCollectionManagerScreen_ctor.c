// addr: 0x013ff4f0
// name: UI_FRTWCollectionManagerScreen_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UI_FRTWCollectionManagerScreen_ctor(void * this) */

void * __fastcall UI_FRTWCollectionManagerScreen_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UI::FRTWCollectionManagerScreen by running
                       CollectionManagerScreenBase construction and installing
                       UI::FRTWCollectionManagerScreen::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016908d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UI_CollectionManagerScreenBase_ctor(this);
  *(undefined ***)this = UI::FRTWCollectionManagerScreen::vftable;
  ExceptionList = local_c;
  return this;
}

