// addr: 0x012d9090
// name: PropertyTree21_eraseRange
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyTree21_eraseRange(void * this, void * outIt, void * firstTree,
   void * firstNode, void * lastTree, void * lastNode) */

void __thiscall
PropertyTree21_eraseRange
          (void *this,void *outIt,void *firstTree,void *firstNode,void *lastTree,void *lastNode)

{
  void *pvVar1;
  undefined4 uVar2;
  void *unused2;
  void *unaff_EDI;
  void *unused1;
  undefined1 local_8 [8];
  
                    /* Erases a range of nodes from the PropertyTree21-style red-black tree,
                       clearing the whole header when the range covers the entire tree. Evidence is
                       the calls to PropertyTreeIterator21_increment, node destruction helper
                       FUN_012d8610, and header reset logic. */
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
      FUN_012d8610(*(undefined4 *)(*(int *)((int)this + 4) + 4));
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
    PropertyTreeIterator21_increment((int *)&firstTree);
    PropertyTree21_eraseNode(this,local_8,unused1,unused2,unaff_EDI);
    unused2 = lastTree;
    unused1 = firstNode;
  }
  *(void **)outIt = unused1;
  *(void **)((int)outIt + 4) = unused2;
  return;
}

