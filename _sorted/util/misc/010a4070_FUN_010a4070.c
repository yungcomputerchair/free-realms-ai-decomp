// addr: 0x010a4070
// name: FUN_010a4070
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void find_first_sorted_pair_index(int * array, uint key_) */

void __thiscall find_first_sorted_pair_index(void *this,int *array,uint key_)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
                    /* Performs a binary search in a sorted array of 8-byte key/value pairs and
                       backs up to the first duplicate key; decompiler dropped the return. Owner
                       class is not evident. */
  uVar4 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  iVar2 = *(int *)((int)this + 4) / 2;
  piVar3 = *(int **)(iVar1 + iVar2 * 8);
  uVar5 = 0;
  while ((array != piVar3 && ((int)uVar5 < (int)uVar4))) {
    uVar5 = uVar5 ^ (iVar2 + 1U ^ uVar5) & (array < piVar3) - 1;
    uVar4 = uVar4 ^ (iVar2 - 1U ^ uVar4) & -(uint)(array < piVar3);
    iVar2 = (int)(uVar4 + uVar5) / 2;
    piVar3 = *(int **)(iVar1 + iVar2 * 8);
  }
  if (0 < iVar2) {
    piVar3 = (int *)(iVar1 + iVar2 * 8);
    do {
      if (piVar3[-2] != *piVar3) {
        return;
      }
      iVar2 = iVar2 + -1;
      piVar3 = piVar3 + -2;
    } while (0 < iVar2);
  }
  return;
}

