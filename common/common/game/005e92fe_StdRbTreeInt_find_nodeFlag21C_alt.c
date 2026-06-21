// addr: 0x005e92fe
// name: StdRbTreeInt_find_nodeFlag21C_alt
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdRbTreeInt_find_nodeFlag21C_alt(void * tree, void * outIter, int * key)
    */

void __thiscall StdRbTreeInt_find_nodeFlag21C_alt(void *this,void *tree,void *outIter,int *key)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 local_14 [2];
  undefined4 local_c;
  int local_8;
  
                    /* Second int-key rb-tree find wrapper for the nodeFlag21C iterator family,
                       returning a matching iterator or end. */
  StdTreeIntKey_lowerBoundIterator_005e8401(&local_c,outIter);
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

