// addr: 0x0135ce10
// name: RbTreeInt_insertKeyFromOffset14
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RbTreeInt_insertKeyFromOffset14(void * tree, void * record) */

void __cdecl RbTreeInt_insertKeyFromOffset14(void *tree,void *record)

{
  undefined4 local_14;
  void *local_10;
  undefined1 local_c [12];
  
                    /* Builds a temporary key from record+0x14 and calls the tree insertion helper
                       0135aff0. This inserts or finds an integer-keyed red-black-tree entry, but
                       the owning type is unknown. */
  local_14 = *(undefined4 *)((int)tree + 0x14);
  local_10 = tree;
  FUN_0135aff0(local_c,&local_14);
  return;
}

