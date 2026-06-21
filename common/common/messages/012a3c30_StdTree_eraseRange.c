// addr: 0x012a3c30
// name: StdTree_eraseRange
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdTree_eraseRange(void * treeObj, void * resultIter, int beginOwner_,
   int beginNode_, int endOwner_, int endNode_) */

void __thiscall
StdTree_eraseRange(void *this,void *treeObj,void *resultIter,int beginOwner_,int beginNode_,
                  int endOwner_,int endNode_)

{
  int iVar1;
  undefined4 uVar2;
  int unusedNode_;
  void *unaff_EDI;
  void *unusedOwner_;
  undefined1 local_8 [8];
  
                    /* Erases a range from a std tree, handling the full-tree erase fast path and
                       otherwise erasing nodes one by one while returning the resulting iterator
                       pair. Evidence is the call to StdTree_Node2D_destroySubtree for the full
                       range and repeated calls to the single-node erase helper. */
  unusedOwner_ = resultIter;
  iVar1 = **(int **)((int)this + 4);
  if ((resultIter == (void *)0x0) || (resultIter != this)) {
    FUN_00d83c2d();
  }
  unusedNode_ = beginOwner_;
  if (beginOwner_ == iVar1) {
    iVar1 = *(int *)((int)this + 4);
    if ((beginNode_ == 0) || ((void *)beginNode_ != this)) {
      FUN_00d83c2d();
    }
    if (endOwner_ == iVar1) {
      StdTree_Node2D_destroySubtree(*(void **)(*(int *)((int)this + 4) + 4));
      *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
      *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
      uVar2 = **(undefined4 **)((int)this + 4);
      *(void **)treeObj = this;
      *(undefined4 *)((int)treeObj + 4) = uVar2;
      return;
    }
  }
  while( true ) {
    if ((unusedOwner_ == (void *)0x0) || (unusedOwner_ != (void *)beginNode_)) {
      FUN_00d83c2d();
    }
    if (unusedNode_ == endOwner_) break;
    MessageDB_RbTreeIterator_next(&resultIter);
    StdTree_eraseNode(this,local_8,(int)unusedOwner_,unusedNode_,unaff_EDI);
    unusedNode_ = beginNode_;
    unusedOwner_ = (void *)beginOwner_;
  }
  *(void **)treeObj = unusedOwner_;
  *(int *)((int)treeObj + 4) = unusedNode_;
  return;
}

