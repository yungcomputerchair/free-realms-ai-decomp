// addr: 0x013dcf30
// name: FUN_013dcf30
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DeckEditor_refreshDefaultCollectionView(void * this) */

void __fastcall DeckEditor_refreshDefaultCollectionView(void *this)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
                    /* Resolves the default collection view and applies each existing selected
                       item/property to the collection view handler. */
  CollectionDB_resolveDefaultCollectionView
            ((void *)((int)this + 0xf0),(void *)((int)this + 0xf8),(int *)((int)this + 0xdc));
  if (*(int *)((int)this + 0xc) != 0) {
    iVar2 = (**(code **)(**(int **)((int)this + 0xc) + 0x48))();
    puVar3 = *(undefined4 **)(iVar2 + 4);
    if (*(undefined4 **)(iVar2 + 8) < puVar3) {
      FUN_00d83c2d();
    }
    while( true ) {
      puVar1 = *(undefined4 **)(iVar2 + 8);
      if (puVar1 < *(undefined4 **)(iVar2 + 4)) {
        FUN_00d83c2d();
      }
      if (puVar3 == puVar1) break;
      if (*(undefined4 **)(iVar2 + 8) <= puVar3) {
        FUN_00d83c2d();
      }
      (**(code **)(*(int *)((int)this + 0xdc) + 0x14))(*puVar3,1);
      if (*(undefined4 **)(iVar2 + 8) <= puVar3) {
        FUN_00d83c2d();
      }
      puVar3 = puVar3 + 2;
    }
  }
  return;
}

