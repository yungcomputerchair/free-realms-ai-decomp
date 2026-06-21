// addr: 0x010a4170
// name: FUN_010a4170
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void sorted_pair_array_insert(int * array, uint key_, undefined4 value_) */

void __thiscall sorted_pair_array_insert(void *this,int *array,uint key_,undefined4 value_)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
                    /* Inserts an 8-byte key/value pair into a sorted in-place array by shifting
                       later entries and incrementing the count. */
  iVar4 = *(int *)((int)this + 4);
  iVar1 = iVar4 * 8;
  piVar2 = *(int **)(iVar1 + *(int *)this);
  while ((array < piVar2 && (0 < iVar4))) {
    puVar3 = (undefined4 *)(iVar1 + *(int *)this);
    *puVar3 = puVar3[-2];
    puVar3[1] = puVar3[-1];
    iVar4 = iVar4 + -1;
    iVar1 = iVar4 * 8;
    piVar2 = *(int **)(iVar1 + *(int *)this);
  }
  *(int **)(*(int *)this + iVar4 * 8) = array;
  *(uint *)(*(int *)this + 4 + iVar4 * 8) = key_;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return;
}

