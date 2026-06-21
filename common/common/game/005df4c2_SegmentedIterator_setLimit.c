// addr: 0x005df4c2
// name: SegmentedIterator_setLimit
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint SegmentedIterator_setLimit(void * it, uint limit) */

uint __thiscall SegmentedIterator_setLimit(void *this,void *it,uint limit)

{
  uint uVar1;
  
                    /* Stores a limit/index value at iterator offset +0x1c, forcing it to zero when
                       the iterator's owner pointer at +4 is null. */
  uVar1 = -(uint)(*(int *)((int)this + 4) != 0) & (uint)it;
  *(uint *)((int)this + 0x1c) = uVar1;
  return CONCAT31((int3)(uVar1 >> 8),1);
}

