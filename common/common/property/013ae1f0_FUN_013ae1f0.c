// addr: 0x013ae1f0
// name: FUN_013ae1f0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionTree_collectKeys_B(void * tree, void * outVector) */

void __thiscall CollectionTree_collectKeys_B(void *this,void *tree,void *outVector)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_18 [4];
  int local_14;
  undefined1 local_10 [12];
  
                    /* Iterates a second collection tree and appends each node key/value at offset
                       0x0c to an output vector. */
  uVar1 = *(uint *)((int)tree + 8);
  if (uVar1 < *(uint *)((int)tree + 4)) {
    FUN_00d83c2d();
  }
  uVar2 = *(uint *)((int)tree + 4);
  if (*(uint *)((int)tree + 8) < uVar2) {
    FUN_00d83c2d();
  }
  FUN_0041f5e6(local_18,tree,uVar2,tree,uVar1);
  iVar3 = **(int **)((int)this + 8);
  while( true ) {
    local_14 = *(int *)((int)this + 8);
    if (this == (void *)0xfffffffc) {
      FUN_00d83c2d();
    }
    if (iVar3 == local_14) break;
    if (this == (void *)0xfffffffc) {
      FUN_00d83c2d();
    }
    if (iVar3 == *(int *)((int)this + 8)) {
      FUN_00d83c2d();
    }
    uVar1 = *(uint *)((int)tree + 4);
    if ((uVar1 == 0) ||
       ((uint)((int)(*(int *)((int)tree + 0xc) - uVar1) >> 2) <=
        (uint)((int)(*(int *)((int)tree + 8) - uVar1) >> 2))) {
      uVar2 = *(uint *)((int)tree + 8);
      if (uVar2 < uVar1) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(local_10,tree,uVar2,(undefined4 *)(iVar3 + 0xc));
    }
    else {
      puVar4 = *(undefined4 **)((int)tree + 8);
      *puVar4 = *(undefined4 *)(iVar3 + 0xc);
      *(undefined4 **)((int)tree + 8) = puVar4 + 1;
    }
    FUN_013aa8c0();
  }
  return;
}

