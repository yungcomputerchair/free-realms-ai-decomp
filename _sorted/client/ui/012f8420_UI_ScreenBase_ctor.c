// addr: 0x012f8420
// name: UI_ScreenBase_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UI_ScreenBase_ctor(void * this) */

void * __fastcall UI_ScreenBase_ctor(void *this)

{
                    /* Constructs UI::ScreenBase by installing its vtable, clearing state flags, and
                       initializing a small string/buffer state with capacity 0xf. The class name is
                       explicit in the vtable symbol. */
  *(undefined ***)this = UI::ScreenBase::vftable;
  *(undefined1 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x20) = 0xf;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  return this;
}

