// addr: 0x005fc69a
// name: StdRbTree_node21B_getOrInsertValue
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall StdRbTree_node21B_getOrInsertValue(int param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 local_34 [16];
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14 [8];
  undefined4 local_c;
  int local_8;
  
                    /* Finds a value in a nodeFlag21B map by key or inserts a new default record if
                       the key is before the current lower bound, returning a pointer to the value
                       field. Evidence is lower-bound comparison and call to find/insert-position
                       helper 005fbb47. */
  StdTreeNode21B_lowerBoundIterator(&local_c,param_2);
  CheckedTreeIterator_ctor_nodeFlag21B(*(undefined4 *)(param_1 + 4),param_1);
  bVar1 = CheckedTreeIterator_equals_nodeFlag21B(&local_c,local_14);
  if ((bVar1) || (*param_2 < *(int *)(local_8 + 0xc))) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    uVar2 = FUN_005f3211(param_2,local_24);
    puVar3 = (undefined4 *)StdRbTree_node21B_findInsertPosition(local_14,local_c,local_8,uVar2);
    local_c = *puVar3;
    local_8 = puVar3[1];
    StdVector_clearAndFreeStorage_005e4773(local_34);
    StdVector_clearAndFreeStorage_005e4773(local_24);
  }
  iVar4 = CheckedTreeIterator_derefValue_nodeFlag21A();
  return iVar4 + 4;
}

