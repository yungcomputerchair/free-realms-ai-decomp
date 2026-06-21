// addr: 0x01520090
// name: CommandArchive_appendEntry
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandArchive_appendEntry(void * this, undefined4) */

void __thiscall CommandArchive_appendEntry(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 *puVar6;
  void *pvVar7;
  void *value;
  int *piVar8;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int *in_stack_00000030;
  int *in_stack_00000034;
  int in_stack_0000003c;
  int in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes a command archive record, appends a range of integer ids into an
                       internal vector, then appends two trailing integer fields to two other
                       vectors. The name is inferred from nearby CommandArchive serialization and
                       vector-insert behavior. */
  puStack_8 = &LAB_016b85d8;
  local_c = ExceptionList;
  value = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffd0);
  ExceptionList = &local_c;
  local_4 = 0;
  EventCommand_ResponseTable_appendRow
            (this,param_1,in_stack_00000008,in_stack_0000000c,in_stack_00000010,in_stack_00000014,
             in_stack_00000018,in_stack_0000001c,in_stack_00000020,in_stack_00000024,
             in_stack_00000028,in_stack_0000003c,in_stack_00000040);
  piVar8 = in_stack_00000030;
  if (in_stack_00000034 < in_stack_00000030) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (in_stack_00000034 < in_stack_00000030) {
      FUN_00d83c2d();
    }
    if (piVar8 == in_stack_00000034) break;
    if (in_stack_00000034 <= piVar8) {
      FUN_00d83c2d();
    }
    uVar1 = *(uint *)((int)this + 0xb4);
    in_stack_00000040 = *piVar8;
    if (uVar1 < *(uint *)((int)this + 0xb0)) {
      FUN_00d83c2d();
    }
    if ((*(uint *)((int)this + 0xb4) < uVar1 - 0x10) || (uVar1 - 0x10 < *(uint *)((int)this + 0xb0))
       ) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)this + 0xb4) <= uVar1 - 0x10) {
      FUN_00d83c2d();
    }
    uVar2 = *(uint *)(uVar1 - 0xc);
    if ((uVar2 == 0) ||
       ((uint)((int)(*(int *)(uVar1 - 4) - uVar2) >> 2) <=
        (uint)((int)(*(int *)(uVar1 - 8) - uVar2) >> 2))) {
      uVar4 = *(uint *)(uVar1 - 8);
      if (uVar4 < uVar2) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(local_14,uVar1 - 0x10,uVar4,&stack0x00000040);
    }
    else {
      piVar3 = *(int **)(uVar1 - 8);
      *piVar3 = in_stack_00000040;
      *(int **)(uVar1 - 8) = piVar3 + 1;
    }
    if (in_stack_00000034 <= piVar8) {
      FUN_00d83c2d();
    }
    piVar8 = piVar8 + 1;
  }
  pvVar5 = *(void **)((int)this + 0xe0);
  in_stack_00000040 = in_stack_00000044;
  if ((pvVar5 == (void *)0x0) ||
     ((uint)(*(int *)((int)this + 0xe8) - (int)pvVar5 >> 2) <=
      (uint)(*(int *)((int)this + 0xe4) - (int)pvVar5 >> 2))) {
    pvVar7 = *(void **)((int)this + 0xe4);
    if (pvVar7 < pvVar5) {
      FUN_00d83c2d();
    }
    Vector_insertSingleAndReturnIterator
              ((void *)((int)this + 0xdc),local_14,(void *)((int)this + 0xdc),pvVar7,
               &stack0x00000040,value);
  }
  else {
    puVar6 = *(undefined4 **)((int)this + 0xe4);
    *puVar6 = in_stack_00000044;
    *(undefined4 **)((int)this + 0xe4) = puVar6 + 1;
  }
  pvVar5 = *(void **)((int)this + 0xf0);
  in_stack_00000040 = in_stack_00000048;
  if ((pvVar5 == (void *)0x0) ||
     ((uint)(*(int *)((int)this + 0xf8) - (int)pvVar5 >> 2) <=
      (uint)(*(int *)((int)this + 0xf4) - (int)pvVar5 >> 2))) {
    pvVar7 = *(void **)((int)this + 0xf4);
    if (pvVar7 < pvVar5) {
      FUN_00d83c2d();
    }
    Vector_insertSingleAndReturnIterator
              ((void *)((int)this + 0xec),local_14,(void *)((int)this + 0xec),pvVar7,
               &stack0x00000040,value);
  }
  else {
    puVar6 = *(undefined4 **)((int)this + 0xf4);
    *puVar6 = in_stack_00000048;
    *(undefined4 **)((int)this + 0xf4) = puVar6 + 1;
  }
  local_4 = 0xffffffff;
  if (in_stack_00000030 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000030);
  }
  ExceptionList = local_c;
  return;
}

