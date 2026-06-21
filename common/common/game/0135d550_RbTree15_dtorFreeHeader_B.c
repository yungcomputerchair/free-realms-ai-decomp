// addr: 0x0135d550
// name: RbTree15_dtorFreeHeader_B
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RbTree15_dtorFreeHeader_B(void * tree) */

void __fastcall RbTree15_dtorFreeHeader_B(void *tree)

{
  undefined1 local_8 [8];
  
                    /* Destroys a red-black tree by clearing nodes via 01358e90 and freeing the
                       header pointer at tree+4. This is another template instantiation of the same
                       tree destructor shape. */
  FUN_01358e90(local_8,tree,**(undefined4 **)((int)tree + 4),tree,*(undefined4 **)((int)tree + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)tree + 4));
}

