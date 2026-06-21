// addr: 0x005db567
// name: StdVector8_at_005db567
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int StdVector8_at_005db567(void * this, uint index) */

int __thiscall StdVector8_at_005db567(void *this,uint index)

{
  uint uVar1;
  
                    /* Bounds-checks access to a vector whose elements are 8 bytes. */
  uVar1 = StdVector8_size(this);
  if (uVar1 <= index) {
    FUN_00d83c2d();
  }
  return *(int *)((int)this + 4) + index * 8;
}

