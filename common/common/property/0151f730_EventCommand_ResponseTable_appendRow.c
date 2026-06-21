// addr: 0x0151f730
// name: EventCommand_ResponseTable_appendRow
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint EventCommand_ResponseTable_appendRow(void * this, int a1, int a2, int a3,
   int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9) */

uint __thiscall
EventCommand_ResponseTable_appendRow
          (void *this,int a1,int a2,int a3,int c1,int c2,int c3,int c4,int c5,int c6,int c7,int c8,
          int c9)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int *piVar4;
  void *element;
  uint uVar5;
  uint uVar6;
  undefined4 local_34;
  undefined1 local_30 [8];
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* Ensures two index vectors are as large as the row vector, then appends one
                       row worth of values across many parallel vectors and returns success only if
                       the vector sizes match. */
  local_c = 0xffffffff;
  puStack_10 = &LAB_016b8578;
  local_14 = ExceptionList;
  element = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffb8);
  ExceptionList = &local_14;
  while( true ) {
    if (*(int *)((int)this + 0xf0) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)((int)this + 0xf4) - *(int *)((int)this + 0xf0) >> 2;
    }
    if ((*(int *)((int)this + 0x10) == 0) ||
       ((uint)((*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10)) / 0x1c) <= uVar6)) break;
    pvVar1 = *(void **)((int)this + 0xf0);
    local_34 = 0;
    if ((pvVar1 == (void *)0x0) ||
       ((uint)(*(int *)((int)this + 0xf8) - (int)pvVar1 >> 2) <=
        (uint)(*(int *)((int)this + 0xf4) - (int)pvVar1 >> 2))) {
      pvVar3 = *(void **)((int)this + 0xf4);
      if (pvVar3 < pvVar1) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator
                ((void *)((int)this + 0xec),local_30,(void *)((int)this + 0xec),pvVar3,&local_34,
                 element);
    }
    else {
      puVar2 = *(undefined4 **)((int)this + 0xf4);
      *puVar2 = 0;
      *(undefined4 **)((int)this + 0xf4) = puVar2 + 1;
    }
  }
  while( true ) {
    if (*(int *)((int)this + 0xe0) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)((int)this + 0xe4) - *(int *)((int)this + 0xe0) >> 2;
    }
    if ((*(int *)((int)this + 0x10) == 0) ||
       ((uint)((*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10)) / 0x1c) <= uVar6)) break;
    pvVar1 = *(void **)((int)this + 0xe0);
    local_34 = 0;
    if ((pvVar1 == (void *)0x0) ||
       ((uint)(*(int *)((int)this + 0xe8) - (int)pvVar1 >> 2) <=
        (uint)(*(int *)((int)this + 0xe4) - (int)pvVar1 >> 2))) {
      pvVar3 = *(void **)((int)this + 0xe4);
      if (pvVar3 < pvVar1) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator
                ((void *)((int)this + 0xdc),local_30,(void *)((int)this + 0xdc),pvVar3,&local_34,
                 element);
    }
    else {
      puVar2 = *(undefined4 **)((int)this + 0xe4);
      *puVar2 = 0;
      *(undefined4 **)((int)this + 0xe4) = puVar2 + 1;
    }
  }
  if (*(int *)((int)this + 0xe0) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(int *)((int)this + 0xe4) - *(int *)((int)this + 0xe0) >> 2;
  }
  uVar5 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar5 = (*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10)) / 0x1c;
  }
  if (uVar6 == uVar5) {
    if (*(int *)((int)this + 0xf0) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)((int)this + 0xf4) - *(int *)((int)this + 0xf0) >> 2;
    }
    uVar5 = 0;
    if (*(int *)((int)this + 0x10) != 0) {
      uVar5 = (*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10)) / 0x1c;
    }
    if (uVar6 == uVar5) {
      StdVector28_pushBack((void *)((int)this + 0xc),(void *)a1,element);
      StdVector28_pushBack((void *)((int)this + 0x1c),(void *)a2,element);
      StdVector28_pushBack((void *)((int)this + 0x2c),(void *)a3,element);
      uVar6 = *(uint *)((int)this + 0x40);
      if ((uVar6 == 0) ||
         ((uint)((int)(*(int *)((int)this + 0x48) - uVar6) >> 2) <=
          (uint)((int)(*(int *)((int)this + 0x44) - uVar6) >> 2))) {
        uVar5 = *(uint *)((int)this + 0x44);
        if (uVar5 < uVar6) {
          FUN_00d83c2d();
        }
        Vector_insertSingleAndReturnIterator_realloc(local_30,(int)this + 0x3c,uVar5,&c1);
      }
      else {
        piVar4 = *(int **)((int)this + 0x44);
        *piVar4 = c1;
        *(int **)((int)this + 0x44) = piVar4 + 1;
      }
      uVar6 = *(uint *)((int)this + 0x50);
      if ((uVar6 == 0) ||
         ((uint)((int)(*(int *)((int)this + 0x58) - uVar6) >> 2) <=
          (uint)((int)(*(int *)((int)this + 0x54) - uVar6) >> 2))) {
        uVar5 = *(uint *)((int)this + 0x54);
        if (uVar5 < uVar6) {
          FUN_00d83c2d();
        }
        Vector_insertSingleAndReturnIterator_realloc(local_30,(int)this + 0x4c,uVar5,&c2);
      }
      else {
        piVar4 = *(int **)((int)this + 0x54);
        *piVar4 = c2;
        *(int **)((int)this + 0x54) = piVar4 + 1;
      }
      uVar6 = *(uint *)((int)this + 0x60);
      if ((uVar6 == 0) ||
         ((uint)((int)(*(int *)((int)this + 0x68) - uVar6) >> 2) <=
          (uint)((int)(*(int *)((int)this + 100) - uVar6) >> 2))) {
        uVar5 = *(uint *)((int)this + 100);
        if (uVar5 < uVar6) {
          FUN_00d83c2d();
        }
        Vector_insertSingleAndReturnIterator_realloc(local_30,(int)this + 0x5c,uVar5,&c3);
      }
      else {
        piVar4 = *(int **)((int)this + 100);
        *piVar4 = c3;
        *(int **)((int)this + 100) = piVar4 + 1;
      }
      uVar6 = *(uint *)((int)this + 0x70);
      if ((uVar6 == 0) ||
         ((uint)((int)(*(int *)((int)this + 0x78) - uVar6) >> 2) <=
          (uint)((int)(*(int *)((int)this + 0x74) - uVar6) >> 2))) {
        uVar5 = *(uint *)((int)this + 0x74);
        if (uVar5 < uVar6) {
          FUN_00d83c2d();
        }
        Vector_insertSingleAndReturnIterator_realloc(local_30,(int)this + 0x6c,uVar5,&c4);
      }
      else {
        piVar4 = *(int **)((int)this + 0x74);
        *piVar4 = c4;
        *(int **)((int)this + 0x74) = piVar4 + 1;
      }
      uVar6 = *(uint *)((int)this + 0x80);
      if ((uVar6 == 0) ||
         ((uint)((int)(*(int *)((int)this + 0x88) - uVar6) >> 2) <=
          (uint)((int)(*(int *)((int)this + 0x84) - uVar6) >> 2))) {
        uVar5 = *(uint *)((int)this + 0x84);
        if (uVar5 < uVar6) {
          FUN_00d83c2d();
        }
        Vector_insertSingleAndReturnIterator_realloc(local_30,(int)this + 0x7c,uVar5,&c5);
      }
      else {
        piVar4 = *(int **)((int)this + 0x84);
        *piVar4 = c5;
        *(int **)((int)this + 0x84) = piVar4 + 1;
      }
      uVar6 = *(uint *)((int)this + 0x90);
      if ((uVar6 == 0) ||
         ((uint)((int)(*(int *)((int)this + 0x98) - uVar6) >> 2) <=
          (uint)((int)(*(int *)((int)this + 0x94) - uVar6) >> 2))) {
        uVar5 = *(uint *)((int)this + 0x94);
        if (uVar5 < uVar6) {
          FUN_00d83c2d();
        }
        Vector_insertSingleAndReturnIterator_realloc(local_30,(int)this + 0x8c,uVar5,&c6);
      }
      else {
        piVar4 = *(int **)((int)this + 0x94);
        *piVar4 = c6;
        *(int **)((int)this + 0x94) = piVar4 + 1;
      }
      uVar6 = *(uint *)((int)this + 0xa0);
      if ((uVar6 == 0) ||
         ((uint)((int)(*(int *)((int)this + 0xa8) - uVar6) >> 2) <=
          (uint)((int)(*(int *)((int)this + 0xa4) - uVar6) >> 2))) {
        uVar5 = *(uint *)((int)this + 0xa4);
        if (uVar5 < uVar6) {
          FUN_00d83c2d();
        }
        Vector_insertSingleAndReturnIterator_realloc(local_30,(int)this + 0x9c,uVar5,&c7);
      }
      else {
        piVar4 = *(int **)((int)this + 0xa4);
        *piVar4 = c7;
        *(int **)((int)this + 0xa4) = piVar4 + 1;
      }
      local_24 = (void *)0x0;
      local_20 = 0;
      local_1c = 0;
      local_c = 0;
      FUN_0151f6a0(local_28);
      uVar6 = *(uint *)((int)this + 0xc0);
      if ((uVar6 == 0) ||
         ((uint)((int)(*(int *)((int)this + 200) - uVar6) >> 2) <=
          (uint)((int)(*(int *)((int)this + 0xc4) - uVar6) >> 2))) {
        uVar5 = *(uint *)((int)this + 0xc4);
        if (uVar5 < uVar6) {
          FUN_00d83c2d();
        }
        Vector_insertSingleAndReturnIterator_realloc(local_30,(int)this + 0xbc,uVar5,&c8);
      }
      else {
        piVar4 = *(int **)((int)this + 0xc4);
        *piVar4 = c8;
        *(int **)((int)this + 0xc4) = piVar4 + 1;
      }
      uVar6 = *(uint *)((int)this + 0xd0);
      if ((uVar6 == 0) ||
         ((uint)((int)(*(int *)((int)this + 0xd8) - uVar6) >> 2) <=
          (uint)((int)(*(int *)((int)this + 0xd4) - uVar6) >> 2))) {
        uVar5 = *(uint *)((int)this + 0xd4);
        if (uVar5 < uVar6) {
          FUN_00d83c2d();
        }
        Vector_insertSingleAndReturnIterator_realloc(local_30,(int)this + 0xcc,uVar5,&c9);
      }
      else {
        piVar4 = *(int **)((int)this + 0xd4);
        *piVar4 = c9;
        *(int **)((int)this + 0xd4) = piVar4 + 1;
      }
      local_c = 0xffffffff;
      if (local_24 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_24);
      }
      ExceptionList = local_14;
      return 1;
    }
  }
  ExceptionList = local_14;
  return uVar5 & 0xffffff00;
}

