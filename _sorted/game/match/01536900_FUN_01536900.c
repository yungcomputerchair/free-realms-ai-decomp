// addr: 0x01536900
// name: FUN_01536900
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void stringTree_findMatchingRecord(int tree_, int * outIter, void * key) */

void __thiscall stringTree_findMatchingRecord(void *this,int tree_,int *outIter,void *key)

{
  void *pvVar1;
  int iVar2;
  void **ppvVar3;
  int iVar4;
  void *local_10;
  int local_c;
  void *local_8;
  undefined4 local_4;
  
                    /* Finds a string-keyed tree entry whose stored string contains/matches the
                       supplied string and returns its iterator, or end if not found. */
  iVar2 = FUN_01536780(outIter);
  local_c = iVar2;
  if (this == (void *)0x0) {
    FUN_00d83c2d();
  }
  local_10 = this;
  if (iVar2 != *(int *)((int)this + 4)) {
    if (*(uint *)(iVar2 + 0x24) < 0x10) {
      iVar4 = iVar2 + 0x10;
    }
    else {
      iVar4 = *(int *)(iVar2 + 0x10);
    }
    iVar2 = FUN_00f942a0(0,outIter[5],iVar4,*(undefined4 *)(iVar2 + 0x20));
    if (-1 < iVar2) {
      ppvVar3 = &local_10;
      goto LAB_01536963;
    }
  }
  local_4 = *(undefined4 *)((int)this + 4);
  local_8 = this;
  ppvVar3 = &local_8;
LAB_01536963:
  pvVar1 = ppvVar3[1];
  *(void **)tree_ = *ppvVar3;
  *(void **)(tree_ + 4) = pvVar1;
  return;
}

