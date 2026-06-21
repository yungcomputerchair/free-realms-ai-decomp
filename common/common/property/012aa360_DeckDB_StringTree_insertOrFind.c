// addr: 0x012aa360
// name: DeckDB_StringTree_insertOrFind
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DeckDB_StringTree_insertOrFind(void * tree, void * out_iter, void *
   hint_tree, void * hint_node, void * key_string) */

void * __thiscall
DeckDB_StringTree_insertOrFind
          (void *this,void *tree,void *out_iter,void *hint_tree,void *hint_node,void *key_string)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  bool bVar4;
  char cVar5;
  undefined4 *extraout_EAX;
  void *rhsString;
  void *local_c;
  undefined4 local_8;
  
                    /* Performs hinted insertion/find in DeckDB's string-keyed rb-tree, comparing
                       std::string keys and returning an iterator to the existing or inserted node.
                        */
  pvVar2 = out_iter;
  if (*(int *)((int)this + 8) == 0) {
    FUN_012a9b90(tree,1,*(undefined4 *)((int)this + 4),hint_node);
    return tree;
  }
  pvVar1 = (void *)**(int **)((int)this + 4);
  if ((out_iter == (void *)0x0) || (out_iter != this)) {
    FUN_00d83c2d();
  }
  rhsString = hint_node;
  pvVar3 = hint_tree;
  if (hint_tree == pvVar1) {
    bVar4 = StdString_lessByPrefixCompare(hint_node,(void *)((int)hint_tree + 0xc));
    if (bVar4) {
      FUN_012a9b90(tree,1,pvVar3,rhsString);
      return tree;
    }
  }
  else {
    pvVar1 = *(void **)((int)this + 4);
    if ((pvVar2 == (void *)0x0) || (pvVar2 != this)) {
      FUN_00d83c2d();
    }
    rhsString = hint_node;
    if (pvVar3 == pvVar1) {
      bVar4 = StdString_lessByPrefixCompare
                        ((void *)(*(int *)(*(int *)((int)this + 4) + 8) + 0xc),hint_node);
      if (bVar4) {
        FUN_012a9b90(tree,0,*(undefined4 *)(*(int *)((int)this + 4) + 8),rhsString);
        return tree;
      }
    }
    else {
      bVar4 = StdString_lessByPrefixCompare(hint_node,(void *)((int)pvVar3 + 0xc));
      if (bVar4) {
        out_iter = pvVar2;
        hint_tree = pvVar3;
        StringKeyTreeIterator_prev((int *)&out_iter);
        bVar4 = StdString_lessByPrefixCompare((void *)((int)hint_tree + 0xc),rhsString);
        if (bVar4) {
          if (*(char *)(*(int *)((int)hint_tree + 8) + 0x2d) != '\0') {
            FUN_012a9b90(tree,0,hint_tree,rhsString);
            return tree;
          }
          FUN_012a9b90(tree,1,pvVar3,rhsString);
          return tree;
        }
      }
      bVar4 = StdString_lessByPrefixCompare((void *)((int)pvVar3 + 0xc),rhsString);
      if (bVar4) {
        local_8 = *(undefined4 *)((int)this + 4);
        out_iter = pvVar2;
        hint_tree = pvVar3;
        local_c = this;
        StringKeyTreeIterator_next((int *)&out_iter);
        cVar5 = FUN_012a86a0(&local_c);
        pvVar2 = hint_tree;
        if (cVar5 == '\0') {
          bVar4 = StdString_lessByPrefixCompare(rhsString,(void *)((int)hint_tree + 0xc));
          if (!bVar4) goto LAB_012aa535;
        }
        if (*(char *)(*(int *)((int)pvVar3 + 8) + 0x2d) != '\0') {
          FUN_012a9b90(tree,0,pvVar3,rhsString);
          return tree;
        }
        FUN_012a9b90(tree,1,pvVar2,rhsString);
        return tree;
      }
    }
  }
LAB_012aa535:
  DeckMap_insertUniqueByName(this,&local_c,rhsString);
  *(undefined4 *)tree = *extraout_EAX;
  *(undefined4 *)((int)tree + 4) = extraout_EAX[1];
  return tree;
}

