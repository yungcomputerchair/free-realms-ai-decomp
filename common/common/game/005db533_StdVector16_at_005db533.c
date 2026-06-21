// addr: 0x005db533
// name: StdVector16_at_005db533
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int StdVector16_at_005db533(void * this, uint index) */

int __thiscall StdVector16_at_005db533(void *this,uint index)

{
  uint uVar1;
  
                    /* Bounds-checks access to a vector whose elements are 0x10 bytes. */
  uVar1 = StdVector16_size_005db4ff(this);
  if (uVar1 <= index) {
    FUN_00d83c2d();
  }
  return index * 0x10 + *(int *)((int)this + 4);
}

