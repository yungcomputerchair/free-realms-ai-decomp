// addr: 0x012d98e0
// name: SortService_filterPointerVectorByCriteria
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool SortService_filterPointerVectorByCriteria(void * sourceVector, void *
   resultVector, void * criteriaVector) */

bool SortService_filterPointerVectorByCriteria
               (void *sourceVector,void *resultVector,void *criteriaVector)

{
  rsize_t _DstSize;
  undefined4 *puVar1;
  int *piVar2;
  void *pvVar3;
  void **ppvVar4;
  undefined4 *puVar5;
  void **position;
  void *_Dst;
  undefined4 *puVar6;
  char cVar7;
  void *sourceVector_00;
  int iVar8;
  undefined4 *puVar9;
  void *local_30 [2];
  undefined4 *local_28;
  undefined1 auStack_24 [8];
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copies the source pointer vector, then repeatedly filters it through
                       predicate criteria, replacing the working vector with each pass's matches.
                       Evidence is the PointerVector copy/assign calls and criterion vtable
                       predicate calls on each element. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01670d28;
  local_c = ExceptionList;
  sourceVector_00 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffbc);
  ExceptionList = &local_c;
  PointerVector_copyConstruct(local_1c,sourceVector,sourceVector_00);
  local_4 = 0;
  puVar9 = *(undefined4 **)((int)criteriaVector + 4);
  if ((puVar9 != (undefined4 *)0x0) &&
     (puVar1 = *(undefined4 **)((int)criteriaVector + 8), (int)puVar1 - (int)puVar9 >> 2 != 0)) {
    if (puVar1 < puVar9) {
      FUN_00d83c2d();
    }
    local_28 = *(undefined4 **)((int)criteriaVector + 4);
    if (*(undefined4 **)((int)criteriaVector + 8) < local_28) {
      FUN_00d83c2d();
    }
    while( true ) {
      puVar9 = local_28;
      if (criteriaVector == (void *)0x0) {
        FUN_00d83c2d();
      }
      if (puVar9 == puVar1) break;
      if (criteriaVector == (void *)0x0) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)((int)criteriaVector + 8) <= puVar9) {
        FUN_00d83c2d();
      }
      puVar6 = local_14;
      piVar2 = (int *)*puVar9;
      if (local_14 < local_18) {
        FUN_00d83c2d();
      }
      puVar9 = local_18;
      if (local_14 < local_18) {
        FUN_00d83c2d();
      }
      while( true ) {
        if (&stack0x00000000 == (undefined1 *)0x1c) {
          FUN_00d83c2d();
        }
        if (puVar9 == puVar6) break;
        if (&stack0x00000000 == (undefined1 *)0x1c) {
          FUN_00d83c2d();
        }
        if (local_14 <= puVar9) {
          FUN_00d83c2d();
        }
        pvVar3 = (void *)*puVar9;
        local_30[0] = pvVar3;
        cVar7 = (**(code **)(*piVar2 + 4))(pvVar3);
        if (cVar7 == '\x01') {
          ppvVar4 = *(void ***)((int)resultVector + 4);
          if ((ppvVar4 == (void **)0x0) ||
             ((uint)(*(int *)((int)resultVector + 0xc) - (int)ppvVar4 >> 2) <=
              (uint)(*(int *)((int)resultVector + 8) - (int)ppvVar4 >> 2))) {
            position = *(void ***)((int)resultVector + 8);
            if (position < ppvVar4) {
              FUN_00d83c2d();
            }
            PointerVector_insertOne(resultVector,auStack_24,resultVector,position,local_30);
          }
          else {
            puVar5 = *(undefined4 **)((int)resultVector + 8);
            *puVar5 = pvVar3;
            *(undefined4 **)((int)resultVector + 8) = puVar5 + 1;
          }
        }
        if (local_14 <= puVar9) {
          FUN_00d83c2d();
        }
        puVar9 = puVar9 + 1;
      }
      PointerVector_assign(local_1c,resultVector,sourceVector_00);
      pvVar3 = *(void **)((int)resultVector + 8);
      if (pvVar3 < *(void **)((int)resultVector + 4)) {
        FUN_00d83c2d();
      }
      _Dst = *(void **)((int)resultVector + 4);
      if (*(void **)((int)resultVector + 8) < _Dst) {
        FUN_00d83c2d();
      }
      if (_Dst != pvVar3) {
        iVar8 = *(int *)((int)resultVector + 8) - (int)pvVar3 >> 2;
        _DstSize = iVar8 * 4;
        if (0 < iVar8) {
          _memmove_s(_Dst,_DstSize,pvVar3,_DstSize);
        }
        *(void **)((int)resultVector + 8) = (void *)(_DstSize + (int)_Dst);
      }
      if (*(undefined4 **)((int)criteriaVector + 8) <= local_28) {
        FUN_00d83c2d();
      }
      local_28 = local_28 + 1;
    }
  }
  PointerVector_assign(resultVector,local_1c,sourceVector_00);
  local_4 = 0xffffffff;
  if (local_18 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
  ExceptionList = local_c;
  return true;
}

