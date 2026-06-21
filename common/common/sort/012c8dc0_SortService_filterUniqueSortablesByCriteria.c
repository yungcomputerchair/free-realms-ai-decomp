// addr: 0x012c8dc0
// name: SortService_filterUniqueSortablesByCriteria
// subsystem: common/common/sort
// source (binary assert): common/common/sort/SortService.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool SortService_filterUniqueSortablesByCriteria(void * sourceVector, void *
   resultVector, void * criteriaVector) */

bool SortService_filterUniqueSortablesByCriteria
               (void *sourceVector,void *resultVector,void *criteriaVector)

{
  rsize_t _DstSize;
  int *piVar1;
  int *piVar2;
  int *piVar3;
  void *pvVar4;
  int *piVar5;
  void *_Dst;
  char cVar6;
  void *sourceVector_00;
  void **ppvVar7;
  void **ppvVar8;
  int iVar9;
  void **ppvVar10;
  int *piVar11;
  void *apvStack_40 [2];
  int *piStack_38;
  int *local_30;
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [4];
  void **local_18;
  void **local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* For each criterion, scans the source vector, appends matching sortables to
                       the result vector, then de-duplicates the result through a temporary pointer
                       vector. Evidence is SortService.cpp criterion asserts and repeated criterion
                       vtable predicate calls on sortable pointers. */
  puStack_8 = &LAB_0166f0c8;
  local_c = ExceptionList;
  sourceVector_00 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffa0);
  ExceptionList = &local_c;
  local_18 = (void **)0x0;
  local_14 = (void **)0x0;
  local_10 = 0;
  local_4 = 0;
  piVar1 = *(int **)((int)criteriaVector + 4);
  if ((piVar1 != (int *)0x0) &&
     (piVar2 = *(int **)((int)criteriaVector + 8), (int)piVar2 - (int)piVar1 >> 2 != 0)) {
    if (piVar2 < piVar1) {
      FUN_00d83c2d();
    }
    local_30 = *(int **)((int)criteriaVector + 4);
    if (*(int **)((int)criteriaVector + 8) < local_30) {
      FUN_00d83c2d();
    }
    while( true ) {
      piVar1 = local_30;
      if (criteriaVector == (void *)0x0) {
        FUN_00d83c2d();
      }
      if (piVar1 == piVar2) break;
      if (criteriaVector == (void *)0x0) {
        FUN_00d83c2d();
      }
      if (*(int **)((int)criteriaVector + 8) <= piVar1) {
        FUN_00d83c2d();
      }
      piVar1 = (int *)*piVar1;
      if (piVar1 == (int *)0x0) {
        FUN_012f5a60("criterion","..\\common\\common\\sort\\SortService.cpp",0x8f);
      }
      piVar3 = *(int **)((int)sourceVector + 8);
      if (piVar3 < *(int **)((int)sourceVector + 4)) {
        FUN_00d83c2d();
      }
      piVar11 = *(int **)((int)sourceVector + 4);
      if (*(int **)((int)sourceVector + 8) < piVar11) {
        FUN_00d83c2d();
      }
      while( true ) {
        if (sourceVector == (void *)0x0) {
          FUN_00d83c2d();
        }
        if (piVar11 == piVar3) break;
        if (sourceVector == (void *)0x0) {
          FUN_00d83c2d();
        }
        if (*(int **)((int)sourceVector + 8) <= piVar11) {
          FUN_00d83c2d();
        }
        pvVar4 = (void *)*piVar11;
        apvStack_40[0] = pvVar4;
        if (pvVar4 == (void *)0x0) {
          FUN_012f5a60(&DAT_018d49c8,"..\\common\\common\\sort\\SortService.cpp",0x94);
        }
        cVar6 = (**(code **)(*piVar1 + 4))(pvVar4);
        if (cVar6 == '\x01') {
          ppvVar8 = *(void ***)((int)resultVector + 4);
          if ((ppvVar8 == (void **)0x0) ||
             ((uint)(*(int *)((int)resultVector + 0xc) - (int)ppvVar8 >> 2) <=
              (uint)(*(int *)((int)resultVector + 8) - (int)ppvVar8 >> 2))) {
            ppvVar7 = *(void ***)((int)resultVector + 8);
            if (ppvVar7 < ppvVar8) {
              FUN_00d83c2d();
            }
            PointerVector_insertOne(resultVector,auStack_2c,resultVector,ppvVar7,apvStack_40);
          }
          else {
            piVar5 = *(int **)((int)resultVector + 8);
            *piVar5 = (int)pvVar4;
            *(int **)((int)resultVector + 8) = piVar5 + 1;
          }
        }
        if (*(int **)((int)sourceVector + 8) <= piVar11) {
          FUN_00d83c2d();
        }
        piVar11 = piVar11 + 1;
      }
      piVar1 = *(int **)((int)resultVector + 8);
      if (piVar1 < *(int **)((int)resultVector + 4)) {
        FUN_00d83c2d();
      }
      piVar3 = *(int **)((int)resultVector + 4);
      ppvVar8 = local_14;
      if (*(int **)((int)resultVector + 8) < piVar3) {
        FUN_00d83c2d();
        ppvVar8 = local_14;
      }
      while( true ) {
        piStack_38 = piVar3;
        piVar3 = piStack_38;
        if (resultVector == (void *)0x0) {
          FUN_00d83c2d();
          ppvVar8 = local_14;
        }
        if (piVar3 == piVar1) break;
        if (resultVector == (void *)0x0) {
          FUN_00d83c2d();
          ppvVar8 = local_14;
        }
        if (*(int **)((int)resultVector + 8) <= piVar3) {
          FUN_00d83c2d();
          ppvVar8 = local_14;
        }
        pvVar4 = (void *)*piVar3;
        ppvVar7 = ppvVar8;
        apvStack_40[0] = pvVar4;
        if (ppvVar8 < local_18) {
          FUN_00d83c2d();
          ppvVar7 = local_14;
        }
        ppvVar10 = local_18;
        if (ppvVar7 < local_18) {
          FUN_00d83c2d();
          ppvVar7 = local_14;
        }
        for (; (ppvVar10 != ppvVar8 && (*ppvVar10 != pvVar4)); ppvVar10 = ppvVar10 + 1) {
        }
        ppvVar8 = ppvVar7;
        if (ppvVar7 < local_18) {
          FUN_00d83c2d();
          ppvVar8 = local_14;
        }
        if (&stack0x00000000 == (undefined1 *)0x1c) {
          FUN_00d83c2d();
          ppvVar8 = local_14;
        }
        if (ppvVar10 == ppvVar7) {
          if ((local_18 == (void **)0x0) ||
             ((uint)(local_10 - (int)local_18 >> 2) <= (uint)((int)ppvVar8 - (int)local_18 >> 2))) {
            if (ppvVar8 < local_18) {
              FUN_00d83c2d();
            }
            PointerVector_insertOne(auStack_1c,auStack_24,auStack_1c,ppvVar8,apvStack_40);
            ppvVar8 = local_14;
          }
          else {
            *ppvVar8 = pvVar4;
            local_14 = ppvVar8 + 1;
            ppvVar8 = local_14;
          }
        }
        if (*(int **)((int)resultVector + 8) <= piStack_38) {
          FUN_00d83c2d();
          ppvVar8 = local_14;
        }
        piVar3 = piStack_38 + 1;
      }
      pvVar4 = *(void **)((int)resultVector + 8);
      if (pvVar4 < *(void **)((int)resultVector + 4)) {
        FUN_00d83c2d();
      }
      _Dst = *(void **)((int)resultVector + 4);
      if (*(void **)((int)resultVector + 8) < _Dst) {
        FUN_00d83c2d();
      }
      if (_Dst != pvVar4) {
        iVar9 = *(int *)((int)resultVector + 8) - (int)pvVar4 >> 2;
        _DstSize = iVar9 * 4;
        if (0 < iVar9) {
          _memmove_s(_Dst,_DstSize,pvVar4,_DstSize);
        }
        *(void **)((int)resultVector + 8) = (void *)(_DstSize + (int)_Dst);
      }
      if (*(int **)((int)criteriaVector + 8) <= local_30) {
        FUN_00d83c2d();
      }
      local_30 = local_30 + 1;
    }
    sourceVector = auStack_1c;
  }
  PointerVector_assign(resultVector,sourceVector,sourceVector_00);
  local_4 = 0xffffffff;
  if (local_18 == (void **)0x0) {
    ExceptionList = local_c;
    return true;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_18);
}

