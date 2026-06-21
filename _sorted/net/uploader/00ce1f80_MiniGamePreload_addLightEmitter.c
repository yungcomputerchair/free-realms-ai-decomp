// addr: 0x00ce1f80
// name: MiniGamePreload_addLightEmitter
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall MiniGamePreload_addLightEmitter(int param_1,int param_2)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Ensures the mini-game preload collection exists, then adds a non-null
                       LightEmitter preload entry. Evidence is caller 00ce2320 processing the
                       "LightEmitter" preload list and this function forwarding to the corresponding
                       asset helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160e1bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      pvVar1 = Mem_Alloc(0x4ec);
      local_4 = 0;
      if (pvVar1 == (void *)0x0) {
        pvVar1 = (void *)0x0;
      }
      else {
        pvVar1 = MiniGamePreloadEntry_dtor(pvVar1);
      }
      *(void **)(param_1 + 0x14) = pvVar1;
    }
    local_4 = 0xffffffff;
    FUN_010c2a50();
  }
  ExceptionList = local_c;
  return;
}

