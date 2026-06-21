// addr: 0x01412120
// name: Card_AttributeModifierTree_eraseRange
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Card_AttributeModifierTree_eraseRange(void * this, void * outIter, void *
   firstOwner, void * firstNode, void * lastOwner, void * lastNode) */

void __thiscall
Card_AttributeModifierTree_eraseRange
          (void *this,void *outIter,void *firstOwner,void *firstNode,void *lastOwner,void *lastNode)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined1 local_8 [8];
  
                    /* Erases a range of nodes from Card's attribute-modifier tree, including
                       full-tree destroy and header reset. Evidence: named callee
                       Card_AttributeModifierTree_destroyNodes and nearby tree helper callers. */
  pvVar1 = (void *)**(int **)((int)this + 4);
  if ((firstOwner == (void *)0x0) || (firstOwner != this)) {
    FUN_00d83c2d();
  }
  if (firstNode == pvVar1) {
    pvVar1 = *(void **)((int)this + 4);
    if ((lastOwner == (void *)0x0) || (lastOwner != this)) {
      FUN_00d83c2d();
    }
    if (lastNode == pvVar1) {
      Card_AttributeModifierTree_destroyNodes(*(void **)(*(int *)((int)this + 4) + 4));
      *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
      *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
      uVar2 = **(undefined4 **)((int)this + 4);
      *(void **)outIter = this;
      *(undefined4 *)((int)outIter + 4) = uVar2;
      return;
    }
  }
  while( true ) {
    if ((firstOwner == (void *)0x0) || (firstOwner != lastOwner)) {
      FUN_00d83c2d();
    }
    if (firstNode == lastNode) break;
    FUN_0134f4a0();
    FUN_01411990(local_8,firstOwner,firstNode);
  }
  *(void **)outIter = firstOwner;
  *(void **)((int)outIter + 4) = firstNode;
  return;
}

