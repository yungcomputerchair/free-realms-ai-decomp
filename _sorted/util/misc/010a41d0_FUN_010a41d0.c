// addr: 0x010a41d0
// name: FUN_010a41d0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void sorted_pair_array_remove_at(int * array, int index_) */

void __thiscall sorted_pair_array_remove_at(void *this,int *array,int index_)

{
  undefined4 *puVar1;
  
                    /* Removes one 8-byte entry from a sorted array by shifting later pairs down,
                       decrementing count, and marking the old tail key as 0xffffffff. */
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  if ((int)array < *(int *)((int)this + 4)) {
    do {
      puVar1 = (undefined4 *)(*(int *)this + (int)array * 8);
      *puVar1 = *(undefined4 *)(*(int *)this + 8 + (int)array * 8);
      array = (int *)((int)array + 1);
      puVar1[1] = puVar1[3];
    } while ((int)array < *(int *)((int)this + 4));
  }
  *(undefined4 *)(*(int *)this + *(int *)((int)this + 4) * 8) = 0xffffffff;
  return;
}

