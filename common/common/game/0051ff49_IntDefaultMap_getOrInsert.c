// addr: 0x0051ff49
// name: IntDefaultMap_getOrInsert
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int * IntDefaultMap_getOrInsert(void * this, int * key) */

int * __thiscall IntDefaultMap_getOrInsert(void *this,int *key)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 local_1c [8];
  int local_14 [3];
  int local_8;
  
                    /* Finds an integer-keyed tree entry or inserts a default value initialized to
                       0, then returns a pointer to the stored value. */
  StdMapInt_lowerBoundIterator(local_14 + 2,(int)key);
  CheckedTreeIterator_ctor(*(undefined4 *)((int)this + 4),this);
  bVar1 = CheckedTreeIterator_equals(local_14 + 2,local_14);
  if ((bVar1) || (*key < *(int *)(local_8 + 0xc))) {
    local_14[0] = *key;
    local_14[1] = 0;
    puVar2 = (undefined4 *)
             StdRbTree_node15_findInsertPosition(local_1c,local_14[2],local_8,local_14);
    local_14[2] = *puVar2;
    local_8 = puVar2[1];
  }
  iVar3 = CheckedTreeIterator_derefValue_nodeFlag15();
  return (int *)(iVar3 + 4);
}

