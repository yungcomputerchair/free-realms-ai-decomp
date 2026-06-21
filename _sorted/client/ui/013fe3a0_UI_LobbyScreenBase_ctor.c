// addr: 0x013fe3a0
// name: UI_LobbyScreenBase_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UI_LobbyScreenBase_ctor(void * this) */

void * __fastcall UI_LobbyScreenBase_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UI::LobbyScreenBase by running UI::ScreenBase construction and
                       installing UI::LobbyScreenBase::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01690348;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UI_ScreenBase_ctor(this);
  *(undefined ***)this = UI::LobbyScreenBase::vftable;
  ExceptionList = local_c;
  return this;
}

