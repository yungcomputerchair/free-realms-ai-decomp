// addr: 0x005e839d
// name: StdRbTreeInt_find_nodeFlag21C
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdRbTreeInt_find_nodeFlag21C(void * tree, void * outIter, int * key) */

void __thiscall StdRbTreeInt_find_nodeFlag21C(void *this,void *tree,void *outIter,int *key)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 local_14 [2];
  undefined4 local_c;
  int local_8;
  
                    /* Find wrapper for an int-key rb-tree variant using nodeFlag21C iterators;
                       returns lower_bound when it equals the requested key, else end. */
  StdTreeIntKey_lowerBoundIterator_005e667e(&local_c,outIter);
  RbTreeIterator_ctorFromNode(*(undefined4 *)((int)this + 4),this);
  bVar2 = CheckedTreeIterator_equals_nodeFlag21C(&local_c,local_14);
  if ((bVar2) || (*(int *)outIter < *(int *)(local_8 + 0xc))) {
    RbTreeIterator_ctorFromNode(*(undefined4 *)((int)this + 4),this);
    puVar3 = local_14;
  }
  else {
    puVar3 = &local_c;
  }
  uVar1 = puVar3[1];
  *(undefined4 *)tree = *puVar3;
  *(undefined4 *)((int)tree + 4) = uVar1;
  return;
}

