// addr: 0x0051b1ec
// name: StdRbTree_node15_findInsertPosition
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
StdRbTree_node15_findInsertPosition
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
  
                    /* Finds the insertion position for a red-black tree with node flag offset 0x15,
                       returning an existing node when the key is already present or a parent/side
                       pair for insertion. It is paired with StdRbTree_node15_insertAt at 0050a658.
                        */
  if (*(int *)((int)param_1 + 8) == 0) {
    StdRbTree_node15_insertAt(param_2,1,*(undefined4 *)((int)param_1 + 4),param_5);
    return param_2;
  }
  CheckedTreeIterator_ctor(**(undefined4 **)((int)param_1 + 4),param_1);
  bVar4 = CheckedTreeIterator_equals(&param_3,&local_c);
  if (bVar4) {
    outIter = param_5;
    iVar1 = param_4;
    if (*(int *)(param_4 + 0xc) <= *param_5) goto LAB_0051b320;
  }
  else {
    CheckedTreeIterator_ctor(*(undefined4 *)((int)param_1 + 4),param_1);
    bVar4 = CheckedTreeIterator_equals(&param_3,&local_c);
    outIter = param_5;
    iVar6 = param_4;
    if (bVar4) {
      iVar6 = *(int *)(*(int *)((int)param_1 + 4) + 8);
      if (*param_5 <= *(int *)(iVar6 + 0xc)) goto LAB_0051b320;
LAB_0051b28c:
      uVar5 = 0;
      goto LAB_0051b24a;
    }
    iVar1 = *param_5;
    iVar2 = *(int *)(param_4 + 0xc);
    bVar4 = SBORROW4(iVar2,iVar1);
    iVar3 = iVar2 - iVar1;
    if (iVar1 < iVar2) {
      local_c = param_3;
      local_8 = param_4;
      CheckedTreeIterator_increment_nodeFlag15(&local_c);
      iVar3 = *outIter;
      if (*(int *)(local_8 + 0xc) < iVar3) {
        iVar1 = iVar6;
        iVar6 = local_8;
        if (*(char *)(*(int *)(local_8 + 8) + 0x15) == '\0') goto LAB_0051b248;
        goto LAB_0051b28c;
      }
      bVar4 = SBORROW4(*(int *)(iVar6 + 0xc),iVar3);
      iVar3 = *(int *)(iVar6 + 0xc) - iVar3;
    }
    if (bVar4 == iVar3 < 0) {
LAB_0051b320:
      IntValueMap_insertUniqueLowerBound(param_1,local_10,outIter,unaff_ESI);
      *param_2 = *extraout_EAX;
      param_2[1] = extraout_EAX[1];
      return param_2;
    }
    local_c = param_3;
    local_8 = iVar6;
    CheckedTreeIterator_ctor(*(undefined4 *)((int)param_1 + 4),param_1);
    FUN_004d21f9();
    bVar4 = CheckedTreeIterator_equals(&local_c,&param_3);
    if ((!bVar4) && (*(int *)(local_8 + 0xc) <= *outIter)) goto LAB_0051b320;
    iVar1 = local_8;
    if (*(char *)(*(int *)(iVar6 + 8) + 0x15) != '\0') {
      uVar5 = 0;
      goto LAB_0051b24a;
    }
  }
LAB_0051b248:
  iVar6 = iVar1;
  uVar5 = 1;
LAB_0051b24a:
  StdRbTree_node15_insertAt(param_2,uVar5,iVar6,outIter);
  return param_2;
}

