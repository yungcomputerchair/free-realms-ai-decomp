// addr: 0x006af684
// name: LrParserDriver_parseStringTokens
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int LrParserDriver_parseStringTokens(void * this, void * reductionCallback) */

int __thiscall LrParserDriver_parseStringTokens(void *this,void *reductionCallback)

{
  int *piVar1;
  undefined4 *it;
  ushort uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  void *pvVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  void *this_00;
  void *pvVar12;
  int *unaff_EDI;
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  uint local_1c;
  void *local_18;
  int local_14;
  int local_10;
  uint local_c;
  void *local_8;
  
LAB_006af68f:
  if (*(int *)((int)this + 0x44) == -1) {
    return -2;
  }
  *(undefined4 *)(*(int *)((int)this + 0x40) * 0x14 + *(int *)((int)this + 0x3c)) =
       *(undefined4 *)((int)this + 0x44);
  if (*(int *)((int)this + 0x48) != 0) {
    pvVar6 = (void *)(*(code *)**(undefined4 **)((int)this + 8))();
    StdPairString_copyFrom((void *)((int)this + 0x50),pvVar6,unaff_EDI);
  }
  do {
    piVar1 = (int *)((int)this + 0x50);
    uVar2 = *(ushort *)
             (*(int *)(*(int *)(*(int *)this + 0x4c) +
                      *(int *)(*(int *)((int)this + 0x40) * 0x14 + *(int *)((int)this + 0x3c)) * 4)
             + *piVar1 * 2);
    uVar7 = (uint)uVar2;
    if ((short)uVar2 < 0) {
      it = (undefined4 *)((int)this + 8);
      do {
        *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + 1;
        *(uint *)(*(int *)((int)this + 0x40) * 0x14 + *(int *)((int)this + 0x3c)) = uVar7 & 0x3fff;
        FUN_006a9c7e(piVar1,it);
        pbVar8 = (byte *)CheckedVector_ushort_at_constA(*piVar1);
        if ((*pbVar8 & 1) != 0) {
          if (*piVar1 == 0) {
            local_8 = *(void **)((int)this + 0x68);
          }
          else {
            local_8 = *(void **)(*(int *)((int)this + 0x40) * 0x14 + -0x10 +
                                *(int *)((int)this + 0x3c));
          }
          local_18 = (void *)SegmentedIterator2000_getAbsoluteIndex_A(it);
          uVar7 = BlockAllocator8192_getAllocationSpan(it,(int)local_8);
          LexerPagedRecordSet_selectPage2000(it,(int)local_8,uVar7);
          pbVar8 = (byte *)CheckedVector_ushort_at_constB
                                     (*(undefined4 *)
                                       (*(int *)((int)this + 0x40) * 0x14 +
                                       *(int *)((int)this + 0x3c)));
          if ((*pbVar8 & 2) == 0) {
            SegmentedIterator2000_seek(it,local_18,(uint)unaff_EDI);
          }
          else {
            LexerPagedRecordSet_selectPage2000
                      (it,*(int *)(*(int *)((int)this + 0x40) * 0x14 + -0x10 +
                                  *(int *)((int)this + 0x3c)),0xffffffff);
          }
          SegmentedIterator2000_setLimit(it,(void *)0xffffffff,(uint)unaff_EDI);
        }
        pbVar8 = (byte *)CheckedVector_ushort_at_constB
                                   (*(undefined4 *)
                                     (*(int *)((int)this + 0x40) * 0x14 + *(int *)((int)this + 0x3c)
                                     ));
        if ((*pbVar8 & 1) == 0) {
          *(undefined4 *)(*(int *)((int)this + 0x40) * 0x14 + 4 + *(int *)((int)this + 0x3c)) =
               0xffffffff;
        }
        else {
          iVar9 = SegmentedIterator2000_getAbsoluteIndex_A(it);
          *(int *)(*(int *)((int)this + 0x40) * 0x14 + 4 + *(int *)((int)this + 0x3c)) = iVar9;
          LexerPagedRecordSet_contains
                    (it,*(int *)(*(int *)((int)this + 0x40) * 0x14 + 4 + *(int *)((int)this + 0x3c))
                    );
        }
        pvVar6 = (void *)(**(code **)*it)();
        StdPairString_copyFrom(piVar1,pvVar6,unaff_EDI);
        uVar2 = *(ushort *)
                 (*(int *)(*(int *)(*(int *)this + 0x4c) +
                          *(int *)(*(int *)((int)this + 0x40) * 0x14 + *(int *)((int)this + 0x3c)) *
                          4) + *piVar1 * 2);
        uVar7 = (uint)uVar2;
      } while ((short)uVar2 < 0);
    }
    if ((uVar7 & 0x4000) == 0) {
      local_8 = (void *)0x0;
    }
    else {
      if ((short)uVar7 == 0x4fff) {
        return 0;
      }
      local_c = uVar7 & 0x3fff;
      puVar10 = (uint *)StdVectorDword_at_00562388((void *)(*(int *)this + 0x60),local_c);
      uVar7 = *puVar10;
      local_8 = (void *)0x0;
      pvVar6 = (void *)(uVar7 & 0xff);
      local_18 = pvVar6;
      if (pvVar6 != (void *)0x0) {
        do {
          iVar9 = *(int *)((*(int *)((int)this + 0x40) - (int)local_8) * 0x14 + 4 +
                          *(int *)((int)this + 0x3c));
          if (iVar9 != -1) {
            RbTree006a_insertUnique(iVar9);
          }
          local_8 = (void *)((int)local_8 + 1);
        } while (local_8 < pvVar6);
      }
      *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + (1 - (int)pvVar6);
      uVar11 = uVar7 >> 8 & 0x3fffff;
      iVar9 = (int)*(short *)(*(int *)(*(int *)(*(int *)this + 0x58) +
                                      *(int *)(*(int *)((int)this + 0x40) * 0x14 + -0x14 +
                                              *(int *)((int)this + 0x3c)) * 4) + uVar11 * 2);
      *(undefined4 *)((int)this + 0x48) = 0;
      *(int *)((int)this + 0x44) = iVar9;
      *(uint *)((int)this + 0x60) = uVar11;
      if (local_18 == (void *)0x0) {
        pbVar8 = (byte *)CheckedVector_ushort_at_constB(iVar9);
        if ((*pbVar8 & 1) == 0) {
          *(undefined4 *)(*(int *)((int)this + 0x40) * 0x14 + 4 + *(int *)((int)this + 0x3c)) =
               0xffffffff;
        }
        else {
          iVar9 = SegmentedIterator2000_getAbsoluteIndex_A((void *)((int)this + 8));
          *(int *)(*(int *)((int)this + 0x40) * 0x14 + 4 + *(int *)((int)this + 0x3c)) = iVar9;
          LexerPagedRecordSet_contains
                    ((void *)((int)this + 8),
                     *(int *)(*(int *)((int)this + 0x40) * 0x14 + 4 + *(int *)((int)this + 0x3c)));
        }
      }
      if (((uVar7 & 0x40000000) == 0) &&
         (iVar9 = (*(code *)**(undefined4 **)reductionCallback)(this,local_c), iVar9 == 0))
      goto LAB_006afb69;
      if (-1 < (int)uVar7) goto LAB_006af68f;
      local_8 = (void *)(*(int *)((int)this + 0x60) << 0x10 | local_c);
      CheckedTreeIterator_ctor(*(undefined4 *)(*(int *)this + 0x34),*(int *)this + 0x30);
      StdRbTreeInt_find((void *)(*(int *)this + 0x30),local_2c,&local_8,unaff_EDI);
      bVar5 = CheckedTreeIterator_equals(this_00,local_24);
      if (bVar5) goto LAB_006af68f;
      puVar10 = (uint *)IntDefaultMap_getOrInsert((void *)(*(int *)this + 0x30),(int *)&local_8);
      local_8 = (void *)(*puVar10 & 0xfffffff);
    }
    pvVar12 = local_8;
    pvVar6 = (void *)((int)this + 8);
    uVar7 = SegmentedIterator2000_getAbsoluteIndex_A(pvVar6);
    if ((*(uint *)((int)this + 0x4c) < uVar7) ||
       (iVar9 = BlockAllocator8192_getAllocationSpan(pvVar6,*(int *)((int)this + 0x68)), iVar9 == 0)
       ) {
      if (*(int *)((int)this + 0x68) != -1) {
        RbTree006a_insertUnique(*(int *)((int)this + 0x68));
      }
      iVar9 = SegmentedIterator2000_getAbsoluteIndex_A(pvVar6);
      *(int *)((int)this + 0x68) = iVar9 + -1;
      LexerPagedRecordSet_contains(pvVar6,iVar9 + -1);
    }
    local_14 = *(int *)(*(int *)this + 0x48);
    local_c = 0;
    Std_fillDword(*(uint **)((int)this + 100),0xffffffff,local_14);
    local_10 = *(int *)((int)this + 0x40);
    if (local_10 < 0) {
LAB_006afb69:
      LexerTraversalStack20_resize(this,0);
      return -2;
    }
    local_18 = (void *)(local_10 * 0x14);
    do {
      iVar9 = *(int *)this;
      uVar2 = *(ushort *)
               (*(int *)(*(int *)(iVar9 + 0x4c) +
                        *(int *)((int)local_18 + *(int *)((int)this + 0x3c)) * 4) + (int)pvVar12 * 2
               );
      uVar7 = local_10;
      if ((uVar2 & 0xc000) != 0) {
        while (local_c = uVar7, (uVar2 & 0x4000) != 0) {
          local_1c = (uint)(short)(uVar2 & 0x3fff);
          puVar10 = (uint *)StdVectorDword_at_00562388((void *)(iVar9 + 0x60),local_1c);
          iVar3 = *(int *)this;
          local_c = local_c + (1 - (*puVar10 & 0xff));
          iVar4 = *(int *)(local_c * 0x14 + -0x14 + *(int *)((int)this + 0x3c));
          puVar10 = (uint *)StdVectorDword_at_00562388((void *)(iVar3 + 0x60),local_1c);
          iVar9 = *(int *)this;
          uVar7 = local_c;
          pvVar12 = local_8;
          uVar2 = *(ushort *)
                   (*(int *)(*(int *)(iVar9 + 0x4c) +
                            *(short *)(*(int *)(*(int *)(iVar3 + 0x58) + iVar4 * 4) +
                                      (*puVar10 >> 8 & 0x3fffff) * 2) * 4) + (int)local_8 * 2);
        }
        iVar9 = 0;
        local_c = 1;
        if (0 < local_14) {
          do {
            piVar1 = (int *)(*(int *)((int)this + 100) + iVar9 * 4);
            if ((*piVar1 == -1) &&
               (pvVar12 = local_8,
               (*(ushort *)
                 (*(int *)(*(int *)(*(int *)this + 0x4c) + (short)(uVar2 & 0x3fff) * 4) + iVar9 * 2)
               & 0xc000) != 0)) {
              *piVar1 = local_10;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < local_14);
        }
      }
      local_10 = local_10 + -1;
      local_18 = (void *)((int)local_18 - 0x14);
    } while (-1 < local_10);
    if (local_c == 0) goto LAB_006afb69;
    puVar10 = (uint *)((int)this + 0x50);
    while (*(int *)(*(int *)((int)this + 100) + *puVar10 * 4) == -1) {
      if ((*puVar10 == 0) || (*puVar10 == 1)) goto LAB_006afb69;
      pvVar6 = (void *)(*(code *)**(undefined4 **)((int)this + 8))();
      StdPairString_copyFrom(puVar10,pvVar6,unaff_EDI);
    }
    if ((*(ushort *)
          (*(int *)(*(int *)(*(int *)this + 0x4c) +
                   *(int *)(*(int *)((int)this + 0x40) * 0x14 + *(int *)((int)this + 0x3c)) * 4) +
          (int)pvVar12 * 2) & 0x4000) == 0) {
      LexerTraversalStack20_resize(this,*(int *)(*(int *)((int)this + 100) + *puVar10 * 4));
    }
    *puVar10 = (uint)pvVar12;
    iVar9 = SegmentedIterator2000_getAbsoluteIndex_A((void *)((int)this + 8));
    *(int *)((int)this + 0x4c) = iVar9;
    PagedArray20_destroyIntSlot((void *)((int)this + 8),-1);
  } while( true );
}

