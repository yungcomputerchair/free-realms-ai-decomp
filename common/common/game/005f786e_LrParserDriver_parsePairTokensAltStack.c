// addr: 0x005f786e
// name: LrParserDriver_parsePairTokensAltStack
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int LrParserDriver_parsePairTokensAltStack(void * this, void *
   reductionCallback) */

int __thiscall LrParserDriver_parsePairTokensAltStack(void *this,void *reductionCallback)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  undefined4 *puVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  uint uVar11;
  void *this_00;
  int iVar12;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  void *pvVar13;
  void *pvVar14;
  int *unaff_EDI;
  undefined8 uVar15;
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  uint local_1c;
  void *local_18;
  int local_14;
  int local_10;
  uint local_c;
  void *local_8;
  
LAB_005f7879:
  if (*(int *)((int)this + 0x44) == -1) {
    return -2;
  }
  *(undefined4 *)(*(int *)((int)this + 0x40) * 0x10 + *(int *)((int)this + 0x3c)) =
       *(undefined4 *)((int)this + 0x44);
  if (*(int *)((int)this + 0x48) != 0) {
    puVar5 = (undefined4 *)(*(code *)**(undefined4 **)((int)this + 8))();
    *(undefined4 *)((int)this + 0x50) = *puVar5;
    *(undefined2 *)((int)this + 0x54) = *(undefined2 *)(puVar5 + 1);
  }
  do {
    piVar1 = (int *)((int)this + 0x50);
    uVar2 = *(ushort *)
             (*(int *)(*(int *)(*(int *)this + 0x4c) +
                      *(int *)(*(int *)((int)this + 0x40) * 0x10 + *(int *)((int)this + 0x3c)) * 4)
             + *piVar1 * 2);
    uVar6 = (uint)uVar2;
    if ((short)uVar2 < 0) {
      puVar5 = (undefined4 *)((int)this + 8);
      do {
        *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + 1;
        *(uint *)(*(int *)((int)this + 0x40) * 0x10 + *(int *)((int)this + 0x3c)) = uVar6 & 0x3fff;
        FUN_005db0e4(piVar1,puVar5);
        pbVar7 = (byte *)CheckedVector_ushort_at_constA(*piVar1);
        if ((*pbVar7 & 1) != 0) {
          if (*piVar1 == 0) {
            local_8 = *(void **)((int)this + 0x60);
          }
          else {
            local_8 = *(void **)(*(int *)((int)this + 0x40) * 0x10 + -0xc +
                                *(int *)((int)this + 0x3c));
          }
          local_18 = (void *)SegmentedIterator1000_getAbsoluteIndex(puVar5);
          uVar6 = BlockAllocator4096_getAllocationSpan(puVar5,(int)local_8);
          LexerPagedSet_selectPage1000(puVar5,(int)local_8,uVar6);
          pbVar7 = (byte *)CheckedVector_ushort_at_constB
                                     (*(undefined4 *)
                                       (*(int *)((int)this + 0x40) * 0x10 +
                                       *(int *)((int)this + 0x3c)));
          if ((*pbVar7 & 2) == 0) {
            SegmentedIterator1000_seek(puVar5,local_18,(uint)unaff_EDI);
          }
          else {
            LexerPagedSet_selectPage1000
                      (puVar5,*(int *)(*(int *)((int)this + 0x40) * 0x10 + -0xc +
                                      *(int *)((int)this + 0x3c)),0xffffffff);
          }
          SegmentedIterator_setLimit(puVar5,(void *)0xffffffff,(uint)unaff_EDI);
        }
        pbVar7 = (byte *)CheckedVector_ushort_at_constB
                                   (*(undefined4 *)
                                     (*(int *)((int)this + 0x40) * 0x10 + *(int *)((int)this + 0x3c)
                                     ));
        if ((*pbVar7 & 1) == 0) {
          *(undefined4 *)(*(int *)((int)this + 0x40) * 0x10 + 4 + *(int *)((int)this + 0x3c)) =
               0xffffffff;
        }
        else {
          iVar8 = SegmentedIterator1000_getAbsoluteIndex(puVar5);
          *(int *)(*(int *)((int)this + 0x40) * 0x10 + 4 + *(int *)((int)this + 0x3c)) = iVar8;
          LexerPagedSet_contains
                    (puVar5,*(int *)(*(int *)((int)this + 0x40) * 0x10 + 4 +
                                    *(int *)((int)this + 0x3c)));
        }
        piVar9 = (int *)(**(code **)*puVar5)();
        *piVar1 = *piVar9;
        *(short *)((int)this + 0x54) = (short)piVar9[1];
        uVar2 = *(ushort *)
                 (*(int *)(*(int *)(*(int *)this + 0x4c) +
                          *(int *)(*(int *)((int)this + 0x40) * 0x10 + *(int *)((int)this + 0x3c)) *
                          4) + *piVar1 * 2);
        uVar6 = (uint)uVar2;
      } while ((short)uVar2 < 0);
    }
    if ((uVar6 & 0x4000) == 0) {
      local_8 = (void *)0x0;
    }
    else {
      if ((short)uVar6 == 0x4fff) {
        return 0;
      }
      local_c = uVar6 & 0x3fff;
      puVar10 = (uint *)StdVectorDword_at_00562388((void *)(*(int *)this + 0x60),local_c);
      uVar6 = *puVar10;
      local_8 = (void *)0x0;
      pvVar13 = (void *)(uVar6 & 0xff);
      iVar8 = extraout_EDX;
      local_18 = pvVar13;
      if (pvVar13 != (void *)0x0) {
        do {
          if (*(int *)((*(int *)((int)this + 0x40) - (int)local_8) * 0x10 + 4 +
                      *(int *)((int)this + 0x3c)) != -1) {
            LexerTraversalStack_removePage((void *)((int)this + 8),iVar8);
            iVar8 = extraout_EDX_00;
          }
          local_8 = (void *)((int)local_8 + 1);
        } while (local_8 < pvVar13);
      }
      *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + (1 - (int)pvVar13);
      uVar11 = uVar6 >> 8 & 0x3fffff;
      iVar8 = (int)*(short *)(*(int *)(*(int *)(*(int *)this + 0x58) +
                                      *(int *)(*(int *)((int)this + 0x40) * 0x10 + -0x10 +
                                              *(int *)((int)this + 0x3c)) * 4) + uVar11 * 2);
      *(undefined4 *)((int)this + 0x48) = 0;
      *(int *)((int)this + 0x44) = iVar8;
      *(uint *)((int)this + 0x58) = uVar11;
      if (local_18 == (void *)0x0) {
        pbVar7 = (byte *)CheckedVector_ushort_at_constB(iVar8);
        if ((*pbVar7 & 1) == 0) {
          *(undefined4 *)(*(int *)((int)this + 0x40) * 0x10 + 4 + *(int *)((int)this + 0x3c)) =
               0xffffffff;
        }
        else {
          iVar8 = SegmentedIterator1000_getAbsoluteIndex((void *)((int)this + 8));
          *(int *)(*(int *)((int)this + 0x40) * 0x10 + 4 + *(int *)((int)this + 0x3c)) = iVar8;
          LexerPagedSet_contains
                    ((void *)((int)this + 8),
                     *(int *)(*(int *)((int)this + 0x40) * 0x10 + 4 + *(int *)((int)this + 0x3c)));
        }
      }
      if ((uVar6 & 0x40000000) == 0) {
        uVar15 = (*(code *)**(undefined4 **)reductionCallback)(this,local_c);
        uVar11 = (uint)((ulonglong)uVar15 >> 0x20);
        if ((int)uVar15 == 0) goto LAB_005f7d61;
      }
      if (-1 < (int)uVar6) goto LAB_005f7879;
      local_8 = (void *)(*(int *)((int)this + 0x58) << 0x10 | local_c);
      CheckedTreeIterator_ctor(*(undefined4 *)(*(int *)this + 0x34),*(int *)this + 0x30);
      StdRbTreeInt_find((void *)(*(int *)this + 0x30),local_2c,&local_8,unaff_EDI);
      bVar4 = CheckedTreeIterator_equals(this_00,local_24);
      if (bVar4) goto LAB_005f7879;
      puVar10 = (uint *)IntDefaultMap_getOrInsert((void *)(*(int *)this + 0x30),(int *)&local_8);
      local_8 = (void *)(*puVar10 & 0xfffffff);
    }
    pvVar14 = local_8;
    pvVar13 = (void *)((int)this + 8);
    uVar6 = SegmentedIterator1000_getAbsoluteIndex(pvVar13);
    iVar8 = extraout_EDX_01;
    if ((*(uint *)((int)this + 0x4c) < uVar6) ||
       (iVar12 = BlockAllocator4096_getAllocationSpan(pvVar13,*(int *)((int)this + 0x60)),
       iVar8 = extraout_EDX_02, iVar12 == 0)) {
      if (*(int *)((int)this + 0x60) != -1) {
        LexerTraversalStack_removePage(pvVar13,iVar8);
      }
      iVar8 = SegmentedIterator1000_getAbsoluteIndex(pvVar13);
      *(int *)((int)this + 0x60) = iVar8 + -1;
      LexerPagedSet_contains(pvVar13,iVar8 + -1);
    }
    local_14 = *(int *)(*(int *)this + 0x48);
    local_c = 0;
    Std_fillDword(*(uint **)((int)this + 0x5c),0xffffffff,local_14);
    uVar11 = *(int *)((int)this + 0x40);
    local_10 = uVar11;
    if ((int)uVar11 < 0) {
LAB_005f7d61:
      LexerTraversalStack_resizeAlt(this,uVar11);
      return -2;
    }
    local_18 = (void *)(uVar11 << 4);
    do {
      iVar8 = *(int *)this;
      uVar2 = *(ushort *)
               (*(int *)(*(int *)(iVar8 + 0x4c) +
                        *(int *)((int)local_18 + *(int *)((int)this + 0x3c)) * 4) + (int)pvVar14 * 2
               );
      local_10 = uVar11;
      if ((uVar2 & 0xc000) != 0) {
        while (local_c = uVar11, (uVar2 & 0x4000) != 0) {
          local_1c = (uint)(short)(uVar2 & 0x3fff);
          puVar10 = (uint *)StdVectorDword_at_00562388((void *)(iVar8 + 0x60),local_1c);
          iVar12 = *(int *)this;
          local_c = local_c + (1 - (*puVar10 & 0xff));
          iVar3 = *(int *)(local_c * 0x10 + -0x10 + *(int *)((int)this + 0x3c));
          puVar10 = (uint *)StdVectorDword_at_00562388((void *)(iVar12 + 0x60),local_1c);
          iVar8 = *(int *)this;
          uVar11 = local_c;
          pvVar14 = local_8;
          uVar2 = *(ushort *)
                   (*(int *)(*(int *)(iVar8 + 0x4c) +
                            *(short *)(*(int *)(*(int *)(iVar12 + 0x58) + iVar3 * 4) +
                                      (*puVar10 >> 8 & 0x3fffff) * 2) * 4) + (int)local_8 * 2);
        }
        iVar8 = 0;
        local_c = 1;
        if (0 < local_14) {
          do {
            piVar1 = (int *)(*(int *)((int)this + 0x5c) + iVar8 * 4);
            if ((*piVar1 == -1) &&
               (pvVar14 = local_8,
               (*(ushort *)
                 (*(int *)(*(int *)(*(int *)this + 0x4c) + (short)(uVar2 & 0x3fff) * 4) + iVar8 * 2)
               & 0xc000) != 0)) {
              *piVar1 = local_10;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < local_14);
        }
      }
      uVar11 = local_10 + -1;
      local_18 = (void *)((int)local_18 - 0x10);
    } while (-1 < (int)uVar11);
    local_10 = uVar11;
    if (local_c == 0) goto LAB_005f7d61;
    puVar10 = (uint *)((int)this + 0x50);
    uVar6 = *puVar10;
    while (*(int *)(*(int *)((int)this + 0x5c) + uVar6 * 4) == -1) {
      if ((*puVar10 == 0) || (*puVar10 == 1)) goto LAB_005f7d61;
      uVar15 = (*(code *)**(undefined4 **)((int)this + 8))();
      uVar11 = (uint)((ulonglong)uVar15 >> 0x20);
      uVar6 = *(uint *)uVar15;
      *puVar10 = uVar6;
      *(short *)((int)this + 0x54) = (short)((uint *)uVar15)[1];
    }
    if ((*(ushort *)
          (*(int *)(*(int *)(*(int *)this + 0x4c) +
                   *(int *)(*(int *)((int)this + 0x40) * 0x10 + *(int *)((int)this + 0x3c)) * 4) +
          (int)pvVar14 * 2) & 0x4000) == 0) {
      LexerTraversalStack_resizeAlt(this,uVar11);
    }
    *puVar10 = (uint)pvVar14;
    iVar8 = SegmentedIterator1000_getAbsoluteIndex((void *)((int)this + 8));
    *(int *)((int)this + 0x4c) = iVar8;
    PagedArray_destroyIntSlot((void *)((int)this + 8),-1);
  } while( true );
}

