// addr: 0x0137d9b0
// name: FUN_0137d9b0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyTree15B_eraseRange(void * tree, void * outIt, void * firstTree,
   void * firstNode, void * lastTree, void * lastNode) */

void __thiscall
PropertyTree15B_eraseRange
          (void *this,void *tree,void *outIt,void *firstTree,void *firstNode,void *lastTree,
          void *lastNode)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined1 local_8 [8];
  
                    /* Erases a range from a PropertyTree15B red-black tree, using a fast clear path
                       when the whole tree is selected. */
  pvVar1 = (void *)**(int **)((int)this + 4);
  if ((outIt == (void *)0x0) || (outIt != this)) {
    FUN_00d83c2d();
  }
  if (firstTree == pvVar1) {
    pvVar1 = *(void **)((int)this + 4);
    if ((firstNode == (void *)0x0) || (firstNode != this)) {
      FUN_00d83c2d();
    }
    if (lastTree == pvVar1) {
      FUN_0137b850(*(undefined4 *)(*(int *)((int)this + 4) + 4));
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
    if ((outIt == (void *)0x0) || (outIt != firstNode)) {
      FUN_00d83c2d();
    }
    if (firstTree == lastTree) break;
    FUN_0137ab70();
    FUN_0137c690(local_8,outIt,firstTree);
  }
  *(void **)tree = outIt;
  *(void **)((int)tree + 4) = firstTree;
  return;
}

