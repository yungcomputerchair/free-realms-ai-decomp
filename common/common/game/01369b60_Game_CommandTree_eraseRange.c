// addr: 0x01369b60
// name: Game_CommandTree_eraseRange
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_CommandTree_eraseRange(void * tree, void * outIter, void *
   firstTree, void * firstNode, void * lastTree, void * lastNode) */

void __thiscall
Game_CommandTree_eraseRange
          (void *this,void *tree,void *outIter,void *firstTree,void *firstNode,void *lastTree,
          void *lastNode)

{
  void *pvVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *pvVar4;
  undefined1 local_8 [8];
  
                    /* Erases a range from the Game command RB-tree; if the range is the whole tree
                       it destroys all nodes and resets the header. */
  pvVar4 = outIter;
  pvVar1 = (void *)**(int **)((int)this + 4);
  if ((outIter == (void *)0x0) || (outIter != this)) {
    FUN_00d83c2d();
  }
  pvVar3 = firstTree;
  if (firstTree == pvVar1) {
    pvVar1 = *(void **)((int)this + 4);
    if ((firstNode == (void *)0x0) || (firstNode != this)) {
      FUN_00d83c2d();
    }
    if (lastTree == pvVar1) {
      Game_CommandTree_destroyNodes(*(void **)(*(int *)((int)this + 4) + 4));
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
    RbTreeIterator25_increment((int *)&outIter);
    StdRbTree_node25_eraseNode(local_8,pvVar4,pvVar3);
    pvVar3 = firstTree;
    pvVar4 = outIter;
  }
  *(void **)tree = pvVar4;
  *(void **)((int)tree + 4) = pvVar3;
  return;
}

