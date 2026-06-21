// addr: 0x0083e360
// name: GuiObjectRegistry_findGuiFlashCtrlByHash
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuiObjectRegistry_findGuiFlashCtrlByHash(int hash_) */

void * __cdecl GuiObjectRegistry_findGuiFlashCtrlByHash(int hash_)

{
  bool bVar1;
  void *pvVar2;
  void *local_4;
  
                    /* Looks up an object directly by hash/id in the UI object registry and casts it
                       from GObject to GuiFlashCtrl. Returns null on miss or failed cast. */
  local_4 = (void *)0x0;
  bVar1 = FUN_00819650(DAT_01be1090,hash_,&local_4);
  if (bVar1) {
    pvVar2 = (void *)FUN_00d8d382(local_4,0,&GObject::RTTI_Type_Descriptor,
                                  &GuiFlashCtrl::RTTI_Type_Descriptor,0);
    return pvVar2;
  }
  return (void *)0x0;
}

