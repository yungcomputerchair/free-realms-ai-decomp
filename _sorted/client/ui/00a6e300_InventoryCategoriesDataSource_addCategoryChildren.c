// addr: 0x00a6e300
// name: InventoryCategoriesDataSource_addCategoryChildren
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void InventoryCategoriesDataSource_addCategoryChildren(void * this, void *
   parentNode) */

void __thiscall InventoryCategoriesDataSource_addCategoryChildren(void *this,void *parentNode)

{
  int *piVar1;
  undefined4 *puVar2;
  void **ppvVar3;
  int iVar4;
  void *pvVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Recursively finds inventory category definitions matching parentNode,
                       allocates child category nodes, attaches them to the tree, and recurses into
                       children. Class inferred from InventoryCategoriesDataSource constructor and
                       category data fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015b9cfb;
  local_c = ExceptionList;
  iVar4 = *(int *)(*(int *)((int)this + 0x38) + 0x1b4 +
                  (*(uint *)((int)parentNode + 0x18) % 0x14) * 4);
  while( true ) {
    if (iVar4 == 0) {
      return;
    }
    ppvVar3 = &local_c;
    if (*(uint *)(iVar4 + 0xc) == *(uint *)((int)parentNode + 0x18)) break;
    iVar4 = *(int *)(iVar4 + 8);
  }
  do {
    ExceptionList = ppvVar3;
    for (puVar2 = *(undefined4 **)
                   (*(int *)((int)this + 0x38) + 0x14 + (*(uint *)(iVar4 + 4) % 100) * 4);
        puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[6]) {
      if (puVar2[7] == *(uint *)(iVar4 + 4)) {
        pvVar5 = Mem_Alloc(0x34);
        local_4 = 0;
        if (pvVar5 == (void *)0x0) {
          pvVar5 = (void *)0x0;
        }
        else {
          pvVar5 = (void *)FUN_00a6e170(*puVar2,puVar2[1],puVar2[2],puVar2[5]);
        }
        local_4 = 0xffffffff;
        GuiTreeDataSource_addChildAndNotify(this,parentNode,pvVar5);
        InventoryCategoriesDataSource_addCategoryChildren(this,pvVar5);
        break;
      }
    }
    piVar1 = (int *)(iVar4 + 0xc);
    iVar4 = *(int *)(iVar4 + 8);
    while( true ) {
      if (iVar4 == 0) {
        ExceptionList = local_c;
        return;
      }
      ppvVar3 = ExceptionList;
      if (*(int *)(iVar4 + 0xc) == *piVar1) break;
      iVar4 = *(int *)(iVar4 + 8);
    }
  } while( true );
}

