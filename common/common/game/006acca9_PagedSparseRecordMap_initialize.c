// addr: 0x006acca9
// name: PagedSparseRecordMap_initialize
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PagedSparseRecordMap_initialize(void * this, int keyMask, int
   defaultValue) */

bool __thiscall PagedSparseRecordMap_initialize(void *this,int keyMask,int defaultValue)

{
  void *_Memory;
  
                    /* Clears and initializes the larger paged sparse map variant, setting
                       first-page metadata and min/max key bounds. */
  RbTree_clear_006a((void *)((int)this + 0x24));
  if (*(int *)(*(int *)((int)this + 0xc) + 0x2008) != 0) {
    _Memory = *(void **)((int)this + 0xc);
    *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)_Memory + 0x2008);
    FUN_006aab4f();
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)(*(int *)((int)this + 0xc) + 0x2000) = 0;
  *(int *)((int)this + 4) = keyMask;
  *(undefined4 *)((int)this + 8) = 0;
  *(uint *)((int)this + 0x1c) = -(uint)(keyMask != 0);
  *(undefined4 *)((int)this + 0x20) = 0;
  *(int *)((int)this + 0x18) = defaultValue;
  return true;
}

