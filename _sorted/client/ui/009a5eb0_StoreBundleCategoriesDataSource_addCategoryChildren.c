// addr: 0x009a5eb0
// name: StoreBundleCategoriesDataSource_addCategoryChildren
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StoreBundleCategoriesDataSource_addCategoryChildren(void * treeNode) */

void __thiscall StoreBundleCategoriesDataSource_addCategoryChildren(void *this,void *treeNode)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *pvVar6;
  void **ppvVar7;
  uint uVar8;
  undefined4 *puVar9;
  void *pvVar10;
  int iVar11;
  int iVar12;
  void *in_stack_00000008;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined **local_1c;
  undefined4 *local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Recursively creates and links StoreBundle category tree nodes using priority
                       ordering and GuiTreeDataSource_addChildAndNotify. Evidence is
                       StoreBundleCategories helpers and tree-node add calls. */
  puStack_8 = &LAB_0159d6f0;
  uVar8 = DAT_01b839d8 ^ (uint)&stack0xffffffac;
  iVar2 = *(int *)(*(int *)((int)this + 0x3c) + 0x1c8);
  local_1c = SoeUtil::
             Array<InGamePurchaseDataSource::StoreBundleCategories::CategoriesTreeNode*,0,1>::
             vftable;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 1;
  for (iVar12 = *(int *)((int)treeNode +
                        (*(uint *)((int)in_stack_00000008 + 0x20) & 0x3f) * 4 + 0xdc0);
      ppvVar7 = &local_c, local_c = ExceptionList, iVar12 != 0; iVar12 = *(int *)(iVar12 + 0x40)) {
    if (*(uint *)(iVar12 + 0x3c) == *(uint *)((int)in_stack_00000008 + 0x20))
    goto joined_r0x009a5f35;
  }
  iVar12 = 0;
joined_r0x009a5f35:
  ExceptionList = ppvVar7;
  if (iVar12 != 0) {
    uVar3 = *(uint *)(iVar12 + 4);
    local_28 = uVar3 & 0x7f;
    for (iVar11 = *(int *)(iVar2 + 0x343b8 + local_28 * 4); iVar11 != 0;
        iVar11 = *(int *)(iVar11 + 0x58)) {
      if (*(uint *)(iVar11 + 0x54) == uVar3) {
        local_3c = *(undefined4 *)(iVar11 + 0x34);
        goto LAB_009a5f68;
      }
    }
    local_3c = 0;
LAB_009a5f68:
    uVar4 = *(undefined4 *)(iVar12 + 8);
    puVar9 = (undefined4 *)FUN_0072d5d0(*(undefined4 *)(iVar12 + 0x24),local_24,uVar8);
    uVar5 = *puVar9;
    puVar9 = (undefined4 *)FUN_0072d5d0(*(undefined4 *)(iVar12 + 0x14),local_20);
    local_30 = *puVar9;
    local_38 = uVar4;
    local_34 = uVar5;
    local_2c = uVar3;
    pvVar10 = (void *)FUN_009a31d0(&local_2c,&local_30,&local_34,&local_38,&local_3c,
                                   *(undefined4 *)((int)this + 0x3c));
    if (pvVar10 != (void *)0x0) {
      for (iVar11 = *(int *)((int)treeNode + local_28 * 4 + 0x18); iVar11 != 0;
          iVar11 = *(int *)(iVar11 + 0x58)) {
        if (*(uint *)(iVar11 + 0x54) == uVar3) {
          local_28 = *(uint *)(iVar11 + 0x38);
          goto LAB_009a5ff3;
        }
      }
      local_28 = 0;
LAB_009a5ff3:
      PriorityQueue_insertOrUpdate(&local_1c,(int *)&local_28,pvVar10);
      StoreBundleCategoriesDataSource_addCategoryChildren(this,treeNode);
    }
    iVar11 = *(int *)(iVar12 + 0x40);
    ppvVar7 = ExceptionList;
    if (iVar11 != 0) {
      piVar1 = (int *)(iVar12 + 0x3c);
      do {
        iVar12 = iVar11;
        if (*(int *)(iVar11 + 0x3c) == *piVar1) goto joined_r0x009a5f35;
        iVar11 = *(int *)(iVar11 + 0x40);
      } while (iVar11 != 0);
    }
    iVar12 = 0;
    goto joined_r0x009a5f35;
  }
  if (local_14 != 0) {
    pvVar10 = (void *)*local_18;
    while (pvVar10 != (void *)0x0) {
      iVar2 = *(int *)((int)pvVar10 + 0x18);
      if (iVar2 != -1) {
        pvVar6 = (void *)local_18[local_14 + -1];
        local_14 = local_14 + -1;
        if (pvVar10 != pvVar6) {
          local_18[iVar2] = pvVar6;
          *(int *)((int)pvVar6 + 0x18) = iVar2;
          FUN_00999b80(pvVar6);
        }
        *(undefined4 *)((int)pvVar10 + 0x18) = 0xffffffff;
      }
      GuiTreeDataSource_addChildAndNotify(this,in_stack_00000008,pvVar10);
      if (local_14 == 0) break;
      pvVar10 = (void *)*local_18;
    }
  }
  local_4 = 0xffffffff;
  FUN_0099e4d0();
  ExceptionList = local_c;
  return;
}

