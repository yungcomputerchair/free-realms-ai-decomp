// addr: 0x00563f4b
// name: StdVector24_truncateAndRelease
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVector24_truncateAndRelease(void * this, int newSize) */

void __thiscall StdVector24_truncateAndRelease(void *this,int newSize)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* Shrinks a vector of 0x18-byte records, releasing per-record handles/resources
                       before updating the count. */
  iVar2 = *(int *)((int)this + 0x40);
  if (newSize < iVar2) {
    iVar3 = iVar2 * 0x18;
    iVar2 = iVar2 - newSize;
    do {
      iVar1 = *(int *)(iVar3 + 4 + *(int *)((int)this + 0x3c));
      if (iVar1 != -1) {
        RbTree006a_insertUnique(iVar1);
      }
      if (*(int *)(*(int *)((int)this + 0x3c) + iVar3 + 0x14) != 0) {
        FUN_00550433();
      }
      iVar3 = iVar3 + -0x18;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(int *)((int)this + 0x40) = newSize;
  return;
}

