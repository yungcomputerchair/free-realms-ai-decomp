// addr: 0x005151f2
// name: IntValueMap_insertUniqueLowerBound
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void IntValueMap_insertUniqueLowerBound(void * tree, void * outIter, int *
   key) */

void __thiscall IntValueMap_insertUniqueLowerBound(void *this,void *tree,void *outIter,int *key)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 local_18 [8];
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
                    /* RB-tree helper that finds the lower-bound insertion point for an integer key
                       and inserts a new node when no existing key is <= the requested key. */
  puVar3 = *(undefined4 **)((int)this + 4);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar2 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar2;
      local_8 = CONCAT31(local_8._1_3_,*(int *)outIter < (int)puVar3[3]);
      if (*(int *)outIter < (int)puVar3[3]) {
        puVar2 = (undefined4 *)*puVar3;
      }
      else {
        puVar2 = (undefined4 *)puVar3[2];
      }
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  CheckedTreeIterator_ctor(puVar3,this);
  if ((char)local_8 == '\0') {
LAB_00515285:
    uVar4 = local_8;
    if (*(int *)outIter <= *(int *)(local_c + 0xc)) {
      *(undefined1 *)((int)tree + 8) = 0;
      goto LAB_005152a0;
    }
  }
  else {
    CheckedTreeIterator_ctor(**(undefined4 **)((int)this + 4),this);
    bVar1 = CheckedTreeIterator_equals(&local_10,local_18);
    if (!bVar1) {
      CheckedTreeIterator_increment_nodeFlag15(&local_10);
      goto LAB_00515285;
    }
    uVar4 = 1;
  }
  puVar3 = (undefined4 *)StdRbTree_node15_insertAt(local_18,uVar4,puVar3,outIter);
  local_10 = *puVar3;
  local_c = puVar3[1];
  *(undefined1 *)((int)tree + 8) = 1;
LAB_005152a0:
  *(undefined4 *)tree = local_10;
  *(int *)((int)tree + 4) = local_c;
  return;
}

