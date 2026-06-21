// addr: 0x00c54f00
// name: SceneText_cacheFlashControl
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SceneText_cacheFlashControl(void * this) */

void __fastcall SceneText_cacheFlashControl(void *this)

{
  bool bVar1;
  int id_;
  undefined4 uVar2;
  void **outObject;
  void *local_4;
  
                    /* Finds Main.wndSceneText.swfSceneText as a GuiFlashCtrl and caches it at
                       this+0xf44, or clears the cache on failure. The string names the scene text
                       flash widget. */
  outObject = &local_4;
  local_4 = (void *)0x0;
  id_ = FUN_00705bc0("Main.wndSceneText.swfSceneText");
  bVar1 = FUN_00819650(DAT_01be1090,id_,outObject);
  if (bVar1) {
    uVar2 = FUN_00d8d382(local_4,0,&GObject::RTTI_Type_Descriptor,
                         &GuiFlashCtrl::RTTI_Type_Descriptor,0);
    *(undefined4 *)((int)this + 0xf44) = uVar2;
    return;
  }
  *(undefined4 *)((int)this + 0xf44) = 0;
  return;
}

