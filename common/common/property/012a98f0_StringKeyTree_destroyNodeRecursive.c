// addr: 0x012a98f0
// name: StringKeyTree_destroyNodeRecursive
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StringKeyTree_destroyNodeRecursive(void * node) */

void StringKeyTree_destroyNodeRecursive(void *node)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Recursively destroys and frees a string-key RB-tree node and its right
                       subtree, then releases the node's heap string buffer if it exceeds SSO
                       capacity. Sentinel nodes with flag at +0x2d are ignored. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166c3b3;
  local_c = ExceptionList;
  if (*(char *)((int)node + 0x2d) != '\0') {
    return;
  }
  ExceptionList = &local_c;
  StringKeyTree_destroyNodeRecursive(*(void **)((int)node + 8));
  local_4 = 0xffffffff;
  if (0xf < *(uint *)((int)node + 0x24)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)node + 0x10));
  }
  *(undefined4 *)((int)node + 0x24) = 0xf;
  *(undefined4 *)((int)node + 0x20) = 0;
  *(undefined1 *)((int)node + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
  _free(node);
}

