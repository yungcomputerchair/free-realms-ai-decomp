// addr: 0x013a20a0
// name: STLTree_destroyStorage
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void STLTree_destroyStorage(void * tree) */

void __fastcall STLTree_destroyStorage(void *tree)

{
  void *local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys all nodes in an STL-style tree and frees the tree header allocation.
                       It calls FUN_013a1640 over the root/header node range, then frees the pointer
                       stored at +4. */
  puStack_8 = &LAB_01685818;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  local_14[0] = tree;
  CollectionDataChildTree_eraseRange
            (tree,local_14,tree,(void *)**(undefined4 **)((int)tree + 4),tree,
             *(undefined4 **)((int)tree + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)tree + 4));
}

