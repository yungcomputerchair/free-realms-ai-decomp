// addr: 0x005e442a
// name: PagedSparseIntMap_setValue
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PagedSparseIntMap_setValue(void * this, int key, int * value) */

void __thiscall PagedSparseIntMap_setValue(void *this,int key,int *value)

{
  longlong lVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  uint unaff_EDI;
  uint uVar6;
  int iVar7;
  
                    /* Sets or erases a key in a paged sparse integer map using -1 as the empty
                       value, allocating/freeing pages and maintaining population plus min/max key
                       bounds. */
  uVar6 = (uint)key >> 7;
  uVar2 = *(uint *)((int)this + 4) & key;
  if (*value == -1) {
    iVar7 = uVar6 * 4;
    iVar4 = *(int *)(*(int *)((int)this + 0x10) + iVar7);
    if ((iVar4 != *(int *)((int)this + 0xc)) && (piVar3 = (int *)(iVar4 + uVar2 * 4), *piVar3 != -1)
       ) {
      *piVar3 = -1;
      *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
      piVar3 = (int *)(*(int *)((int)this + 0x14) + iVar7);
      *piVar3 = *piVar3 + -1;
      if (*(int *)(iVar7 + *(int *)((int)this + 0x14)) == 0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(iVar7 + *(int *)((int)this + 0x10)));
      }
      if (key == *(int *)((int)this + 0x1c)) {
        iVar4 = SparseIntTable_findNextUsedIndex(this,(uint *)key,unaff_EDI);
        *(int *)((int)this + 0x1c) = iVar4;
      }
      else if (key == *(int *)((int)this + 0x20)) {
        *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + 1;
      }
    }
  }
  else {
    iVar4 = *(int *)(*(int *)((int)this + 0x10) + uVar6 * 4);
    if (*(int *)(iVar4 + uVar2 * 4) == -1) {
      if (iVar4 == *(int *)((int)this + 0xc)) {
        lVar1 = (ulonglong)*(uint *)((int)this + 8) * 4;
        pvVar5 = Mem_Alloc(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
        uVar2 = 0;
        if (*(int *)((int)this + 8) != 0) {
          do {
            *(undefined4 *)((int)pvVar5 + uVar2 * 4) = 0xffffffff;
            uVar2 = uVar2 + 1;
          } while (uVar2 < *(uint *)((int)this + 8));
        }
        *(void **)(*(int *)((int)this + 0x10) + uVar6 * 4) = pvVar5;
      }
      piVar3 = (int *)(*(int *)((int)this + 0x14) + uVar6 * 4);
      *piVar3 = *piVar3 + 1;
      *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
      if ((uint)key < *(uint *)((int)this + 0x1c)) {
        *(int *)((int)this + 0x1c) = key;
      }
      else if (*(uint *)((int)this + 0x20) < (uint)key) {
        *(int *)((int)this + 0x20) = key;
      }
    }
    *(int *)(*(int *)(*(int *)((int)this + 0x10) + uVar6 * 4) + (*(uint *)((int)this + 4) & key) * 4
            ) = *value;
  }
  return;
}

