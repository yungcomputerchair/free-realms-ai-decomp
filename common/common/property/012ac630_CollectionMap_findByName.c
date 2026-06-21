// addr: 0x012ac630
// name: CollectionMap_findByName
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionMap_findByName(void * this, void * out, void * name) */

void __thiscall CollectionMap_findByName(void *this,void *out,void *name)

{
  void *pvVar1;
  int iVar2;
  void **ppvVar3;
  int iVar4;
  void *local_10;
  int local_c;
  void *local_8;
  undefined4 local_4;
  
                    /* Finds a collection-map entry matching a string key using lower_bound and
                       equality verification. It returns the end/sentinel iterator when the
                       lower-bound node is not an exact match. */
  iVar2 = RBTreeString_lowerBound_collectionMap(name);
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
    iVar2 = FUN_00f942a0(0,*(undefined4 *)((int)name + 0x14),iVar4,*(undefined4 *)(iVar2 + 0x20));
    if (-1 < iVar2) {
      ppvVar3 = &local_10;
      goto LAB_012ac693;
    }
  }
  local_4 = *(undefined4 *)((int)this + 4);
  local_8 = this;
  ppvVar3 = &local_8;
LAB_012ac693:
  pvVar1 = ppvVar3[1];
  *(void **)out = *ppvVar3;
  *(void **)((int)out + 4) = pvVar1;
  return;
}

