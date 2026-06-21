// addr: 0x01360960
// name: FUN_01360960
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int FUN_01360960(void) */

int FUN_01360960(void)

{
  undefined4 *puVar1;
  char cVar2;
  void **item;
  int iVar3;
  uint3 uVar4;
  undefined4 *puVar5;
  void *in_stack_00000010;
  void *in_stack_00000014;
  undefined1 local_1c [4];
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Iterates a vector-like stack argument, filters/keeps entries based on a
                       ValueData type check, assigns the temporary list back, and returns whether
                       the vector is non-empty. Exact owning method is unclear. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167ebe8;
  local_c = ExceptionList;
  item = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  ExceptionList = &local_c;
  cVar2 = FUN_013837b0();
  if (cVar2 == '\0') {
    local_18 = (void *)0x0;
    local_14 = 0;
    local_10 = 0;
    local_4 = 0;
    puVar1 = *(undefined4 **)((int)in_stack_00000010 + 8);
    if (puVar1 < *(undefined4 **)((int)in_stack_00000010 + 4)) {
      FUN_00d83c2d();
    }
    puVar5 = *(undefined4 **)((int)in_stack_00000010 + 4);
    if (*(undefined4 **)((int)in_stack_00000010 + 8) < puVar5) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (in_stack_00000010 == (void *)0x0) {
        FUN_00d83c2d();
      }
      if (puVar5 == puVar1) break;
      if (in_stack_00000010 == (void *)0x0) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)((int)in_stack_00000010 + 8) <= puVar5) {
        FUN_00d83c2d();
      }
      in_stack_00000014 = (void *)*puVar5;
      iVar3 = unknown_getField38(in_stack_00000014);
      if (iVar3 != 2) {
        PointerVector_pushBack(local_1c,&stack0x00000014,item);
      }
      if (*(undefined4 **)((int)in_stack_00000010 + 8) <= puVar5) {
        FUN_00d83c2d();
      }
      puVar5 = puVar5 + 1;
    }
    ValueDataList_assign(in_stack_00000010,local_1c);
    local_4 = 0xffffffff;
    if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
  }
  iVar3 = *(int *)((int)in_stack_00000010 + 4);
  uVar4 = (uint3)((uint)iVar3 >> 8);
  if ((iVar3 == 0) || (*(int *)((int)in_stack_00000010 + 8) - iVar3 >> 2 == 0)) {
    iVar3 = (uint)uVar4 << 8;
  }
  else {
    iVar3 = CONCAT31(uVar4,1);
  }
  ExceptionList = local_c;
  return iVar3;
}

