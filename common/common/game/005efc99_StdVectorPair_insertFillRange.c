// addr: 0x005efc99
// name: StdVectorPair_insertFillRange
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void StdVectorPair_insertFillRange(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  void *vec;
  int unaff_EBP;
  
                    /* Implements vector insertion of a fill range for 8-byte pair-like elements,
                       reallocating or shifting in-place and constructing copied elements. Evidence
                       is size/capacity checks, 8-byte strides, and copy/construct helpers. */
  FUN_00d83d3c();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe4;
  *(undefined4 *)(unaff_EBP + -0x1c) = **(undefined4 **)(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -0x18) = (*(undefined4 **)(unaff_EBP + 0x14))[1];
  uVar2 = FUN_005dcbc8();
  uVar1 = *(uint *)(unaff_EBP + 0x10);
  if (uVar1 != 0) {
    iVar3 = StdVector8_size(vec);
    if (0x1fffffffU - iVar3 < uVar1) {
      FUN_005eb95a();
    }
    iVar3 = StdVector8_size(vec);
    if (uVar2 < iVar3 + uVar1) {
      if (0x1fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      iVar3 = StdVector8_size(vec);
      if (uVar2 < iVar3 + uVar1) {
        iVar3 = StdVector8_size(vec);
        uVar2 = iVar3 + uVar1;
      }
      uVar4 = FUN_005de7c3(uVar2,0);
      *(undefined4 *)(unaff_EBP + 0x14) = uVar4;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      uVar4 = FUN_005eaafe(*(undefined4 *)((int)vec + 4),*(undefined4 *)(unaff_EBP + 0xc),uVar4);
      *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
      uVar4 = FUN_005e8e2c(uVar4,uVar1,unaff_EBP + -0x1c);
      *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
      FUN_005eaafe(*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)((int)vec + 8),uVar4);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar5 = StdVector8_size(vec);
      iVar3 = *(int *)((int)vec + 4);
      if (iVar3 != 0) {
        for (; iVar3 != *(int *)((int)vec + 8); iVar3 = iVar3 + 8) {
        }
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)vec + 4));
      }
      iVar3 = *(int *)(unaff_EBP + 0x14);
      *(uint *)((int)vec + 0xc) = iVar3 + uVar2 * 8;
      *(uint *)((int)vec + 8) = iVar3 + (uVar1 + iVar5) * 8;
      *(int *)((int)vec + 4) = iVar3;
    }
    else {
      iVar3 = *(int *)((int)vec + 8);
      *(int *)(unaff_EBP + 0x10) = iVar3;
      iVar5 = *(int *)(unaff_EBP + 0xc);
      if ((uint)(iVar3 - iVar5 >> 3) < uVar1) {
        *(uint *)(unaff_EBP + 0x14) = uVar1 * 8;
        FUN_005e6c45(iVar5,iVar3,uVar1 * 8 + iVar5,vec);
        *(undefined4 *)(unaff_EBP + -4) = 2;
        FUN_005e8e2c(*(int *)((int)vec + 8),uVar1 - (*(int *)((int)vec + 8) - iVar5 >> 3),
                     unaff_EBP + -0x1c);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar3 = *(int *)(unaff_EBP + 0x14);
        *(int *)((int)vec + 8) = *(int *)((int)vec + 8) + iVar3;
        FUN_005df704(iVar5,*(int *)((int)vec + 8) - iVar3,unaff_EBP + -0x1c);
      }
      else {
        *(int *)(unaff_EBP + 0x14) = iVar3;
        *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + uVar1 * -8;
        uVar4 = FUN_005e6c45(*(undefined4 *)(unaff_EBP + 0x14),iVar3,iVar3,vec);
        *(undefined4 *)((int)vec + 8) = uVar4;
        FUN_005e7fe2(iVar5,*(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + 0x10));
        FUN_005df704(iVar5,uVar1 * 8 + iVar5,unaff_EBP + -0x1c);
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

