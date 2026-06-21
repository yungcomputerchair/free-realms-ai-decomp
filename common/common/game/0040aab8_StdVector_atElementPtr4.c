// addr: 0x0040aab8
// name: StdVector_atElementPtr4
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StdVector_atElementPtr4(void * this, int index) */

void * __thiscall StdVector_atElementPtr4(void *this,int index)

{
  uint uVar1;
  
                    /* Bounds-checks a vector index against size() and returns the address of a
                       4-byte element at begin + index*4. */
  uVar1 = StdVector_size(this);
  if (uVar1 <= (uint)index) {
    FUN_00d83c2d();
  }
  return (void *)(*(int *)((int)this + 4) + index * 4);
}

