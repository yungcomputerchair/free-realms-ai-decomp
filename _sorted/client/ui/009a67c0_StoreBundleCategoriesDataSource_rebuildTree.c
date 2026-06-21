// addr: 0x009a67c0
// name: StoreBundleCategoriesDataSource_rebuildTree
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StoreBundleCategoriesDataSource_rebuildTree(void * this) */

void __fastcall StoreBundleCategoriesDataSource_rebuildTree(void *this)

{
  void *this_00;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined1 *child;
  int iVar6;
  undefined4 *puVar7;
  void *pvVar8;
  int iVar9;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined1 *local_28;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined4 *puStack_18;
  int iStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Rebuilds the StoreBundle category tree by removing the old root, creating a
                       new root, building prioritized category nodes, recursively adding children,
                       and cleaning up the priority queue. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0159d818;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar7 = *(undefined4 **)((int)this + -8);
  this_00 = (void *)((int)this + -0x38);
  if (puVar7 != (undefined4 *)0x0) {
    FUN_009a60d0();
    GuiTreeDataSource_removeChildAndNotify(this_00,puVar7);
    (**(code **)*puVar7)();
    FUN_009a05e0();
  }
  iVar1 = *(int *)(*(int *)((int)this + 4) + 0x1c8);
  if (iVar1 == 0) {
    ExceptionList = local_c;
    return;
  }
  if (*(int *)(iVar1 + 0x343b4) < 1) {
    ExceptionList = local_c;
    return;
  }
  local_28 = &stack0xffffffa0;
  uStack_40 = FUN_00c37da0();
  uStack_30 = DAT_01be58c4;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  child = (undefined1 *)FUN_009a31d0(&uStack_30,&uStack_34,&uStack_38,&uStack_3c,&uStack_40);
  local_28 = child;
  GuiTreeDataSource_addChildAndNotify(this_00,(void *)0x0,child);
  StoreBundleCategories_CategoriesTreeNodeArray_ctor(auStack_1c);
  uStack_4 = 0;
  for (iVar9 = *(int *)(iVar1 + 0x35160 + (DAT_01be591c & 0x3f) * 4); iVar9 != 0;
      iVar9 = *(int *)(iVar9 + 0x40)) {
    if (*(uint *)(iVar9 + 0x3c) == DAT_01be591c) goto LAB_009a68f0;
  }
LAB_009a6a25:
  if (iStack_14 != 0) {
    pvVar8 = (void *)*puStack_18;
    while (pvVar8 != (void *)0x0) {
      iVar1 = *(int *)((int)pvVar8 + 0x18);
      if (iVar1 != -1) {
        pvVar5 = (void *)puStack_18[iStack_14 + -1];
        iStack_14 = iStack_14 + -1;
        if (pvVar8 != pvVar5) {
          puStack_18[iVar1] = pvVar5;
          *(int *)((int)pvVar5 + 0x18) = iVar1;
          FUN_00999b80();
        }
        *(undefined4 *)((int)pvVar8 + 0x18) = 0xffffffff;
      }
      GuiTreeDataSource_addChildAndNotify(this_00,child,pvVar8);
      if (iStack_14 == 0) break;
      pvVar8 = (void *)*puStack_18;
    }
  }
  uStack_4 = 0xffffffff;
  FUN_0099e4d0();
  ExceptionList = local_c;
  return;
LAB_009a68f0:
  do {
    uVar2 = *(uint *)(iVar9 + 4);
    if (uVar2 == 0x2711) {
      iVar6 = *(int *)(iVar9 + 0x40);
      if (iVar6 != 0) {
        do {
          if (*(int *)(iVar6 + 0x3c) == *(int *)(iVar9 + 0x3c)) goto LAB_009a6a17;
          iVar6 = *(int *)(iVar6 + 0x40);
        } while (iVar6 != 0);
      }
      iVar6 = 0;
    }
    else {
      uStack_2c = uVar2 & 0x7f;
      for (iVar6 = *(int *)(iVar1 + 0x343b8 + uStack_2c * 4); iVar6 != 0;
          iVar6 = *(int *)(iVar6 + 0x58)) {
        if (*(uint *)(iVar6 + 0x54) == uVar2) {
          uStack_30 = *(undefined4 *)(iVar6 + 0x34);
          goto LAB_009a6942;
        }
      }
      uStack_30 = 0;
LAB_009a6942:
      uVar3 = *(undefined4 *)(iVar9 + 8);
      puVar7 = (undefined4 *)FUN_0072d5d0(*(undefined4 *)(iVar9 + 0x24));
      uVar4 = *puVar7;
      puVar7 = (undefined4 *)FUN_0072d5d0(*(undefined4 *)(iVar9 + 0x14),auStack_20);
      uStack_3c = *puVar7;
      uStack_40 = uVar2;
      uStack_38 = uVar4;
      uStack_34 = uVar3;
      pvVar8 = (void *)FUN_009a31d0(&uStack_40,&uStack_3c,&uStack_38,&uStack_34,&uStack_30);
      for (iVar6 = *(int *)(iVar1 + 0x343b8 + uStack_2c * 4); iVar6 != 0;
          iVar6 = *(int *)(iVar6 + 0x58)) {
        if (*(uint *)(iVar6 + 0x54) == uVar2) {
          uStack_2c = *(uint *)(iVar6 + 0x38);
          goto LAB_009a69d2;
        }
      }
      uStack_2c = 0;
LAB_009a69d2:
      PriorityQueue_insertOrUpdate(auStack_1c,(int *)&uStack_2c,pvVar8);
      StoreBundleCategoriesDataSource_addCategoryChildren(this_00,(void *)(iVar1 + 0x343a0));
      iVar6 = *(int *)(iVar9 + 0x40);
      if (iVar6 != 0) {
        do {
          if (*(int *)(iVar6 + 0x3c) == *(int *)(iVar9 + 0x3c)) goto LAB_009a6a17;
          iVar6 = *(int *)(iVar6 + 0x40);
        } while (iVar6 != 0);
      }
      iVar6 = 0;
    }
LAB_009a6a17:
    child = local_28;
    iVar9 = iVar6;
  } while (iVar6 != 0);
  goto LAB_009a6a25;
}

