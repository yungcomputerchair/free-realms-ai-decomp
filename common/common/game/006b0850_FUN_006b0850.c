// addr: 0x006b0850
// name: FUN_006b0850
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_006b0850(int *param_1)

{
  int *it;
  longlong lVar1;
  int iVar2;
  byte *pbVar3;
  void *pvVar4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  FUN_006af15a(0);
  it = param_1 + 2;
  FUN_006ad0dc(param_1[1],1);
  param_1[0x10] = 0;
  iVar2 = SegmentedIterator2000_getAbsoluteIndex_B(it);
  param_1[0x13] = iVar2;
  iVar2 = *param_1;
  if (((iVar2 == 0) || (param_1[1] == 0)) || (*(int *)(iVar2 + 0x3c) == 0)) {
    *(undefined4 *)param_1[0xf] = 0xffffffff;
    param_1[0x11] = -1;
  }
  else {
    *(undefined4 *)param_1[0xf] = *(undefined4 *)(iVar2 + 0x40);
    iVar2 = *(int *)param_1[0xf];
    param_1[0x11] = iVar2;
    pbVar3 = (byte *)CheckedVector_ushort_at_constB(iVar2);
    if ((*pbVar3 & 1) == 0) {
      *(undefined4 *)(param_1[0xf] + 4) = 0xffffffff;
    }
    else {
      iVar2 = SegmentedIterator2000_getAbsoluteIndex_B(it);
      *(int *)(param_1[0xf] + 4) = iVar2;
      LexerPagedRecordSet_containsAlt(it,*(int *)(param_1[0xf] + 4));
    }
    if ((void *)param_1[0x19] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[0x19]);
    }
    lVar1 = (ulonglong)*(uint *)(*param_1 + 0x48) * 4;
    pvVar4 = Mem_Alloc(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    param_1[0x19] = (int)pvVar4;
  }
  param_1[0x12] = 1;
  return;
}

