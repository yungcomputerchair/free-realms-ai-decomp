// addr: 0x004f9ebd
// name: StdRbTreeInt_find
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdRbTreeInt_find(void * tree, void * outIter, int * key) */

void __thiscall StdRbTreeInt_find(void *this,void *tree,void *outIter,int *key)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 local_14 [2];
  undefined4 local_c;
  int local_8;
  
                    /* Implements std::map-style find for an int-key rb-tree: lower_bound is checked
                       against end and only returned when the node key is not greater than the
                       requested key. */
  StdMapInt_lowerBoundIterator(&local_c,(int)outIter);
  CheckedTreeIterator_ctor(*(undefined4 *)((int)this + 4),this);
  bVar2 = CheckedTreeIterator_equals(&local_c,local_14);
  if ((bVar2) || (*(int *)outIter < *(int *)(local_8 + 0xc))) {
    CheckedTreeIterator_ctor(*(undefined4 *)((int)this + 4),this);
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

