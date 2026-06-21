// addr: 0x0083e3b0
// name: GuiObjectRegistry_renderGuiFlashCtrlByHash
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuiObjectRegistry_renderGuiFlashCtrlByHash(int hash_) */

void GuiObjectRegistry_renderGuiFlashCtrlByHash(int hash_)

{
  bool bVar1;
  void *this;
  void *local_4;
  
                    /* Looks up a GObject by hash, casts it to GuiFlashCtrl, and renders its GFx
                       movie if found. Returns without action on miss. */
  local_4 = (void *)0x0;
  bVar1 = FUN_00819650(DAT_01be1090,hash_,&local_4);
  if (bVar1) {
    this = (void *)FUN_00d8d382(local_4,0,&GObject::RTTI_Type_Descriptor,
                                &GuiFlashCtrl::RTTI_Type_Descriptor,0);
    if (this != (void *)0x0) {
      GuiGfxMovie_render(this);
    }
  }
  return;
}

