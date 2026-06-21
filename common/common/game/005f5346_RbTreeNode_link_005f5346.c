// addr: 0x005f5346
// name: RbTreeNode_link_005f5346
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RbTreeNode_link_005f5346(void * parent, void * keyOrValue, void * node)
    */

void RbTreeNode_link_005f5346(void *parent,void *keyOrValue,void *node)

{
                    /* Small wrapper that prepares a stack argument and links a newly allocated
                       rb-tree node. */
  FUN_0042c155(&keyOrValue);
  StdVectorDword_pushBack((void *)((int)parent + 0x18),(uint)&node);
  return;
}

