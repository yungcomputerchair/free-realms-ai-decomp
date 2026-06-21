// addr: 0x00ce2130
// name: FUN_00ce2130
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_00ce2130(void * this, int key_) */

void __thiscall FUN_00ce2130(void *this,int key_)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily creates the same container at offset 0x14 and delegates
                       insertion/update to FUN_010c2bd0 for a nonzero key. Class identity unknown.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160e24b;
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
    FUN_010c2bd0(key_);
  }
  ExceptionList = local_c;
  return;
}

