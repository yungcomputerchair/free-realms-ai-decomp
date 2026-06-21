// addr: 0x00ce63d0
// name: BaseItemDefinitionCategoriesDataSource_addCategoryChildren
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void BaseItemDefinitionCategoriesDataSource_addCategoryChildren(void * node)
    */

void BaseItemDefinitionCategoriesDataSource_addCategoryChildren(void *node)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Recursively builds category child nodes and attaches them with
                       GuiTreeDataSource_addChildAndNotify. Evidence is call from the
                       BaseItemDefinition category tree rebuild and recursive tree-node
                       construction. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0160ebbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  for (puVar1 = (undefined4 *)FUN_00ba9d30(DAT_01b839d8 ^ (uint)&stack0xffffffdc);
      puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)FUN_00ba9d40(puVar1)) {
    if (puVar1[1] == *(int *)((int)node + 0x18)) {
      pvVar2 = Mem_Alloc(0xac);
      uStack_4 = 0;
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = (void *)FUN_00ce6020(*puVar1,puVar1[2],puVar1 + 4,puVar1[3],puVar1[7],puVar1[8]);
      }
      uStack_4 = 0xffffffff;
      GuiTreeDataSource_addChildAndNotify(in_ECX,node,pvVar2);
      BaseItemDefinitionCategoriesDataSource_addCategoryChildren(pvVar2);
    }
  }
  ExceptionList = local_c;
  return;
}

