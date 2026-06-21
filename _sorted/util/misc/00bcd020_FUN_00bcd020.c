// addr: 0x00bcd020
// name: FUN_00bcd020
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall FUN_00bcd020(int param_1)

{
  uint uVar1;
  int *piVar2;
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory helper that allocates a 0xa8-byte object via FUN_00bcb630 and
                       inserts/returns it through a collection helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015ed56b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  piVar2 = *(int **)(param_1 + 0x21ac8);
  local_10 = 0xa001bea8;
  do {
    if (piVar2 == (int *)0x0) {
LAB_00bcd082:
      local_14 = Mem_Alloc(0xa8);
      local_4 = 0;
      if (local_14 == (void *)0x0) {
        local_14 = (void *)0x0;
      }
      else {
        local_14 = (void *)ClientRequirementCheckCountry_PoolWrapper_ctor(uVar1);
      }
      local_4 = 0xffffffff;
      piVar2 = (int *)FUN_00bc0dc0(&local_10,&local_14);
LAB_00bcd0c7:
      ExceptionList = local_c;
      return *piVar2;
    }
    if (*piVar2 == -0x5ffe4158) {
      piVar2 = piVar2 + 1;
      if (piVar2 != (int *)0x0) goto LAB_00bcd0c7;
      goto LAB_00bcd082;
    }
    piVar2 = (int *)piVar2[2];
  } while( true );
}

