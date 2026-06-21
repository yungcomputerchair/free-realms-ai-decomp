// addr: 0x005fa5c0
// name: IntRbTree_insertUniqueLowerBound_nodeFlag21B
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void IntRbTree_insertUniqueLowerBound_nodeFlag21B(void * tree, void * outIter,
   int * key) */

void __thiscall
IntRbTree_insertUniqueLowerBound_nodeFlag21B(void *this,void *tree,void *outIter,int *key)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 local_18 [8];
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
                    /* RB-tree helper for signed integer keys using node flag offset 0x21B; inserts
                       at lower bound when the key is absent. */
  puVar3 = *(undefined4 **)((int)this + 4);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (*(char *)((int)puVar3[1] + 0x21) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  CheckedTreeIterator_ctor_nodeFlag21B(puVar3,this);
  if ((char)local_8 == '\0') {
LAB_005fa653:
    uVar4 = local_8;
    if (*(int *)outIter <= *(int *)(local_c + 0xc)) {
      *(undefined1 *)((int)tree + 8) = 0;
      goto LAB_005fa66e;
    }
  }
  else {
    CheckedTreeIterator_ctor_nodeFlag21B(**(undefined4 **)((int)this + 4),this);
    bVar1 = CheckedTreeIterator_equals_nodeFlag21B(&local_10,local_18);
    if (!bVar1) {
      CheckedTreeIterator_increment_nodeFlag21(&local_10);
      goto LAB_005fa653;
    }
    uVar4 = 1;
  }
  puVar3 = (undefined4 *)FUN_005f6f58(local_18,uVar4,puVar3,outIter);
  local_10 = *puVar3;
  local_c = puVar3[1];
  *(undefined1 *)((int)tree + 8) = 1;
LAB_005fa66e:
  *(undefined4 *)tree = local_10;
  *(int *)((int)tree + 4) = local_c;
  return;
}

