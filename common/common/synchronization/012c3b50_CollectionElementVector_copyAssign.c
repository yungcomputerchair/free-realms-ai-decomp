// addr: 0x012c3b50
// name: CollectionElementVector_copyAssign
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall CollectionElementVector_copyAssign(void *param_1,void *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  void *first;
  undefined4 extraout_EAX;
  int iVar6;
  undefined4 extraout_EAX_00;
  uint uVar7;
  
                    /* Copy-assigns a vector of 0x10-byte collection-element records, reusing
                       capacity when possible or freeing/reallocating storage before copying the
                       range. */
  if (param_1 == param_2) {
    return param_1;
  }
  iVar6 = *(int *)((int)param_2 + 4);
  if (iVar6 != 0) {
    uVar7 = *(int *)((int)param_2 + 8) - iVar6 >> 4;
    if (uVar7 != 0) {
      iVar1 = *(int *)((int)param_1 + 4);
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(int *)((int)param_1 + 8) - iVar1 >> 4;
      }
      if (uVar7 <= uVar3) {
        uVar4 = FUN_012c2910(iVar6,*(int *)((int)param_2 + 8),iVar1);
        FUN_012c2d00(uVar4,*(undefined4 *)((int)param_1 + 8));
        if (*(int *)((int)param_2 + 4) == 0) {
          *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)((int)param_1 + 4);
          return param_1;
        }
        *(int *)((int)param_1 + 8) =
             (*(int *)((int)param_2 + 8) - *(int *)((int)param_2 + 4) >> 4) * 0x10 +
             *(int *)((int)param_1 + 4);
        return param_1;
      }
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(int *)((int)param_1 + 0xc) - iVar1 >> 4;
      }
      if (uVar3 < uVar7) {
        if (iVar1 != 0) {
          FUN_012c2d00(iVar1,*(undefined4 *)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)param_1 + 4));
        }
        if (*(int *)((int)param_2 + 4) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)((int)param_2 + 8) - *(int *)((int)param_2 + 4) >> 4;
        }
        cVar2 = FUN_012c3630(iVar6);
        if (cVar2 == '\0') {
          return param_1;
        }
        CollectionElementVector_copyRangeThunk
                  (param_1,*(void **)((int)param_2 + 4),*(void **)((int)param_2 + 8),
                   *(void **)((int)param_1 + 4));
        *(undefined4 *)((int)param_1 + 8) = extraout_EAX_00;
        return param_1;
      }
      if (iVar1 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)((int)param_1 + 8) - iVar1 >> 4;
      }
      first = (void *)(iVar5 * 0x10 + iVar6);
      FUN_012c2910(iVar6,first,iVar1);
      CollectionElementVector_copyRangeThunk
                (param_1,first,*(void **)((int)param_2 + 8),*(void **)((int)param_1 + 8));
      *(undefined4 *)((int)param_1 + 8) = extraout_EAX;
      return param_1;
    }
  }
  FUN_012c2ea0();
  return param_1;
}

