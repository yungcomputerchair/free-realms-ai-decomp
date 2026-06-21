// addr: 0x005e6fa4
// name: StdRbTreeUInt_find_nodeFlag21A
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdRbTreeUInt_find_nodeFlag21A(void * tree, void * outIter, uint * key)
    */

void __thiscall StdRbTreeUInt_find_nodeFlag21A(void *this,void *tree,void *outIter,uint *key)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 local_14 [2];
  undefined4 local_c;
  int local_8;
  
                    /* Find wrapper for a uint-key rb-tree variant using nodeFlag21A iterators;
                       returns the matching iterator or end. */
  StdTreeNode21A_lowerBoundIterator(&local_c,outIter);
  CheckedTreeIterator_ctor_nodeFlag21A(*(undefined4 *)((int)this + 4),this);
  bVar2 = CheckedTreeIterator_equals_nodeFlag21A(&local_c,local_14);
  if ((bVar2) || (*(uint *)outIter < *(uint *)(local_8 + 0xc))) {
    CheckedTreeIterator_ctor_nodeFlag21A(*(undefined4 *)((int)this + 4),this);
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

