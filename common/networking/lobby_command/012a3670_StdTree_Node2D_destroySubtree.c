// addr: 0x012a3670
// name: StdTree_Node2D_destroySubtree
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdTree_Node2D_destroySubtree(void * param_1) */

void StdTree_Node2D_destroySubtree(void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Recursively destroys a node+0x2d tree subtree, releases the embedded
                       std::string storage at node offset +0x14 when heap-backed, then frees the
                       node. Evidence: skips sentinel nodes by checking byte +0x2d and recurses
                       through the left child. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166b966;
  local_c = ExceptionList;
  if (*(char *)((int)param_1 + 0x2d) != '\0') {
    return;
  }
  ExceptionList = &local_c;
  StdTree_Node2D_destroySubtree(*(void **)((int)param_1 + 8));
  local_4 = 0xffffffff;
  if (0xf < *(uint *)((int)param_1 + 0x28)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x14));
  }
  *(undefined4 *)((int)param_1 + 0x28) = 0xf;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined1 *)((int)param_1 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}

