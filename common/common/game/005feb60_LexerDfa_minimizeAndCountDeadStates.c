// addr: 0x005feb60
// name: LexerDfa_minimizeAndCountDeadStates
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint LexerDfa_minimizeAndCountDeadStates(void * this, void * scratch, uint
   flags) */

uint __thiscall LexerDfa_minimizeAndCountDeadStates(void *this,void *scratch,uint flags)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  void *pvVar4;
  int iVar5;
  void *this_00;
  uint *puVar6;
  void *this_01;
  void *pvVar7;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ushort uVar12;
  short sVar13;
  uint *puVar14;
  uint uVar15;
  int *unaff_EDI;
  uint index;
  undefined1 local_84 [4];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74 [12];
  undefined1 local_68 [12];
  undefined1 local_5c [8];
  uint local_54;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 local_44 [8];
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  uint local_24;
  int *local_20;
  uint *local_1c;
  uint local_18;
  void *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
                    /* Optionally minimizes/renumbers equivalent DFA states and optionally counts
                       states whose transition rows are all -1, storing that count at offset 0x70.
                       Evidence is the flag tests, equivalent-row comparisons, transition-table
                       remapping, and the final all--1 row count pass. */
  uVar9 = flags;
  local_14 = this;
  if ((flags & 2) != 0) {
    FUN_004fb0b9();
    FUN_004fb0b9();
    local_80 = 0;
    local_7c = 0;
    local_78 = 0;
    StdList_Node11_initSentinel(local_5c);
    puVar14 = (uint *)0x0;
    pvVar4 = (void *)StdVector16_at_005db533((void *)((int)this + 0x30),0);
    iVar5 = StdVector_size(pvVar4);
    if (iVar5 != 0) {
      do {
        local_1c = puVar14;
        CheckedTreeIterator_ctor(local_4c,local_50);
        StdRbTreeInt_find(local_50,local_3c,&local_1c,unaff_EDI);
        bVar1 = CheckedTreeIterator_equals(this_00,local_2c);
        uVar9 = local_54;
        if (bVar1) {
          local_18 = local_54;
          local_1c = puVar14;
          puVar6 = (uint *)IntDefaultMap_getOrInsert(local_50,(int *)&local_1c);
          *puVar6 = uVar9;
          puVar6 = (uint *)IntDefaultMap_getOrInsert(local_68,(int *)&local_18);
          *puVar6 = (uint)puVar14;
          local_1c = puVar14;
          FUN_005f241e(local_74,&local_1c);
          uVar2 = *(ushort *)((int)this + 0x28);
          uVar12 = *(short *)((int)this + 0x2c) + 1;
          local_24 = (uint)uVar12;
          if (uVar2 != uVar12) {
            do {
              local_1c = (uint *)(int)(short)uVar2;
              local_10 = *(int *)(*(int *)(*(int *)((int)this + 0x1c) + ((uint)local_1c >> 7) * 4) +
                                 (*(uint *)((int)this + 0x10) & (uint)local_1c) * 4);
              if ((int)puVar14 < local_10) {
                CheckedTreeIterator_ctor(local_4c,local_50);
                StdRbTreeInt_find(local_50,local_44,&local_10,unaff_EDI);
                bVar1 = CheckedTreeIterator_equals(this_01,local_34);
                if (bVar1) {
                  local_8 = 0;
                  pvVar4 = (void *)((int)this + 0x30);
                  local_c = 1;
                  iVar5 = StdVector16_size_005db4ff(pvVar4);
                  if (iVar5 != 0) {
                    do {
                      if (local_c == 0) goto LAB_005fed10;
                      iVar5 = local_10;
                      pvVar7 = (void *)StdVector16_at_005db533(pvVar4,local_8);
                      local_20 = StdVector_atElementPtr4(pvVar7,iVar5);
                      puVar6 = puVar14;
                      pvVar7 = (void *)StdVector16_at_005db533(pvVar4,local_8);
                      piVar8 = StdVector_atElementPtr4(pvVar7,(int)puVar6);
                      if (*piVar8 == *local_20) {
                        local_8 = local_8 + 1;
                      }
                      else {
                        local_c = 0;
                      }
                      uVar9 = StdVector16_size_005db4ff(pvVar4);
                    } while (local_8 < uVar9);
                    if (local_c == 0) goto LAB_005fed10;
                  }
                  puVar6 = (uint *)IntDefaultMap_getOrInsert(local_50,&local_10);
                  *puVar6 = local_18;
                }
              }
LAB_005fed10:
              iVar5 = SparseIntTable_findNextUsedIndex
                                ((void *)((int)this + 0xc),local_1c,(uint)unaff_EDI);
              uVar2 = (ushort)iVar5;
            } while (uVar2 != (ushort)local_24);
          }
        }
        puVar14 = (uint *)((int)puVar14 + 1);
        pvVar4 = (void *)StdVector16_at_005db533((void *)((int)this + 0x30),0);
        puVar6 = (uint *)StdVector_size(pvVar4);
      } while (puVar14 < puVar6);
    }
    uVar9 = 0;
    pvVar4 = (void *)StdVector16_size_005db4ff((void *)((int)this + 0x30));
    LexerDfaState_destroy(pvVar4);
    iVar5 = StdVector16_size_005db4ff((void *)((int)this + 0x30));
    pvVar4 = this;
    if (iVar5 != 0) {
      do {
        uVar15 = local_54;
        pvVar4 = (void *)StdVector16_at_005db533(local_84,uVar9);
        StdVectorPair_resize(pvVar4,uVar15);
        uVar15 = 0;
        if (local_54 != 0) {
          do {
            local_24 = uVar15;
            piVar8 = IntDefaultMap_getOrInsert(local_68,(int *)&local_24);
            iVar5 = *piVar8;
            pvVar4 = (void *)StdVector16_at_005db533((void *)((int)this + 0x30),uVar9);
            puVar10 = StdVector_atElementPtr4(pvVar4,iVar5);
            index = uVar15;
            pvVar4 = (void *)StdVector16_at_005db533(local_84,uVar9);
            puVar11 = StdVector_atElementPtr4(pvVar4,index);
            uVar15 = uVar15 + 1;
            *puVar11 = *puVar10;
            this = local_14;
          } while (uVar15 < local_54);
        }
        uVar9 = uVar9 + 1;
        uVar15 = StdVector16_size_005db4ff((void *)((int)this + 0x30));
        pvVar4 = this;
      } while (uVar9 < uVar15);
    }
    sVar3 = *(short *)((int)pvVar4 + 0x28);
    sVar13 = *(short *)((int)pvVar4 + 0x2c) + 1;
    this = pvVar4;
    if (sVar3 != sVar13) {
      do {
        puVar14 = (uint *)(int)sVar3;
        piVar8 = IntDefaultMap_getOrInsert
                           (local_50,(int *)(*(int *)(*(int *)((int)pvVar4 + 0x1c) +
                                                     ((uint)puVar14 >> 7) * 4) +
                                            (*(uint *)((int)pvVar4 + 0x10) & (uint)puVar14) * 4));
        PagedSparseIntMap_setValue((void *)((int)pvVar4 + 0xc),(int)puVar14,piVar8);
        iVar5 = SparseIntTable_findNextUsedIndex
                          ((void *)((int)pvVar4 + 0xc),puVar14,(uint)unaff_EDI);
        sVar3 = (short)iVar5;
        this = local_14;
      } while (sVar3 != sVar13);
    }
    Record16_swapTrailingFields((void *)((int)this + 0x30),local_84,unaff_EDI);
    FUN_005f322e();
    StdVector16_clearAndFreeStorage(local_84);
    RbTree_destroyAndFreeNode_0051b342(local_68);
    RbTree_destroyAndFreeNode_0051b342(local_50);
    uVar9 = local_54;
  }
  if ((flags & 1) != 0) {
    pvVar4 = (void *)((int)this + 0x30);
    uVar9 = 0;
    local_10 = 0;
    iVar5 = StdVector16_size_005db4ff(pvVar4);
    if (iVar5 != 0) {
      do {
        flags = 0;
        local_14 = (void *)0x1;
        pvVar7 = (void *)StdVector16_at_005db533(pvVar4,uVar9);
        iVar5 = StdVector_size(pvVar7);
        if (iVar5 == 0) {
LAB_005feeca:
          pvVar7 = (void *)StdVector16_at_005db533(pvVar4,uVar9);
          StdVectorPair_resize(pvVar7,0);
          local_10 = local_10 + 1;
        }
        else {
          do {
            if (local_14 == (void *)0x0) goto LAB_005feee0;
            uVar15 = flags;
            pvVar7 = (void *)StdVector16_at_005db533(pvVar4,uVar9);
            piVar8 = StdVector_atElementPtr4(pvVar7,uVar15);
            if (*piVar8 != -1) {
              local_14 = (void *)0x0;
            }
            flags = flags + 1;
            pvVar7 = (void *)StdVector16_at_005db533(pvVar4,uVar9);
            uVar15 = StdVector_size(pvVar7);
          } while (flags < uVar15);
          if (local_14 != (void *)0x0) goto LAB_005feeca;
        }
LAB_005feee0:
        uVar9 = uVar9 + 1;
        uVar15 = StdVector16_size_005db4ff(pvVar4);
      } while (uVar9 < uVar15);
    }
    *(int *)((int)this + 0x70) = local_10;
    uVar9 = 1;
  }
  return uVar9;
}

