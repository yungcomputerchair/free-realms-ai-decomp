// addr: 0x01443bb0
// name: LoginCommand_RbTree_destroySubtree
// subsystem: common/networking/login_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_RbTree_destroySubtree(void * node) */

void LoginCommand_RbTree_destroySubtree(void *node)

{
                    /* Recursively destroys a red-black-tree-style subtree unless the node is the
                       sentinel, then frees the node. This helper has no class RTTI; the name is
                       based on its tree sentinel checks and use by login command container
                       destructors. */
  if (*(char *)((int)node + 0x15) == '\0') {
    LoginCommand_RbTree_destroySubtree(*(void **)((int)node + 8));
                    /* WARNING: Subroutine does not return */
    _free(node);
  }
  return;
}

