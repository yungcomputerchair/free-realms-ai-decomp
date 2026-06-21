// addr: 0x005db353
// name: StdVectorDword_at_005db353
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int StdVectorDword_at_005db353(void * this, uint index) */

int __thiscall StdVectorDword_at_005db353(void *this,uint index)

{
  uint uVar1;
  
                    /* Bounds-checks a dword vector access and returns the selected element address.
                        */
  uVar1 = StdVector_size(this);
  if (uVar1 <= index) {
    FUN_00d83c2d();
  }
  return *(int *)((int)this + 4) + index * 4;
}

