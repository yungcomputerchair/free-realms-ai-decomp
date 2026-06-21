// addr: 0x005fe935
// name: LexerDfa_combineWith
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool LexerDfa_combineWith(void * this, void * otherDfa) */

bool __thiscall LexerDfa_combineWith(void *this,void *otherDfa)

{
  void *this_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  uint *table;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  uint unaff_EDI;
  uint newSize;
  uint local_10;
  uint *local_c;
  uint local_8;
  
                    /* Appends another DFA's states/transitions into this DFA, remapping sparse
                       state indexes and copying accept/transition vectors; returns false when the
                       source DFA shape is invalid. Evidence is the caller's 'Failed to combine
                       DFAs.' path and the code's offsetting of state indexes by the current state
                       count. */
  this_00 = otherDfa;
  if (((otherDfa != (void *)0x0) &&
      (iVar1 = StdVector16_size_005db4ff((void *)((int)this + 0x30)), iVar1 != 0)) &&
     (iVar1 = StdVector16_size_005db4ff((void *)((int)otherDfa + 0x30)), iVar1 != 0)) {
    iVar1 = StdVector8_size((void *)((int)otherDfa + 0x50));
    iVar2 = StdVector8_size((void *)((int)this + 0x50));
    if (iVar2 == iVar1) {
      uVar3 = StdVector16_size_005db4ff((void *)((int)this + 0x30));
      local_8 = uVar3;
      pvVar4 = (void *)StdVector16_size_005db4ff((void *)((int)otherDfa + 0x30));
      table = *(uint **)((int)otherDfa + 0x28);
      uVar9 = *(uint *)((int)this + 0x24);
      local_c = (uint *)(*(int *)((int)otherDfa + 0x2c) + 1);
      if (table != local_c) {
        do {
          if (*(int *)(*(int *)(*(int *)((int)this + 0x1c) + ((uint)table >> 7) * 4) +
                      (*(uint *)((int)this + 0x10) & (uint)table) * 4) == -1) {
            local_10 = *(uint *)((int)this + 0x24);
            PagedSparseIntMap_setValue((void *)((int)this + 0xc),(int)table,(int *)&local_10);
          }
          table = (uint *)SparseIntTable_findNextUsedIndex
                                    ((void *)((int)otherDfa + 0xc),table,unaff_EDI);
        } while (table != local_c);
      }
      local_10 = *(uint *)((int)this + 0x24);
      if ((uVar9 != local_10) && (uVar9 = 0, local_8 != 0)) {
        do {
          newSize = local_10;
          pvVar5 = (void *)StdVector16_at_005db533((void *)((int)this + 0x30),uVar9);
          StdVectorPair_resize(pvVar5,newSize);
          uVar9 = uVar9 + 1;
        } while (uVar9 < local_8);
      }
      StdVectorPair_resize((void *)((int)this + 0x40),(int)pvVar4 + uVar3);
      LexerDfaState_destroy((void *)((int)pvVar4 + uVar3));
      otherDfa = (void *)0x0;
      if (pvVar4 != (void *)0x0) {
        do {
          puVar6 = StdVector_atElementPtr4((void *)((int)this_00 + 0x40),(int)otherDfa);
          uVar3 = (int)otherDfa + local_8;
          puVar7 = StdVector_atElementPtr4((void *)((int)this + 0x40),uVar3);
          *puVar7 = *puVar6;
          uVar9 = local_10;
          pvVar5 = (void *)StdVector16_at_005db533((void *)((int)this + 0x30),uVar3);
          StdVectorPair_resize(pvVar5,uVar9);
          iVar1 = *(int *)((int)this_00 + 0x2c);
          for (local_c = *(uint **)((int)this_00 + 0x28); local_c != (uint *)(iVar1 + 1);
              local_c = (uint *)SparseIntTable_findNextUsedIndex
                                          ((void *)((int)this_00 + 0xc),local_c,unaff_EDI)) {
            uVar9 = ChunkedIndexMap_getValueOrInvalid(this_00,otherDfa,(ushort)local_c);
            if (uVar9 != 0xffffffff) {
              iVar2 = *(int *)(*(int *)(*(int *)((int)this + 0x1c) +
                                       ((uint)local_c >> 7 & 0x1ff) * 4) +
                              (*(uint *)((int)this + 0x10) & (uint)local_c & 0xffff) * 4);
              pvVar5 = (void *)StdVector16_at_005db533((void *)((int)this + 0x30),uVar3);
              piVar8 = StdVector_atElementPtr4(pvVar5,iVar2);
              *piVar8 = uVar9 + local_8;
            }
          }
          otherDfa = (void *)((int)otherDfa + 1);
        } while (otherDfa < pvVar4);
      }
      pvVar4 = (void *)((int)this + 0x60);
      iVar1 = StdVector_size(pvVar4);
      uVar9 = StdVector_size((void *)((int)this_00 + 0x60));
      StdVectorPair_resize(pvVar4,iVar1 + uVar9);
      uVar3 = 0;
      if (uVar9 != 0) {
        do {
          piVar8 = StdVector_atElementPtr4((void *)((int)this_00 + 0x60),uVar3);
          iVar2 = *piVar8 + local_8;
          piVar8 = StdVector_atElementPtr4(pvVar4,iVar1 + uVar3);
          uVar3 = uVar3 + 1;
          *piVar8 = iVar2;
        } while (uVar3 < uVar9);
      }
      LexerDfaTables_clear();
      return true;
    }
  }
  return false;
}

