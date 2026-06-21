// addr: 0x005fbb47
// name: StdRbTree_node21B_findInsertPosition
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
StdRbTree_node21B_findInsertPosition
          (void *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 *extraout_EAX;
  int *unaff_ESI;
  int *outIter;
  undefined4 uVar5;
  int iVar6;
  undefined1 local_10 [4];
  undefined4 local_c;
  int local_8;
  
                    /* Finds the insert position in a nodeFlag21B red-black tree and returns either
                       an existing node for an equal key or the parent/side where a new node should
                       be inserted. Paired with insertion helper FUN_005f6f58. */
  if (*(int *)((int)param_1 + 8) == 0) {
    FUN_005f6f58(param_2,1,*(undefined4 *)((int)param_1 + 4),param_5);
    return param_2;
  }
  CheckedTreeIterator_ctor_nodeFlag21B(**(undefined4 **)((int)param_1 + 4),param_1);
  bVar4 = CheckedTreeIterator_equals_nodeFlag21B(&param_3,&local_c);
  if (bVar4) {
    outIter = param_5;
    iVar1 = param_4;
    if (*(int *)(param_4 + 0xc) <= *param_5) goto LAB_005fbc7b;
  }
  else {
    CheckedTreeIterator_ctor_nodeFlag21B(*(undefined4 *)((int)param_1 + 4),param_1);
    bVar4 = CheckedTreeIterator_equals_nodeFlag21B(&param_3,&local_c);
    outIter = param_5;
    iVar6 = param_4;
    if (bVar4) {
      iVar6 = *(int *)(*(int *)((int)param_1 + 4) + 8);
      if (*param_5 <= *(int *)(iVar6 + 0xc)) goto LAB_005fbc7b;
LAB_005fbbe7:
      uVar5 = 0;
      goto LAB_005fbba5;
    }
    iVar1 = *param_5;
    iVar2 = *(int *)(param_4 + 0xc);
    bVar4 = SBORROW4(iVar2,iVar1);
    iVar3 = iVar2 - iVar1;
    if (iVar1 < iVar2) {
      local_c = param_3;
      local_8 = param_4;
      CheckedTreeIterator_increment_nodeFlag21(&local_c);
      iVar3 = *outIter;
      if (*(int *)(local_8 + 0xc) < iVar3) {
        iVar1 = iVar6;
        iVar6 = local_8;
        if (*(char *)(*(int *)(local_8 + 8) + 0x21) == '\0') goto LAB_005fbba3;
        goto LAB_005fbbe7;
      }
      bVar4 = SBORROW4(*(int *)(iVar6 + 0xc),iVar3);
      iVar3 = *(int *)(iVar6 + 0xc) - iVar3;
    }
    if (bVar4 == iVar3 < 0) {
LAB_005fbc7b:
      IntRbTree_insertUniqueLowerBound_nodeFlag21B(param_1,local_10,outIter,unaff_ESI);
      *param_2 = *extraout_EAX;
      param_2[1] = extraout_EAX[1];
      return param_2;
    }
    local_c = param_3;
    local_8 = iVar6;
    CheckedTreeIterator_ctor_nodeFlag21B(*(undefined4 *)((int)param_1 + 4),param_1);
    FUN_005e2133();
    bVar4 = CheckedTreeIterator_equals_nodeFlag21B(&local_c,&param_3);
    if ((!bVar4) && (*(int *)(local_8 + 0xc) <= *outIter)) goto LAB_005fbc7b;
    iVar1 = local_8;
    if (*(char *)(*(int *)(iVar6 + 8) + 0x21) != '\0') {
      uVar5 = 0;
      goto LAB_005fbba5;
    }
  }
LAB_005fbba3:
  iVar6 = iVar1;
  uVar5 = 1;
LAB_005fbba5:
  FUN_005f6f58(param_2,uVar5,iVar6,outIter);
  return param_2;
}

