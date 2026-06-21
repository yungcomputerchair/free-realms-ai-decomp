// addr: 0x005efae2
// name: StdVectorDword_insertFillRange_005e
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void StdVectorDword_insertFillRange_005e(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  void *vec;
  undefined4 *begin;
  int unaff_EBP;
  undefined4 *puVar6;
  
                    /* Vector insertion helper for 4-byte elements: grows capacity if needed,
                       copies/moves existing ranges, constructs the inserted fill records, and
                       updates begin/end/capacity pointers. Evidence is size/capacity helpers and
                       ParserVector_insertDefaultRange. */
  FUN_00d83d3c();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe8;
  *(undefined4 *)(unaff_EBP + -0x14) = **(undefined4 **)(unaff_EBP + 0x14);
  uVar3 = StdVectorDword_capacityFromEnd(vec);
  uVar1 = *(uint *)(unaff_EBP + 0x10);
  if (uVar1 != 0) {
    iVar4 = StdVectorDword_size(vec);
    if (0x3fffffffU - iVar4 < uVar1) {
      FUN_005eb8f0();
    }
    iVar4 = StdVectorDword_size(vec);
    if (uVar3 < iVar4 + uVar1) {
      if (0x3fffffff - (uVar3 >> 1) < uVar3) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar3 + (uVar3 >> 1);
      }
      iVar4 = StdVectorDword_size(vec);
      if (uVar3 < iVar4 + uVar1) {
        iVar4 = StdVectorDword_size(vec);
        uVar3 = iVar4 + uVar1;
      }
      pvVar5 = (void *)FUN_005de727(uVar3,0);
      *(void **)(unaff_EBP + 0x14) = pvVar5;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      ParserVector_insertDefaultRangeThunk
                (vec,*(void **)((int)vec + 4),*(void **)(unaff_EBP + 0xc),pvVar5);
      *(undefined4 *)(unaff_EBP + -0x18) = extraout_EAX;
      pvVar5 = (void *)IntSlotArray_constructAtIndex(extraout_EAX,uVar1,unaff_EBP + -0x14);
      *(void **)(unaff_EBP + -0x18) = pvVar5;
      ParserVector_insertDefaultRangeThunk
                (vec,*(void **)(unaff_EBP + 0xc),*(void **)((int)vec + 8),pvVar5);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar4 = StdVectorDword_size(vec);
      if (*(void **)((int)vec + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)vec + 4));
      }
      iVar2 = *(int *)(unaff_EBP + 0x14);
      *(uint *)((int)vec + 0xc) = iVar2 + uVar3 * 4;
      *(uint *)((int)vec + 8) = iVar2 + (uVar1 + iVar4) * 4;
      *(int *)((int)vec + 4) = iVar2;
    }
    else {
      pvVar5 = *(void **)((int)vec + 8);
      *(void **)(unaff_EBP + 0x10) = pvVar5;
      begin = *(undefined4 **)(unaff_EBP + 0xc);
      if ((uint)((int)pvVar5 - (int)begin >> 2) < uVar1) {
        *(uint *)(unaff_EBP + 0x14) = uVar1 * 4;
        ParserVector_insertDefaultRange(begin,pvVar5,begin + uVar1,vec);
        *(undefined4 *)(unaff_EBP + -4) = 2;
        IntSlotArray_constructAtIndex
                  (*(int *)((int)vec + 8),uVar1 - (*(int *)((int)vec + 8) - (int)begin >> 2),
                   unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar4 = *(int *)(unaff_EBP + 0x14);
        *(int *)((int)vec + 8) = *(int *)((int)vec + 8) + iVar4;
        iVar2 = *(int *)((int)vec + 8);
        for (; begin != (undefined4 *)(iVar2 - iVar4); begin = begin + 1) {
          *begin = *(undefined4 *)(unaff_EBP + -0x14);
        }
      }
      else {
        *(void **)(unaff_EBP + 0x14) = pvVar5;
        *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + uVar1 * -4;
        ParserVector_insertDefaultRange(*(void **)(unaff_EBP + 0x14),pvVar5,pvVar5,vec);
        *(undefined4 *)((int)vec + 8) = extraout_EAX_00;
        FUN_005e60dd(begin,*(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + 0x10));
        puVar6 = begin + uVar1;
        for (; begin != puVar6; begin = begin + 1) {
          *begin = *(undefined4 *)(unaff_EBP + -0x14);
        }
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

