// addr: 0x005e0d87
// name: SparseIntTable_findNextUsedIndex
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int SparseIntTable_findNextUsedIndex(uint * table, uint startIndex) */

int __thiscall SparseIntTable_findNextUsedIndex(void *this,uint *table,uint startIndex)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  
                    /* Scans a sparse block table from startIndex+1 and returns the next slot whose
                       int value is not -1, or one past the known max if none is found. */
  table = (uint *)((int)table + 1);
  uVar5 = *(uint *)((int)this + 0x20);
  uVar1 = uVar5 >> 7;
  uVar3 = (uint)table >> 7;
  if (uVar3 <= uVar1) {
    puVar2 = (uint *)((uVar3 + 1) * 0x80);
    piVar6 = (int *)(*(int *)((int)this + 0x10) + uVar3 * 4);
    do {
      if (*piVar6 != *(int *)((int)this + 0xc)) {
        uVar5 = *(uint *)((int)this + 4) & (uint)table;
        if (uVar5 < *(uint *)this) {
          piVar4 = (int *)(*piVar6 + uVar5 * 4);
          do {
            if (*piVar4 != -1) {
              return *(int *)this * uVar3 + uVar5;
            }
            uVar5 = uVar5 + 1;
            piVar4 = piVar4 + 1;
          } while (uVar5 < *(uint *)this);
        }
        uVar5 = *(uint *)((int)this + 0x20);
        table = puVar2;
      }
      uVar3 = uVar3 + 1;
      piVar6 = piVar6 + 1;
      puVar2 = puVar2 + 0x20;
    } while (uVar3 <= uVar1);
  }
  return uVar5 + 1;
}

