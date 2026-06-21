// addr: 0x013a1640
// name: CollectionDataChildTree_eraseRange
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionDataChildTree_eraseRange(void * this, void * outIt, void *
   firstTree, void * firstNode, void * lastTree, void * lastNode) */

void __thiscall
CollectionDataChildTree_eraseRange
          (void *this,void *outIt,void *firstTree,void *firstNode,void *lastTree,void *lastNode)

{
  void *pvVar1;
  undefined4 uVar2;
  void *unused2;
  void *unaff_EDI;
  void *unused1;
  undefined1 local_8 [8];
  
                    /* Erases a range from the CollectionData child tree, clearing the entire header
                       when the range spans the full tree. Evidence is
                       CollectionDataChildIterator_increment and child-node cleanup helper
                       FUN_013a0310. */
  unused1 = firstTree;
  pvVar1 = (void *)**(int **)((int)this + 4);
  if ((firstTree == (void *)0x0) || (firstTree != this)) {
    FUN_00d83c2d();
  }
  unused2 = firstNode;
  if (firstNode == pvVar1) {
    pvVar1 = *(void **)((int)this + 4);
    if ((lastTree == (void *)0x0) || (lastTree != this)) {
      FUN_00d83c2d();
    }
    if (lastNode == pvVar1) {
      FUN_013a0310(*(undefined4 *)(*(int *)((int)this + 4) + 4));
      *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
      *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
      uVar2 = **(undefined4 **)((int)this + 4);
      *(void **)outIt = this;
      *(undefined4 *)((int)outIt + 4) = uVar2;
      return;
    }
  }
  while( true ) {
    if ((unused1 == (void *)0x0) || (unused1 != lastTree)) {
      FUN_00d83c2d();
    }
    if (unused2 == lastNode) break;
    CollectionDataChildIterator_increment((int *)&firstTree);
    CollectionDataChildTree_eraseNode(this,local_8,unused1,unused2,unaff_EDI);
    unused2 = lastTree;
    unused1 = firstNode;
  }
  *(void **)outIt = unused1;
  *(void **)((int)outIt + 4) = unused2;
  return;
}

