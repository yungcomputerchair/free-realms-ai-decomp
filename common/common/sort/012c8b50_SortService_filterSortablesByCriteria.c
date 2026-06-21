// addr: 0x012c8b50
// name: SortService_filterSortablesByCriteria
// subsystem: common/common/sort
// source (binary assert): common/common/sort/SortService.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool SortService_filterSortablesByCriteria(void * sourceVector, void *
   resultVector, void * criteriaVector) */

bool SortService_filterSortablesByCriteria
               (void *sourceVector,void *resultVector,void *criteriaVector)

{
  rsize_t _DstSize;
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  void **ppvVar4;
  int *piVar5;
  void **position;
  void *_Dst;
  int *piVar6;
  char cVar7;
  void *sourceVector_00;
  int iVar8;
  int *piVar9;
  void *apvStack_30 [2];
  int *local_28;
  undefined1 auStack_24 [8];
  undefined1 local_1c [4];
  int *piStack_18;
  int *piStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copies the source sortable vector, then applies each criterion by appending
                       matching elements to the result and replacing the working vector with those
                       matches. Evidence is SortService.cpp criterion asserts, PointerVector
                       copy/assign calls, and criterion predicate calls. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166f098;
  local_c = ExceptionList;
  sourceVector_00 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffbc);
  ExceptionList = &local_c;
  PointerVector_copyConstruct(local_1c,sourceVector,sourceVector_00);
  local_4 = 0;
  piVar1 = *(int **)((int)criteriaVector + 4);
  if ((piVar1 != (int *)0x0) &&
     (piVar2 = *(int **)((int)criteriaVector + 8), (int)piVar2 - (int)piVar1 >> 2 != 0)) {
    if (piVar2 < piVar1) {
      FUN_00d83c2d();
    }
    local_28 = *(int **)((int)criteriaVector + 4);
    if (*(int **)((int)criteriaVector + 8) < local_28) {
      FUN_00d83c2d();
    }
    while( true ) {
      piVar1 = local_28;
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
        FUN_012f5a60("criterion","..\\common\\common\\sort\\SortService.cpp",99);
      }
      piVar6 = piStack_14;
      if (piStack_14 < piStack_18) {
        FUN_00d83c2d();
      }
      piVar9 = piStack_18;
      if (piStack_14 < piStack_18) {
        FUN_00d83c2d();
      }
      while( true ) {
        if (&stack0x00000000 == (undefined1 *)0x1c) {
          FUN_00d83c2d();
        }
        if (piVar9 == piVar6) break;
        if (&stack0x00000000 == (undefined1 *)0x1c) {
          FUN_00d83c2d();
        }
        if (piStack_14 <= piVar9) {
          FUN_00d83c2d();
        }
        pvVar3 = (void *)*piVar9;
        apvStack_30[0] = pvVar3;
        if (pvVar3 == (void *)0x0) {
          FUN_012f5a60(&DAT_018d49c8,"..\\common\\common\\sort\\SortService.cpp",0x68);
        }
        cVar7 = (**(code **)(*piVar1 + 4))(pvVar3);
        if (cVar7 == '\x01') {
          ppvVar4 = *(void ***)((int)resultVector + 4);
          if ((ppvVar4 == (void **)0x0) ||
             ((uint)(*(int *)((int)resultVector + 0xc) - (int)ppvVar4 >> 2) <=
              (uint)(*(int *)((int)resultVector + 8) - (int)ppvVar4 >> 2))) {
            position = *(void ***)((int)resultVector + 8);
            if (position < ppvVar4) {
              FUN_00d83c2d();
            }
            PointerVector_insertOne(resultVector,auStack_24,resultVector,position,apvStack_30);
          }
          else {
            piVar5 = *(int **)((int)resultVector + 8);
            *piVar5 = (int)pvVar3;
            *(int **)((int)resultVector + 8) = piVar5 + 1;
          }
        }
        if (piStack_14 <= piVar9) {
          FUN_00d83c2d();
        }
        piVar9 = piVar9 + 1;
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
      if (*(int **)((int)criteriaVector + 8) <= local_28) {
        FUN_00d83c2d();
      }
      local_28 = local_28 + 1;
    }
  }
  PointerVector_assign(resultVector,local_1c,sourceVector_00);
  local_4 = 0xffffffff;
  if (piStack_18 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(piStack_18);
  }
  ExceptionList = local_c;
  return true;
}

