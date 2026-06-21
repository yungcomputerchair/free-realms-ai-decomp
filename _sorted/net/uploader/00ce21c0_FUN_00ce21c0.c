// addr: 0x00ce21c0
// name: FUN_00ce21c0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_00ce21c0(void * this, int key_) */

void __thiscall FUN_00ce21c0(void *this,int key_)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily creates a container at offset 0x14 and looks up/inserts via
                       FUN_010c2c50 when key is nonzero. No class evidence visible. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160e27b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (key_ != 0) {
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
    FUN_010c2c50();
  }
  ExceptionList = local_c;
  return;
}

