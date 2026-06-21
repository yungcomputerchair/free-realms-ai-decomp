// addr: 0x005f2f0b
// name: CheckedTreeNode21A_destroyAndFree
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CheckedTreeNode21A_destroyAndFree(void * node) */

void __fastcall CheckedTreeNode21A_destroyAndFree(void *node)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Destroys and frees a checked tree node using the nodeFlag21A iterator
                       variant. */
  CheckedTreeIterator_ctor_nodeFlag21A(*(undefined4 *)((int)node + 4),node);
  CheckedTreeIterator_ctor_nodeFlag21A(**(undefined4 **)((int)node + 4),node);
  StdRbTree_node21A_eraseRange(&local_14,local_14,local_10,local_c,local_8);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)node + 4));
}

