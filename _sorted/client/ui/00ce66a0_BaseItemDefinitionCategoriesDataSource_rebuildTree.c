// addr: 0x00ce66a0
// name: BaseItemDefinitionCategoriesDataSource_rebuildTree
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void BaseItemDefinitionCategoriesDataSource_rebuildTree(void * this) */

void __fastcall BaseItemDefinitionCategoriesDataSource_rebuildTree(void *this)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Rebuilds the BaseItemDefinition category tree: removes old root, creates a
                       new root node, enumerates top-level categories, recursively adds children,
                       then notifies/reset-clears rebuilding state. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0160ec56;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  puVar3 = *(undefined4 **)((int)this + 0x30);
  if (puVar3 != (undefined4 *)0x0) {
    GuiTreeDataSource_removeChildAndNotify(this,puVar3);
    (**(code **)*puVar3)(1,uVar1);
  }
  *(undefined1 *)((int)this + 0x40) = 1;
  pvVar2 = Mem_Alloc(0xac);
  uStack_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvStack_14 = (void *)0x0;
  }
  else {
    pvStack_14 = (void *)FUN_00ce6020(0,0,0,0,0,0);
  }
  uStack_4 = 0xffffffff;
  GuiTreeDataSource_addChildAndNotify(this,(void *)0x0,pvStack_14);
  for (puVar3 = (undefined4 *)FUN_00ba9d30(); puVar3 != (undefined4 *)0x0;
      puVar3 = (undefined4 *)FUN_00ba9d40(puVar3)) {
    if (puVar3[1] == 0) {
      pvVar2 = Mem_Alloc(0xac);
      uStack_4 = 1;
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = (void *)FUN_00ce6020(*puVar3,puVar3[2],puVar3 + 4,puVar3[3],puVar3[7],puVar3[8]);
      }
      uStack_4 = 0xffffffff;
      GuiTreeDataSource_addChildAndNotify(this,pvStack_14,pvVar2);
      BaseItemDefinitionCategoriesDataSource_addCategoryChildren(pvVar2);
    }
  }
  (**(code **)(*(int *)this + 0x10))();
  *(undefined1 *)((int)this + 0x40) = 0;
  ExceptionList = local_c;
  return;
}

