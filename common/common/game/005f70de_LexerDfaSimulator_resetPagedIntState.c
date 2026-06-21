// addr: 0x005f70de
// name: LexerDfaSimulator_resetPagedIntState
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall LexerDfaSimulator_resetPagedIntState(int *param_1,int param_2)

{
  int *this;
  longlong lVar1;
  int iVar2;
  byte *pbVar3;
  void *pvVar4;
  
                    /* Resets a lexer/DFA traversal context: clears/resizes traversal stack,
                       initializes a paged sparse int map, seeds current indexes from the active DFA
                       table, and allocates a per-state pointer array. Evidence is the
                       LexerTraversalStack/PagedSparseIntMap/LexerPagedSet callees and identical
                       DFA-table field access. */
  LexerTraversalStack_resize(param_1,param_2);
  this = param_1 + 2;
  PagedSparseIntMap_initialize(this,param_1[1],1);
  param_1[0x10] = 0;
  iVar2 = SegmentedIterator1000_getAbsoluteIndex(this);
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
      iVar2 = SegmentedIterator1000_getAbsoluteIndex(this);
      *(int *)(param_1[0xf] + 4) = iVar2;
      LexerPagedSet_contains(this,*(int *)(param_1[0xf] + 4));
    }
    if ((void *)param_1[0x17] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[0x17]);
    }
    lVar1 = (ulonglong)*(uint *)(*param_1 + 0x48) * 4;
    pvVar4 = Mem_Alloc(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    param_1[0x17] = (int)pvVar4;
  }
  param_1[0x12] = 1;
  return;
}

