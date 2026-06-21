// addr: 0x006aa8af
// name: SegmentedIterator2000_setLimit
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint SegmentedIterator2000_setLimit(void * it, uint limit) */

uint __thiscall SegmentedIterator2000_setLimit(void *this,void *it,uint limit)

{
  uint uVar1;
  
                    /* Stores a limit/index value at iterator offset +0x1c, zeroing it if the
                       iterator has no owner at +4. */
  uVar1 = -(uint)(*(int *)((int)this + 4) != 0) & (uint)it;
  *(uint *)((int)this + 0x1c) = uVar1;
  return CONCAT31((int3)(uVar1 >> 8),1);
}

