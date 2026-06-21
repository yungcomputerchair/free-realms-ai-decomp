// addr: 0x012d9b20
// name: SortService_filterUniquePointerVectorByCriteria
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool SortService_filterUniquePointerVectorByCriteria(void * sourceVector, void
   * resultVector, void * criteriaVector) */

bool SortService_filterUniquePointerVectorByCriteria
               (void *sourceVector,void *resultVector,void *criteriaVector)

{
  rsize_t _DstSize;
  undefined4 *puVar1;
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
  undefined4 *puVar10;
  void **ppvVar11;
  int *piVar12;
  void *local_44;
  undefined4 *local_40;
  int *piStack_38;
  undefined4 *local_30;
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [4];
  void **local_18;
  void **local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Applies each predicate criterion to a source pointer vector, appending
                       matches to the result and de-duplicating through a temporary pointer vector
                       between criteria. Evidence is criterion vtable predicate calls,
                       PointerVector_insertOne, and the contains-before-append temporary vector
                       pass. */
  puStack_8 = &LAB_01670d58;
  local_c = ExceptionList;
  sourceVector_00 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffa0);
  ExceptionList = &local_c;
  local_18 = (void **)0x0;
  local_14 = (void **)0x0;
  local_10 = 0;
  local_4 = 0;
  puVar1 = *(undefined4 **)((int)criteriaVector + 4);
  if ((puVar1 == (undefined4 *)0x0) ||
     (puVar10 = *(undefined4 **)((int)criteriaVector + 8), local_40 = puVar10,
     (int)puVar10 - (int)puVar1 >> 2 == 0)) {
    PointerVector_assign(resultVector,sourceVector,sourceVector_00);
  }
  else {
    if (puVar10 < puVar1) {
      FUN_00d83c2d();
    }
    local_30 = *(undefined4 **)((int)criteriaVector + 4);
    if (*(undefined4 **)((int)criteriaVector + 8) < local_30) {
      FUN_00d83c2d();
    }
    while( true ) {
      puVar1 = local_30;
      if (criteriaVector == (void *)0x0) {
        FUN_00d83c2d();
      }
      if (puVar1 == puVar10) break;
      if (criteriaVector == (void *)0x0) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)((int)criteriaVector + 8) <= puVar1) {
        FUN_00d83c2d();
      }
      piVar2 = *(int **)((int)sourceVector + 8);
      piVar3 = (int *)*puVar1;
      if (piVar2 < *(int **)((int)sourceVector + 4)) {
        FUN_00d83c2d();
      }
      piVar12 = *(int **)((int)sourceVector + 4);
      if (*(int **)((int)sourceVector + 8) < piVar12) {
        FUN_00d83c2d();
      }
      while( true ) {
        if (sourceVector == (void *)0x0) {
          FUN_00d83c2d();
        }
        if (piVar12 == piVar2) break;
        if (sourceVector == (void *)0x0) {
          FUN_00d83c2d();
        }
        if (*(int **)((int)sourceVector + 8) <= piVar12) {
          FUN_00d83c2d();
        }
        pvVar4 = (void *)*piVar12;
        local_44 = pvVar4;
        cVar6 = (**(code **)(*piVar3 + 4))(pvVar4);
        if (cVar6 == '\x01') {
          ppvVar8 = *(void ***)((int)resultVector + 4);
          if ((ppvVar8 == (void **)0x0) ||
             ((uint)(*(int *)((int)resultVector + 0xc) - (int)ppvVar8 >> 2) <=
              (uint)(*(int *)((int)resultVector + 8) - (int)ppvVar8 >> 2))) {
            ppvVar7 = *(void ***)((int)resultVector + 8);
            if (ppvVar7 < ppvVar8) {
              FUN_00d83c2d();
            }
            PointerVector_insertOne(resultVector,auStack_2c,resultVector,ppvVar7,&local_44);
          }
          else {
            piVar5 = *(int **)((int)resultVector + 8);
            *piVar5 = (int)pvVar4;
            *(int **)((int)resultVector + 8) = piVar5 + 1;
          }
        }
        if (*(int **)((int)sourceVector + 8) <= piVar12) {
          FUN_00d83c2d();
        }
        piVar12 = piVar12 + 1;
      }
      piVar2 = *(int **)((int)resultVector + 8);
      if (piVar2 < *(int **)((int)resultVector + 4)) {
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
        if (piVar3 == piVar2) break;
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
        local_44 = pvVar4;
        if (ppvVar8 < local_18) {
          FUN_00d83c2d();
          ppvVar7 = local_14;
        }
        ppvVar11 = local_18;
        if (ppvVar7 < local_18) {
          FUN_00d83c2d();
          ppvVar7 = local_14;
        }
        for (; (ppvVar11 != ppvVar8 && (*ppvVar11 != pvVar4)); ppvVar11 = ppvVar11 + 1) {
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
        if (ppvVar11 == ppvVar7) {
          if ((local_18 == (void **)0x0) ||
             ((uint)(local_10 - (int)local_18 >> 2) <= (uint)((int)ppvVar8 - (int)local_18 >> 2))) {
            if (ppvVar8 < local_18) {
              FUN_00d83c2d();
            }
            PointerVector_insertOne(auStack_1c,auStack_24,auStack_1c,ppvVar8,&local_44);
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
      if (*(undefined4 **)((int)criteriaVector + 8) <= local_30) {
        FUN_00d83c2d();
      }
      puVar10 = local_40;
      local_30 = local_30 + 1;
    }
    PointerVector_assign(resultVector,auStack_1c,sourceVector_00);
  }
  local_4 = 0xffffffff;
  if (local_18 == (void **)0x0) {
    ExceptionList = local_c;
    return true;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_18);
}

