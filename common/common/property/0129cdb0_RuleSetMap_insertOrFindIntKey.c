// addr: 0x0129cdb0
// name: RuleSetMap_insertOrFindIntKey
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * RuleSetMap_insertOrFindIntKey(void * tree, void * out_iter, void *
   hint_tree, void * hint_node, int * key) */

void * __thiscall
RuleSetMap_insertOrFindIntKey
          (void *this,void *tree,void *out_iter,void *hint_tree,void *hint_node,int *key)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  char cVar7;
  undefined4 *puVar8;
  void *pvVar9;
  bool bVar10;
  void *local_c;
  undefined4 local_8;
  
                    /* Implements hinted rb-tree insertion/find for an integer-keyed RuleSet map,
                       returning an iterator to an existing node or inserting around the hint. */
  pvVar5 = out_iter;
  if (*(int *)((int)this + 8) == 0) {
    FUN_0129b8c0(tree,1,*(undefined4 *)((int)this + 4),hint_node);
    return tree;
  }
  pvVar1 = (void *)**(int **)((int)this + 4);
  if ((out_iter == (void *)0x0) || (out_iter != this)) {
    FUN_00d83c2d();
  }
  pvVar6 = hint_tree;
  if (hint_tree == pvVar1) {
    pvVar9 = hint_node;
    if (*(int *)hint_node < *(int *)((int)hint_tree + 0xc)) {
      FUN_0129b8c0(tree,1,hint_tree,hint_node);
      return tree;
    }
  }
  else {
    pvVar1 = *(void **)((int)this + 4);
    if ((pvVar5 == (void *)0x0) || (pvVar5 != this)) {
      FUN_00d83c2d();
    }
    pvVar9 = hint_node;
    if (pvVar6 == pvVar1) {
      iVar2 = *(int *)(*(int *)((int)this + 4) + 8);
      if (*(int *)(iVar2 + 0xc) < *(int *)hint_node) {
        FUN_0129b8c0(tree,0,iVar2,hint_node);
        return tree;
      }
    }
    else {
      iVar2 = *(int *)hint_node;
      iVar3 = *(int *)((int)pvVar6 + 0xc);
      bVar10 = SBORROW4(iVar3,iVar2);
      iVar4 = iVar3 - iVar2;
      if (iVar2 < iVar3) {
        out_iter = pvVar5;
        hint_tree = pvVar6;
        FUN_01298500();
        iVar4 = *(int *)pvVar9;
        if (*(int *)((int)hint_tree + 0xc) < iVar4) {
          if (*(char *)(*(int *)((int)hint_tree + 8) + 0x15) != '\0') {
            FUN_0129b8c0(tree,0,hint_tree,pvVar9);
            return tree;
          }
          FUN_0129b8c0(tree,1,pvVar6,pvVar9);
          return tree;
        }
        bVar10 = SBORROW4(*(int *)((int)pvVar6 + 0xc),iVar4);
        iVar4 = *(int *)((int)pvVar6 + 0xc) - iVar4;
      }
      if (bVar10 != iVar4 < 0) {
        local_8 = *(undefined4 *)((int)this + 4);
        out_iter = pvVar5;
        hint_tree = pvVar6;
        local_c = this;
        StdRbTreeIterator24_advance((int *)&out_iter);
        cVar7 = FUN_012975f0(&local_c);
        if ((cVar7 != '\0') || (*(int *)pvVar9 < *(int *)((int)hint_tree + 0xc))) {
          if (*(char *)(*(int *)((int)pvVar6 + 8) + 0x15) != '\0') {
            FUN_0129b8c0(tree,0,pvVar6,pvVar9);
            return tree;
          }
          FUN_0129b8c0(tree,1,hint_tree,pvVar9);
          return tree;
        }
      }
    }
  }
  puVar8 = (undefined4 *)FUN_0129c7a0(&local_c,pvVar9);
  *(undefined4 *)tree = *puVar8;
  *(undefined4 *)((int)tree + 4) = puVar8[1];
  return tree;
}

