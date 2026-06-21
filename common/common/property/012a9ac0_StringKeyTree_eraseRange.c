// addr: 0x012a9ac0
// name: StringKeyTree_eraseRange
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StringKeyTree_eraseRange(void * tree, void * outIterator, void *
   firstOwner, void * firstNode, void * lastOwner, void * lastNode) */

void __thiscall
StringKeyTree_eraseRange
          (void *this,void *tree,void *outIterator,void *firstOwner,void *firstNode,void *lastOwner,
          void *lastNode)

{
  void *pvVar1;
  undefined4 uVar2;
  void *unused2;
  void *unaff_EDI;
  void *unused1;
  undefined1 local_8 [8];
  
                    /* Erases a range from the StringKeyTree, destroying the whole node chain and
                       resetting the header when the range covers the tree. */
  unused1 = outIterator;
  pvVar1 = (void *)**(int **)((int)this + 4);
  if ((outIterator == (void *)0x0) || (outIterator != this)) {
    FUN_00d83c2d();
  }
  unused2 = firstOwner;
  if (firstOwner == pvVar1) {
    pvVar1 = *(void **)((int)this + 4);
    if ((firstNode == (void *)0x0) || (firstNode != this)) {
      FUN_00d83c2d();
    }
    if (lastOwner == pvVar1) {
      StringKeyTree_destroyNodeRecursive(*(void **)(*(int *)((int)this + 4) + 4));
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
    if ((unused1 == (void *)0x0) || (unused1 != firstNode)) {
      FUN_00d83c2d();
    }
    if (unused2 == lastOwner) break;
    StringKeyTreeIterator_next((int *)&outIterator);
    DeckDB_StringTree_eraseNode(this,local_8,unused1,unused2,unaff_EDI);
    unused2 = firstNode;
    unused1 = firstOwner;
  }
  *(void **)tree = unused1;
  *(void **)((int)tree + 4) = unused2;
  return;
}

