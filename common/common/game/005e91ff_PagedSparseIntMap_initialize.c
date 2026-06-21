// addr: 0x005e91ff
// name: PagedSparseIntMap_initialize
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PagedSparseIntMap_initialize(void * this, int keyMask, int defaultValue)
    */

bool __thiscall PagedSparseIntMap_initialize(void *this,int keyMask,int defaultValue)

{
  void *_Memory;
  
                    /* Clears and initializes a paged sparse integer map with a key mask/default
                       value, setting the first page metadata and min/max bounds. */
  RbTree_clear((void *)((int)this + 0x24));
  _Memory = *(void **)((int)this + 0xc);
  if (*(int *)((int)_Memory + 0x1008) == 0) {
    *(void **)((int)this + 0x10) = _Memory;
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)_Memory + 0x1000) = 0;
    *(int *)((int)this + 4) = keyMask;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    *(uint *)((int)this + 0x1c) = -(uint)(keyMask != 0);
    *(int *)((int)this + 0x18) = defaultValue;
    return true;
  }
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)_Memory + 0x1008);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}

