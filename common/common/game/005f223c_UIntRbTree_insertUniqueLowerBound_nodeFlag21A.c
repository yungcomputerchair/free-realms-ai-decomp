// addr: 0x005f223c
// name: UIntRbTree_insertUniqueLowerBound_nodeFlag21A
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UIntRbTree_insertUniqueLowerBound_nodeFlag21A(void * tree, void *
   outIter, uint * key) */

void __thiscall
UIntRbTree_insertUniqueLowerBound_nodeFlag21A(void *this,void *tree,void *outIter,uint *key)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 local_18 [8];
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
                    /* RB-tree helper for unsigned integer keys using node flag offset 0x21A; finds
                       lower bound and inserts a unique node if needed. */
  puVar3 = *(undefined4 **)((int)this + 4);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (*(char *)((int)puVar3[1] + 0x11) == '\0') {
    puVar2 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar2;
      local_8 = CONCAT31(local_8._1_3_,*(uint *)outIter < (uint)puVar3[3]);
      if (*(uint *)outIter < (uint)puVar3[3]) {
        puVar2 = (undefined4 *)*puVar3;
      }
      else {
        puVar2 = (undefined4 *)puVar3[2];
      }
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  CheckedTreeIterator_ctor_nodeFlag21A(puVar3,this);
  if ((char)local_8 == '\0') {
LAB_005f22cf:
    uVar4 = local_8;
    if (*(uint *)outIter <= *(uint *)(local_c + 0xc)) {
      *(undefined1 *)((int)tree + 8) = 0;
      goto LAB_005f22ea;
    }
  }
  else {
    CheckedTreeIterator_ctor_nodeFlag21A(**(undefined4 **)((int)this + 4),this);
    bVar1 = CheckedTreeIterator_equals_nodeFlag21A(&local_10,local_18);
    if (!bVar1) {
      FUN_005e1f27();
      goto LAB_005f22cf;
    }
    uVar4 = 1;
  }
  puVar3 = (undefined4 *)StdRbTree_node16_insertAt(local_18,uVar4,puVar3,outIter);
  local_10 = *puVar3;
  local_c = puVar3[1];
  *(undefined1 *)((int)tree + 8) = 1;
LAB_005f22ea:
  *(undefined4 *)tree = local_10;
  *(int *)((int)tree + 4) = local_c;
  return;
}

