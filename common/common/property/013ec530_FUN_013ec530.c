// addr: 0x013ec530
// name: FUN_013ec530
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyTree39_eraseRange(void * tree, void * outIt, void * firstTree,
   void * firstNode, void * lastTree, void * lastNode) */

void __thiscall
PropertyTree39_eraseRange
          (void *this,void *tree,void *outIt,void *firstTree,void *firstNode,void *lastTree,
          void *lastNode)

{
  void *pvVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *pvVar4;
  undefined1 local_8 [8];
  
                    /* Erases a range from a PropertyTree39 red-black tree, using a fast clear path
                       for full-tree erase. */
  pvVar4 = outIt;
  pvVar1 = (void *)**(int **)((int)this + 4);
  if ((outIt == (void *)0x0) || (outIt != this)) {
    FUN_00d83c2d();
  }
  pvVar3 = firstTree;
  if (firstTree == pvVar1) {
    pvVar1 = *(void **)((int)this + 4);
    if ((firstNode == (void *)0x0) || (firstNode != this)) {
      FUN_00d83c2d();
    }
    if (lastTree == pvVar1) {
      FUN_013ec440(*(undefined4 *)(*(int *)((int)this + 4) + 4));
      *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
      *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
      uVar2 = **(undefined4 **)((int)this + 4);
      *(void **)tree = this;
      *(undefined4 *)((int)tree + 4) = uVar2;
      return;
    }
  }
  while( true ) {
    if ((pvVar4 == (void *)0x0) || (pvVar4 != firstNode)) {
      FUN_00d83c2d();
    }
    if (pvVar3 == lastTree) break;
    PropertyTreeIterator39_increment((int *)&outIt);
    FUN_013ec170(local_8,pvVar4,pvVar3);
    pvVar3 = firstTree;
    pvVar4 = outIt;
  }
  *(void **)tree = pvVar4;
  *(void **)((int)tree + 4) = pvVar3;
  return;
}

