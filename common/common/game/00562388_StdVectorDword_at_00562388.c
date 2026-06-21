// addr: 0x00562388
// name: StdVectorDword_at_00562388
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int StdVectorDword_at_00562388(void * this, uint index) */

int __thiscall StdVectorDword_at_00562388(void *this,uint index)

{
  uint uVar1;
  
                    /* Bounds-checks a dword vector index and returns the address of the selected
                       4-byte element. */
  uVar1 = FUN_00552f85();
  if (uVar1 <= index) {
    FUN_00d83c2d();
  }
  return *(int *)((int)this + 4) + index * 4;
}

