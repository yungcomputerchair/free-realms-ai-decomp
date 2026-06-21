// addr: 0x00a6e480
// name: InventoryCategoriesDataSource_rebuildTree
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void InventoryCategoriesDataSource_rebuildTree(void * this) */

void __fastcall InventoryCategoriesDataSource_rebuildTree(void *this)

{
  undefined4 *node;
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Clears the old inventory category tree, creates the root node, adds category
                       children, and notifies bound GuiTreeCtrl instances. Evidence is inventory
                       category datasource call pattern and GuiTreeDataSource add/reset calls. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_015b9d36;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  node = *(undefined4 **)((int)this + 0x30);
  if (node != (undefined4 *)0x0) {
    GuiTreeDataSource_removeChildAndNotify(this,node);
    (**(code **)*node)(1,uVar3);
  }
  pvVar4 = Mem_Alloc(0x34);
  uStack_4 = 0;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = (void *)FUN_00a6e170(0,0,0,1);
  }
  uStack_4 = 0xffffffff;
  GuiTreeDataSource_addChildAndNotify(this,(void *)0x0,pvVar4);
  puVar1 = *(uint **)(*(int *)((int)this + 0x38) + 8);
  do {
    if (puVar1 == (uint *)0x0) {
      (**(code **)(*(int *)this + 0x10))();
      ExceptionList = local_c;
      return;
    }
    for (puVar2 = *(uint **)(*(int *)((int)this + 0x38) + 0x210 + (*puVar1 % 0x14) * 4);
        puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[2]) {
      if (*puVar2 == *puVar1) {
        if (puVar2 != (uint *)0xfffffffc) goto LAB_00a6e5a1;
        break;
      }
    }
    pvVar5 = Mem_Alloc(0x34);
    uStack_4 = 1;
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = (void *)FUN_00a6e170(*puVar1,puVar1[1],puVar1[2],puVar1[5]);
    }
    uStack_4 = 0xffffffff;
    GuiTreeDataSource_addChildAndNotify(this,pvVar4,pvVar5);
    InventoryCategoriesDataSource_addCategoryChildren(this,pvVar5);
LAB_00a6e5a1:
    puVar1 = (uint *)puVar1[9];
  } while( true );
}

