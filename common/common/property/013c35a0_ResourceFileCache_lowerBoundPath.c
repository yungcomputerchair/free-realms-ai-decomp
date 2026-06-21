// addr: 0x013c35a0
// name: ResourceFileCache_lowerBoundPath
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ResourceFileCache_lowerBoundPath(void * tree, void * outIt, void * path)
    */

void __thiscall ResourceFileCache_lowerBoundPath(void *this,void *tree,void *outIt,void *path)

{
  void *pvVar1;
  int iVar2;
  void **ppvVar3;
  int iVar4;
  void *local_10;
  int local_c;
  void *local_8;
  undefined4 local_4;
  
                    /* Finds the lower-bound/cache iterator for a resource path string. */
  iVar2 = FUN_00f94a90(outIt);
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
    iVar2 = FUN_00f942a0(0,*(undefined4 *)((int)outIt + 0x14),iVar4,*(undefined4 *)(iVar2 + 0x20));
    if (-1 < iVar2) {
      ppvVar3 = &local_10;
      goto LAB_013c3603;
    }
  }
  local_4 = *(undefined4 *)((int)this + 4);
  local_8 = this;
  ppvVar3 = &local_8;
LAB_013c3603:
  pvVar1 = ppvVar3[1];
  *(void **)tree = *ppvVar3;
  *(void **)((int)tree + 4) = pvVar1;
  return;
}

