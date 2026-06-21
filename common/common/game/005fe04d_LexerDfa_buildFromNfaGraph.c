// addr: 0x005fe04d
// name: LexerDfa_buildFromNfaGraph
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool LexerDfa_buildFromNfaGraph(void * this, void * nfaGraph, int
   startAcceptId) */

bool __thiscall LexerDfa_buildFromNfaGraph(void *this,void *nfaGraph,int startAcceptId)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  short *psVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  void *this_00;
  ushort *puVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined1 local_9c [28];
  undefined1 local_80 [4];
  undefined4 *local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c [4];
  undefined4 *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [4];
  undefined4 *local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_38;
  int local_34;
  undefined4 local_30;
  void *local_2c;
  uint local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  uint local_8;
  
                    /* Builds DFA states and transition tables from a GNFA/NFA graph, computes
                       closures, resolves accepting lexeme precedence, initializes accepting-state
                       metadata, and finalizes the DFA. Evidence is the caller's NFA/DFA build flow
                       and the diagnostic 'Lexeme ... takes precedence over ... on state %d'. */
  local_2c = this;
  iVar3 = StdVector16_size_005db4ff((void *)((int)this + 0x30));
  if (iVar3 == 0) {
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    RbTree_initHeader(local_80);
    FUN_005e79b8();
    ParserAst_collectReachableNodes(*(undefined4 *)nfaGraph,local_80);
    CheckedTreeIterator_ctor_nodeFlag21A(local_7c,local_80);
    local_20 = local_14;
    local_1c = local_10;
    CheckedTreeIterator_ctor_nodeFlag21A(*local_7c,local_80);
    local_14 = local_44;
    local_10 = local_40;
    while (bVar1 = CheckedTreeIterator_equals_nodeFlag21A(&local_14,&local_20), !bVar1) {
      piVar7 = (int *)RbTreeIterator_getValue();
      pvVar5 = (void *)(*piVar7 + 8);
      local_8 = 0;
      iVar3 = StdVector_size(pvVar5);
      if (iVar3 != 0) {
        do {
          puVar10 = StdVector_atElementPtr4(pvVar5,local_8);
          local_18 = (uint)*puVar10;
          FUN_005f2312(local_6c,&local_18);
          local_8 = local_8 + 1;
          uVar12 = StdVector_size(pvVar5);
        } while (local_8 < uVar12);
      }
      RbTreeIterator_increment(&local_14);
    }
    FUN_005dc45f(*local_54,local_58);
    local_14 = local_20;
    local_10 = local_1c;
    FUN_005dc45f(local_54,local_58);
    cVar2 = FUN_005dbb7f(&local_20);
    if (cVar2 == '\0') {
      do {
        local_18 = *(uint *)((int)this + 0x24);
        psVar4 = (short *)FUN_005e10a4();
        PagedSparseIntMap_setValue((void *)((int)this + 0xc),(int)*psVar4,(int *)&local_18);
        FUN_005e2090();
        FUN_005dc45f(local_54,local_58);
        cVar2 = FUN_005dbb7f(&local_20);
      } while (cVar2 == '\0');
    }
    local_c = Mem_Alloc(0x10);
    if (local_c == (void *)0x0) {
      local_c = (void *)0x0;
    }
    else {
      *(undefined4 *)((int)local_c + 4) = 0;
      *(undefined4 *)((int)local_c + 8) = 0;
      *(undefined4 *)((int)local_c + 0xc) = 0;
    }
    StdVectorDword_pushBack(local_c,(uint)nfaGraph);
    LexerDfa_collectReachableStates();
    FUN_005f447f(&local_c);
    nfaGraph = Mem_Alloc(0x10);
    if (nfaGraph == (void *)0x0) {
      nfaGraph = (void *)0x0;
    }
    else {
      *(undefined4 *)((int)nfaGraph + 4) = 0;
      *(undefined4 *)((int)nfaGraph + 8) = 0;
      *(undefined4 *)((int)nfaGraph + 0xc) = 0;
    }
    LexerDfaState_destroy((void *)0x1);
    uVar12 = *(uint *)((int)this + 0x24);
    pvVar5 = (void *)StdVector16_at_005db533((void *)((int)this + 0x30),0);
    StdVectorPair_resize(pvVar5,uVar12);
    for (local_c = (void *)0x0;
        (uVar12 = 0, local_38 != 0 && (local_c < (void *)(local_34 - local_38 >> 2)));
        local_c = (void *)((int)local_c + 1)) {
      FUN_005e79e2();
      puVar6 = (undefined4 *)FUN_005db628(local_c);
      pvVar5 = (void *)*puVar6;
      local_28 = StdVectorDword_size(pvVar5);
      uVar12 = 0;
      if (local_28 != 0) {
        do {
          local_8 = 0;
          piVar7 = (int *)StdVectorDword_at_005db38b(pvVar5,uVar12);
          iVar3 = StdVector_size((void *)(*piVar7 + 8));
          if (iVar3 != 0) {
            do {
              piVar7 = (int *)StdVectorDword_at_005db38b(pvVar5,uVar12);
              puVar8 = StdVector_atElementPtr4((void *)(*piVar7 + 8),local_8);
              local_18 = *puVar8;
              if (local_18 != 0) {
                piVar7 = (int *)StdVectorDword_at_005db38b(pvVar5,uVar12);
                uVar9 = StdVectorDword_at_005db38b((void *)(*piVar7 + 0x18),local_8);
                this_00 = (void *)StdRbTree_node21B_getOrInsertValue(&local_18);
                StdVectorDword_pushBack(this_00,uVar9);
              }
              local_8 = local_8 + 1;
              piVar7 = (int *)StdVectorDword_at_005db38b(pvVar5,uVar12);
              uVar9 = StdVector_size((void *)(*piVar7 + 8));
            } while (local_8 < uVar9);
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < local_28);
      }
      CheckedTreeIterator_ctor_nodeFlag21B(local_68,local_6c);
      local_20 = local_44;
      local_1c = local_40;
      CheckedTreeIterator_ctor_nodeFlag21B(*local_68,local_6c);
      local_14 = local_74;
      local_10 = local_70;
      while (bVar1 = CheckedTreeIterator_equals_nodeFlag21B(&local_14,&local_20), !bVar1) {
        iVar3 = CheckedTreeIterator_derefValue_nodeFlag21A();
        pvVar5 = nfaGraph;
        StdVectorDword_assignFromVector(iVar3 + 4);
        CheckedIndexIterator_ctor(*(undefined4 *)((int)pvVar5 + 8),pvVar5);
        CheckedIndexIterator_ctor(*(undefined4 *)((int)pvVar5 + 4),pvVar5);
        FUN_005f1a85(local_60,local_5c,local_4c,local_48);
        LexerDfa_collectReachableStates();
        local_8 = 0;
        while (local_38 != 0) {
          if ((uint)(local_34 - local_38 >> 2) <= local_8) {
LAB_005fe3c5:
            if (local_38 != 0) {
              uVar12 = local_34 - local_38 >> 2;
              goto LAB_005fe3d4;
            }
            break;
          }
          puVar6 = (undefined4 *)FUN_005db628(local_8);
          bVar1 = StdVectorDword_equals((void *)*puVar6,pvVar5);
          if (bVar1) goto LAB_005fe3c5;
          local_8 = local_8 + 1;
        }
        uVar12 = 0;
LAB_005fe3d4:
        if (local_8 == uVar12) {
          FUN_005f447f(&nfaGraph);
          uVar9 = StdVector16_size_005db4ff((void *)((int)this + 0x30));
          LexerDfaState_destroy((void *)(uVar9 + 1));
          uVar12 = *(uint *)((int)this + 0x24);
          pvVar5 = (void *)StdVector16_at_005db533((void *)((int)this + 0x30),uVar9);
          StdVectorPair_resize(pvVar5,uVar12);
          nfaGraph = Mem_Alloc(0x10);
          if (nfaGraph == (void *)0x0) {
            nfaGraph = (void *)0x0;
          }
          else {
            *(undefined4 *)((int)nfaGraph + 4) = 0;
            *(undefined4 *)((int)nfaGraph + 8) = 0;
            *(undefined4 *)((int)nfaGraph + 0xc) = 0;
          }
        }
        puVar10 = (ushort *)CheckedTreeIterator_derefValue_nodeFlag21A();
        PackedTrie_appendTransitionValue(this,local_c,*puVar10,local_8);
        FUN_005e2133();
      }
      CheckedTreeNode21B_destroyAndFree(local_6c);
    }
    if (nfaGraph != (void *)0x0) {
      StdVector_clearAndFreeStorage_005e4773(nfaGraph);
                    /* WARNING: Subroutine does not return */
      _free(nfaGraph);
    }
    uVar9 = StdVector16_size_005db4ff((void *)((int)this + 0x30));
    StdVectorPair_resize((void *)((int)this + 0x40),uVar9);
    iVar3 = StdVector16_size_005db4ff((void *)((int)this + 0x30));
    if (iVar3 != 0) {
      do {
        local_8 = 0;
        puVar6 = (undefined4 *)FUN_005db628(uVar12);
        iVar3 = StdVectorDword_size((void *)*puVar6);
        if (iVar3 != 0) {
          do {
            puVar6 = (undefined4 *)FUN_005db628(uVar12);
            piVar7 = (int *)StdVectorDword_at_005db38b((void *)*puVar6,local_8);
            nfaGraph = *(void **)(*piVar7 + 4);
            if (nfaGraph != (void *)0x0) {
              local_c = (void *)((int)this + 0x40);
              piVar7 = StdVector_atElementPtr4(local_c,uVar12);
              pvVar5 = local_c;
              if (*piVar7 != 0) {
                piVar7 = StdVector_atElementPtr4(local_c,uVar12);
                if ((int)nfaGraph <= *piVar7) {
                  piVar7 = StdVector_atElementPtr4(local_c,uVar12);
                  if (((int)nfaGraph < *piVar7) && ((*(byte *)((int)this + 4) & 4) != 0)) {
                    local_24 = &DAT_01bc7e28;
                    FUN_005dae9e();
                    puVar8 = StdVector_atElementPtr4(local_c,uVar12);
                    local_c = (void *)*puVar8;
                    piVar7 = (int *)FUN_005db680(nfaGraph);
                    iVar3 = *piVar7;
                    piVar7 = (int *)FUN_005db680(local_c);
                    FUN_004f3cc4(&local_24,"Lexeme \'%s\' takes precedence over \'%s\' on state %d",
                                 *piVar7 + 4,iVar3 + 4,uVar12);
                    uVar13 = 0xffffffff;
                    puVar6 = &local_1c;
                    FUN_004e4e6d(&DAT_0175b400,0xffffffff);
                    uVar11 = FUN_004f3b3d(puVar6);
                    FUN_004e884e(uVar11,uVar13);
                    FUN_004e4e6d(&DAT_0175b400,0xffffffff);
                    FUN_005db1ab(2,&local_28,&local_24,0,0xffffffff,0xffffffff,&local_18,0);
                    FUN_004d83ba();
                    FUN_004dc61b();
                    FUN_004dc61b();
                    FUN_004d83ba();
                    FUN_005f6d87(local_9c);
                    FUN_00550353();
                    FUN_004d83ba();
                    this = local_2c;
                  }
                  goto LAB_005fe708;
                }
                if ((*(byte *)((int)this + 4) & 4) != 0) {
                  local_24 = &DAT_01bc7e28;
                  FUN_005dae9e();
                  puVar6 = StdVector_atElementPtr4(local_c,uVar12);
                  piVar7 = (int *)FUN_005db680(*puVar6);
                  iVar3 = *piVar7;
                  piVar7 = (int *)FUN_005db680(nfaGraph);
                  FUN_004f3cc4(&local_24,"Lexeme \'%s\' takes precedence over \'%s\' on state %d",
                               *piVar7 + 4,iVar3 + 4,uVar12);
                  uVar13 = 0xffffffff;
                  puVar6 = &local_70;
                  FUN_004e4e6d(&DAT_0175b400,0xffffffff);
                  uVar11 = FUN_004f3b3d(puVar6);
                  FUN_004e884e(uVar11,uVar13);
                  FUN_004e4e6d(&DAT_0175b400,0xffffffff);
                  FUN_005db1ab(2,&local_5c,&local_24,0,0xffffffff,0xffffffff,&local_48,0);
                  FUN_004d83ba();
                  FUN_004dc61b();
                  FUN_004dc61b();
                  FUN_004d83ba();
                  FUN_005f6d87(local_9c);
                  FUN_00550353();
                  FUN_004d83ba();
                  this = local_2c;
                }
                pvVar5 = (void *)((int)this + 0x40);
              }
              puVar6 = StdVector_atElementPtr4(pvVar5,uVar12);
              *puVar6 = nfaGraph;
            }
LAB_005fe708:
            local_8 = local_8 + 1;
            puVar6 = (undefined4 *)FUN_005db628(uVar12);
            uVar9 = StdVectorDword_size((void *)*puVar6);
          } while (local_8 < uVar9);
        }
        uVar12 = uVar12 + 1;
        uVar9 = StdVector16_size_005db4ff((void *)((int)this + 0x30));
      } while (uVar12 < uVar9);
    }
    pvVar5 = (void *)((int)this + 0x50);
    iVar3 = FUN_005db649();
    LexerDfaState_resetTransitions(pvVar5,(void *)(iVar3 + 2));
    puVar6 = (undefined4 *)StdVector8_at_005db588(pvVar5,0);
    *puVar6 = 0;
    iVar3 = StdVector8_at_005db588(pvVar5,0);
    *(undefined4 *)(iVar3 + 4) = 0;
    puVar6 = (undefined4 *)StdVector8_at_005db588(pvVar5,1);
    *puVar6 = 1;
    iVar3 = StdVector8_at_005db588(pvVar5,1);
    uVar12 = 0;
    *(undefined4 *)(iVar3 + 4) = 0;
    iVar3 = FUN_005db649();
    if (iVar3 != 0) {
      do {
        nfaGraph = (void *)StdVector8_at_005db588(pvVar5,uVar12 + 2);
        iVar3 = FUN_005db680(uVar12);
        uVar11 = *(undefined4 *)(iVar3 + 0xc);
        *(undefined4 *)nfaGraph = *(undefined4 *)(iVar3 + 8);
        *(undefined4 *)((int)nfaGraph + 4) = uVar11;
        uVar12 = uVar12 + 1;
        uVar9 = FUN_005db649();
      } while (uVar12 < uVar9);
    }
    startAcceptId = 0;
    FUN_0042c155(&startAcceptId);
    FUN_005f31c3();
    CheckedTreeNode21A_destroyAndFree(local_80);
    FUN_005e73e5();
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

