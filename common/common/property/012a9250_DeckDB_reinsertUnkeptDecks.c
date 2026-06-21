// addr: 0x012a9250
// name: DeckDB_reinsertUnkeptDecks
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x012a92ea) */
/* Setting prototype: void DeckDB_reinsertUnkeptDecks(void * stringKeyTree) */

void __fastcall DeckDB_reinsertUnkeptDecks(void *stringKeyTree)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  void *local_10;
  undefined4 *local_c;
  uint local_4;
  
                    /* Walks deck entries and reinserts deck objects whose string key is not found
                       in the keep/range list. */
  puVar1 = *(undefined4 **)((int)stringKeyTree + 4);
  local_c = (undefined4 *)*puVar1;
  local_10 = stringKeyTree;
  while( true ) {
    puVar4 = local_c;
    pvVar3 = local_10;
    if ((local_10 == (void *)0x0) || (local_10 != stringKeyTree)) {
      FUN_00d83c2d();
    }
    if (puVar4 == puVar1) break;
    if (pvVar3 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar4 == *(undefined4 **)((int)pvVar3 + 4)) {
      FUN_00d83c2d();
    }
    if (puVar4[10] != 0) {
      if (puVar4 == *(undefined4 **)((int)pvVar3 + 4)) {
        FUN_00d83c2d();
      }
      uVar2 = *(uint *)((int)stringKeyTree + 0x18);
      if (uVar2 < *(uint *)((int)stringKeyTree + 0x14)) {
        FUN_00d83c2d();
      }
      uVar5 = *(uint *)((int)stringKeyTree + 0x14);
      if (*(uint *)((int)stringKeyTree + 0x18) < uVar5) {
        FUN_00d83c2d();
      }
      local_4 = uVar5;
      uVar5 = StdStringRange_find(uVar5,uVar2,puVar4 + 3);
      uVar2 = *(uint *)((int)stringKeyTree + 0x18);
      if (uVar2 < *(uint *)((int)stringKeyTree + 0x14)) {
        FUN_00d83c2d();
      }
      puVar4 = local_c;
      if (uVar2 == uVar5) {
        if (local_c == *(undefined4 **)((int)local_10 + 4)) {
          FUN_00d83c2d();
        }
        DeckDB_insertDeck(stringKeyTree,(void *)puVar4[10]);
      }
    }
    StringKeyTreeIterator_next((int *)&local_10);
  }
  return;
}

