// addr: 0x01511b90
// name: UI_DeckBuilderScreenBase_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UI_DeckBuilderScreenBase_ctor(void * this) */

void * __fastcall UI_DeckBuilderScreenBase_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UI::DeckBuilderScreenBase by running UI::ScreenBase construction
                       and installing UI::DeckBuilderScreenBase::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b6b38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UI_ScreenBase_ctor(this);
  *(undefined ***)this = UI::DeckBuilderScreenBase::vftable;
  ExceptionList = local_c;
  return this;
}

