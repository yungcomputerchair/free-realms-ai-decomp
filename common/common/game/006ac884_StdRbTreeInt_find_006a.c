// addr: 0x006ac884
// name: StdRbTreeInt_find_006a
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdRbTreeInt_find_006a(void * tree, void * outIter, int * key) */

void __thiscall StdRbTreeInt_find_006a(void *this,void *tree,void *outIter,int *key)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 local_14 [2];
  undefined4 local_c;
  int local_8;
  
                    /* Find wrapper for another int-key rb-tree iterator family, returning a
                       matching lower_bound iterator or end. */
  StdTreeIntKey_lowerBoundIterator_006ac197(&local_c,outIter);
  RbTreeIterator_ctorFromNode_006a(*(undefined4 *)((int)this + 4),this);
  bVar2 = RbTreeIterator_equalsChecked(&local_c,local_14);
  if ((bVar2) || (*(int *)outIter < *(int *)(local_8 + 0xc))) {
    RbTreeIterator_ctorFromNode_006a(*(undefined4 *)((int)this + 4),this);
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

