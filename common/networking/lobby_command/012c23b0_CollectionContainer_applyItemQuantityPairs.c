// addr: 0x012c23b0
// name: CollectionContainer_applyItemQuantityPairs
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionContainer_applyItemQuantityPairs(void * this, void * itemPairs)
    */

void __thiscall CollectionContainer_applyItemQuantityPairs(void *this,void *itemPairs)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  void *this_00;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  void *local_4;
  
                    /* For each item-id/count pair, finds or creates a CollectionItem child, sets
                       its item id, inserts it if needed, and applies the quantity/value. Evidence
                       is PropertyContainer_findChild/insertChildIfPresent,
                       CollectionItem_ctor/setItemId, and pair-vector iteration. */
  local_4 = (void *)0xffffffff;
  puStack_8 = &LAB_0166e43b;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = *(int **)((int)itemPairs + 8);
    if (piVar1 < *(int **)((int)itemPairs + 4)) {
      FUN_00d83c2d(uVar2);
    }
    piVar5 = *(int **)((int)itemPairs + 4);
    if (*(int **)((int)itemPairs + 8) < piVar5) {
      FUN_00d83c2d(uVar2);
    }
    while( true ) {
      if (itemPairs == (void *)0x0) {
        FUN_00d83c2d(uVar2);
      }
      if (piVar5 == piVar1) break;
      if (itemPairs == (void *)0x0) {
        FUN_00d83c2d(uVar2);
      }
      if (*(int **)((int)itemPairs + 8) <= piVar5) {
        FUN_00d83c2d();
      }
      pvVar3 = PropertyContainer_findChild(*(void **)((int)this + 8));
      if (pvVar3 == (void *)0x0) {
        pvVar4 = Mem_Alloc(0x30);
        this_00 = (void *)0x0;
        if (pvVar4 != (void *)0x0) {
          local_4 = pvVar3;
          this_00 = (void *)CollectionItem_ctor();
        }
        local_4 = (void *)0xffffffff;
        if (*(int **)((int)itemPairs + 8) <= piVar5) {
          FUN_00d83c2d();
        }
        CollectionItem_setItemId(this_00,*piVar5);
        if (*(int **)((int)itemPairs + 8) <= piVar5) {
          FUN_00d83c2d();
        }
        PropertyContainer_insertChildIfPresent((void *)*piVar5,this_00);
      }
      if (*(int **)((int)itemPairs + 8) <= piVar5) {
        FUN_00d83c2d();
      }
      FUN_013d3840(piVar5[1]);
      if (*(int **)((int)itemPairs + 8) <= piVar5) {
        FUN_00d83c2d();
      }
      piVar5 = piVar5 + 2;
    }
  }
  ExceptionList = local_c;
  return;
}

