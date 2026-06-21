// addr: 0x005f6ef8
// name: CheckedTreeNode21B_destroyAndFree
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CheckedTreeNode21B_destroyAndFree(void * node) */

void __fastcall CheckedTreeNode21B_destroyAndFree(void *node)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Destroys and frees a checked tree node using the nodeFlag21B iterator
                       variant. */
  CheckedTreeIterator_ctor_nodeFlag21B(*(undefined4 *)((int)node + 4),node);
  CheckedTreeIterator_ctor_nodeFlag21B(**(undefined4 **)((int)node + 4),node);
  StdRbTree_node21B_eraseRange(&local_14,local_14,local_10,local_c,local_8);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)node + 4));
}

