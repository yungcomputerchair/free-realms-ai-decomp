// addr: 0x00427406
// name: StdVectorDword_insertFillRange
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void StdVectorDword_insertFillRange(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  void *this;
  undefined4 *first;
  int unaff_EBP;
  undefined4 *puVar6;
  
                    /* Implements vector insertion of a fill range of dwords, reallocating when
                       capacity is insufficient or shifting elements in-place otherwise. Evidence is
                       size/capacity growth, allocation, move-to-end, and repeated fill assignment.
                        */
  FUN_00d83d3c();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe8;
  *(undefined4 *)(unaff_EBP + -0x14) = **(undefined4 **)(unaff_EBP + 0x14);
  uVar3 = FUN_0040af3c();
  uVar1 = *(uint *)(unaff_EBP + 0x10);
  if (uVar1 != 0) {
    iVar4 = StdVector_size(this);
    if (0x3fffffffU - iVar4 < uVar1) {
      FUN_00423ee8();
    }
    iVar4 = StdVector_size(this);
    if (uVar3 < iVar4 + uVar1) {
      if (0x3fffffff - (uVar3 >> 1) < uVar3) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar3 + (uVar3 >> 1);
      }
      iVar4 = StdVector_size(this);
      if (uVar3 < iVar4 + uVar1) {
        iVar4 = StdVector_size(this);
        uVar3 = iVar4 + uVar1;
      }
      uVar5 = FUN_0040c8b5(uVar3,0);
      *(undefined4 *)(unaff_EBP + 0x14) = uVar5;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      uVar5 = FUN_0042176f(*(undefined4 *)((int)this + 4),*(undefined4 *)(unaff_EBP + 0xc),uVar5);
      *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
      uVar5 = FUN_00422413(uVar5,uVar1,unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
      FUN_0042176f(*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)((int)this + 8),uVar5);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar4 = StdVector_size(this);
      if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      iVar2 = *(int *)(unaff_EBP + 0x14);
      *(uint *)((int)this + 0xc) = iVar2 + uVar3 * 4;
      *(uint *)((int)this + 8) = iVar2 + (uVar1 + iVar4) * 4;
      *(int *)((int)this + 4) = iVar2;
    }
    else {
      iVar4 = *(int *)((int)this + 8);
      *(int *)(unaff_EBP + 0x10) = iVar4;
      first = *(undefined4 **)(unaff_EBP + 0xc);
      if ((uint)(iVar4 - (int)first >> 2) < uVar1) {
        *(uint *)(unaff_EBP + 0x14) = uVar1 * 4;
        FUN_004180e4(first,iVar4,first + uVar1,this);
        *(undefined4 *)(unaff_EBP + -4) = 2;
        FUN_00422413(*(int *)((int)this + 8),uVar1 - (*(int *)((int)this + 8) - (int)first >> 2),
                     unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar4 = *(int *)(unaff_EBP + 0x14);
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + iVar4;
        iVar2 = *(int *)((int)this + 8);
        for (; first != (undefined4 *)(iVar2 - iVar4); first = first + 1) {
          *first = *(undefined4 *)(unaff_EBP + -0x14);
        }
      }
      else {
        *(int *)(unaff_EBP + 0x14) = iVar4;
        *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + uVar1 * -4;
        uVar5 = FUN_004180e4(*(undefined4 *)(unaff_EBP + 0x14),iVar4,iVar4,this);
        *(undefined4 *)((int)this + 8) = uVar5;
        StdIntRange_moveToEndThunk(first,*(void **)(unaff_EBP + 0x14),*(void **)(unaff_EBP + 0x10));
        puVar6 = first + uVar1;
        for (; first != puVar6; first = first + 1) {
          *first = *(undefined4 *)(unaff_EBP + -0x14);
        }
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

