// addr: 0x00ce1e60
// name: MiniGamePreload_addCompositeEffect
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MiniGamePreload_addCompositeEffect(void * this, void * preloadName) */

void __thiscall MiniGamePreload_addCompositeEffect(void *this,void *preloadName)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Ensures the mini-game preload collection exists, then adds a non-null
                       CompositeEffect preload entry through the CompositeEffect asset helper.
                       Evidence is caller 00ce2320 processing the "CompositeEffect" XML section
                       before invoking this function. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160e15b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (preloadName != (void *)0x0) {
    if (*(int *)((int)this + 0x14) == 0) {
      pvVar1 = Mem_Alloc(0x4ec);
      local_4 = 0;
      if (pvVar1 == (void *)0x0) {
        pvVar1 = (void *)0x0;
      }
      else {
        pvVar1 = MiniGamePreloadEntry_dtor(pvVar1);
      }
      *(void **)((int)this + 0x14) = pvVar1;
    }
    local_4 = 0xffffffff;
    FUN_010c2cd0();
  }
  ExceptionList = local_c;
  return;
}

