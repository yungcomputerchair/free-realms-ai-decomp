// addr: 0x012a3c00
// name: StdTree_Node2D_clear
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdTree_Node2D_clear(void * param_1) */

void __fastcall StdTree_Node2D_clear(void *param_1)

{
                    /* Clears all nodes from a node+0x2d tree and resets the header links and
                       element count to the empty-tree state. Evidence: destroys the header's root
                       subtree through StdTree_Node2D_destroySubtree and then self-links the header.
                        */
  StdTree_Node2D_destroySubtree(*(void **)(*(int *)((int)param_1 + 4) + 4));
  *(int *)(*(int *)((int)param_1 + 4) + 4) = *(int *)((int)param_1 + 4);
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)param_1 + 4);
  *(int *)(*(int *)((int)param_1 + 4) + 8) = *(int *)((int)param_1 + 4);
  return;
}

