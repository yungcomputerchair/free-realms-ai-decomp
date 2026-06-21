// addr: 0x012ad8c0
// name: CollectionDB_StringTree_insertOrFind
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CollectionDB_StringTree_insertOrFind(void * tree, void * out_iter, void
   * hint_tree, void * hint_node, void * key_string) */

void * __thiscall
CollectionDB_StringTree_insertOrFind
          (void *this,void *tree,void *out_iter,void *hint_tree,void *hint_node,void *key_string)

{
  void *pvVar1;
  void *pvVar2;
  void *parent;
  bool bVar3;
  char cVar4;
  undefined4 *extraout_EAX;
  void *rhsString;
  void *local_c;
  undefined4 local_8;
  
                    /* Performs hinted insertion/find in CollectionDB's string-keyed rb-tree,
                       comparing collection names and returning an iterator to the existing or
                       inserted node. */
  pvVar2 = out_iter;
  if (*(int *)((int)this + 8) == 0) {
    CollectionPropertyTree_insertNode(this,tree,true,*(void **)((int)this + 4),hint_node);
    return tree;
  }
  pvVar1 = (void *)**(int **)((int)this + 4);
  if ((out_iter == (void *)0x0) || (out_iter != this)) {
    FUN_00d83c2d();
  }
  rhsString = hint_node;
  parent = hint_tree;
  if (hint_tree == pvVar1) {
    bVar3 = StdString_lessByPrefixCompare(hint_node,(void *)((int)hint_tree + 0xc));
    if (bVar3) {
      CollectionPropertyTree_insertNode(this,tree,true,parent,rhsString);
      return tree;
    }
  }
  else {
    pvVar1 = *(void **)((int)this + 4);
    if ((pvVar2 == (void *)0x0) || (pvVar2 != this)) {
      FUN_00d83c2d();
    }
    rhsString = hint_node;
    if (parent == pvVar1) {
      bVar3 = StdString_lessByPrefixCompare
                        ((void *)(*(int *)(*(int *)((int)this + 4) + 8) + 0xc),hint_node);
      if (bVar3) {
        CollectionPropertyTree_insertNode
                  (this,tree,false,*(void **)(*(int *)((int)this + 4) + 8),rhsString);
        return tree;
      }
    }
    else {
      bVar3 = StdString_lessByPrefixCompare(hint_node,(void *)((int)parent + 0xc));
      if (bVar3) {
        out_iter = pvVar2;
        hint_tree = parent;
        CollectionDB_TreeIterator_prev((int *)&out_iter);
        bVar3 = StdString_lessByPrefixCompare((void *)((int)hint_tree + 0xc),rhsString);
        if (bVar3) {
          if (*(char *)(*(int *)((int)hint_tree + 8) + 0x2d) != '\0') {
            CollectionPropertyTree_insertNode(this,tree,false,hint_tree,rhsString);
            return tree;
          }
          CollectionPropertyTree_insertNode(this,tree,true,parent,rhsString);
          return tree;
        }
      }
      bVar3 = StdString_lessByPrefixCompare((void *)((int)parent + 0xc),rhsString);
      if (bVar3) {
        local_8 = *(undefined4 *)((int)this + 4);
        out_iter = pvVar2;
        hint_tree = parent;
        local_c = this;
        CollectionDB_TreeIterator_next((int *)&out_iter);
        cVar4 = FUN_012ab2b0(&local_c);
        pvVar2 = hint_tree;
        if (cVar4 == '\0') {
          bVar3 = StdString_lessByPrefixCompare(rhsString,(void *)((int)hint_tree + 0xc));
          if (!bVar3) goto LAB_012ada95;
        }
        if (*(char *)(*(int *)((int)parent + 8) + 0x2d) != '\0') {
          CollectionPropertyTree_insertNode(this,tree,false,parent,rhsString);
          return tree;
        }
        CollectionPropertyTree_insertNode(this,tree,true,pvVar2,rhsString);
        return tree;
      }
    }
  }
LAB_012ada95:
  CollectionMap_insertUniqueByName(this,&local_c,rhsString);
  *(undefined4 *)tree = *extraout_EAX;
  *(undefined4 *)((int)tree + 4) = extraout_EAX[1];
  return tree;
}

