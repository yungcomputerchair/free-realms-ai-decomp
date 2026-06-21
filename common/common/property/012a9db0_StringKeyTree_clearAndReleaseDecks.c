// addr: 0x012a9db0
// name: StringKeyTree_clearAndReleaseDecks
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StringKeyTree_clearAndReleaseDecks(void * tree) */

void __fastcall StringKeyTree_clearAndReleaseDecks(void *tree)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *local_8;
  undefined4 *local_4;
  
                    /* Clears a string-key tree of deck entries, optionally reinserting preserved
                       decks, releasing the backing DeckDB object, deleting per-node deck pointers,
                       and resetting the tree header. */
  if (*(int *)((int)tree + 0xc) != 0) {
    DeckDB_reinsertUnkeptDecks(tree);
    (**(code **)(**(int **)((int)tree + 0xc) + 0x20))();
    if (*(undefined4 **)((int)tree + 0xc) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)tree + 0xc))(1);
    }
    *(undefined4 *)((int)tree + 0xc) = 0;
  }
  puVar1 = *(undefined4 **)((int)tree + 4);
  local_4 = (undefined4 *)*puVar1;
  local_8 = tree;
  while( true ) {
    puVar3 = local_4;
    pvVar2 = local_8;
    if ((local_8 == (void *)0x0) || (local_8 != tree)) {
      FUN_00d83c2d();
    }
    if (puVar3 == puVar1) break;
    if (pvVar2 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar3 == *(undefined4 **)((int)pvVar2 + 4)) {
      FUN_00d83c2d();
    }
    if ((undefined4 *)puVar3[10] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar3[10])(1);
    }
    StringKeyTreeIterator_next((int *)&local_8);
  }
  StringKeyTree_destroyNodeRecursive(*(void **)(*(int *)((int)tree + 4) + 4));
  *(int *)(*(int *)((int)tree + 4) + 4) = *(int *)((int)tree + 4);
  *(undefined4 *)((int)tree + 8) = 0;
  *(undefined4 *)*(undefined4 *)((int)tree + 4) = *(undefined4 *)((int)tree + 4);
  *(int *)(*(int *)((int)tree + 4) + 8) = *(int *)((int)tree + 4);
  return;
}

