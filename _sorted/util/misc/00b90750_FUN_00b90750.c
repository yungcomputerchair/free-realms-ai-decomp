// addr: 0x00b90750
// name: FUN_00b90750
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00b90750(int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *record;
  int extraout_EAX;
  uint uVar3;
  int iVar4;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes or dispatches a script/task object, allocating a 0x3c-byte helper
                       when needed and invoking callbacks based on state. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015e2b9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00b8fca0(DAT_01b839d8 ^ (uint)&stack0xffffffd8);
  piVar1 = *(int **)(param_1 + 8) + 1;
  if (*(int **)(param_1 + 0xc) < piVar1) {
    local_18 = 0;
    *(undefined1 *)(param_1 + 0x10) = 1;
    *(int **)(param_1 + 8) = *(int **)(param_1 + 0xc);
  }
  else {
    local_18 = **(int **)(param_1 + 8);
    *(int **)(param_1 + 8) = piVar1;
  }
  local_14 = 0;
  if (0 < local_18) {
    do {
      if (*(char *)(param_1 + 0x10) != '\0') {
        ExceptionList = local_c;
        return;
      }
      puVar2 = *(uint **)(param_1 + 8) + 1;
      if (*(uint **)(param_1 + 0xc) < puVar2) {
        uVar3 = 0;
        *(undefined1 *)(param_1 + 0x10) = 1;
        *(uint **)(param_1 + 8) = *(uint **)(param_1 + 0xc);
      }
      else {
        uVar3 = **(uint **)(param_1 + 8);
        *(uint **)(param_1 + 8) = puVar2;
      }
      record = Mem_Alloc(0x3c);
      iVar4 = 0;
      local_4 = 0;
      if (record != (undefined4 *)0x0) {
        zero_misc_record(record);
        iVar4 = extraout_EAX;
      }
      local_4 = 0xffffffff;
      FUN_00b8f090(param_1);
      *(undefined4 *)(iVar4 + 0x34) = *(undefined4 *)(param_2 + 8);
      if (*(int *)(param_2 + 8) == 0) {
        *(int *)(param_2 + 4) = iVar4;
      }
      else {
        *(int *)(*(int *)(param_2 + 8) + 0x38) = iVar4;
      }
      *(int *)(param_2 + 8) = iVar4;
      *(uint *)(iVar4 + 0x30) = uVar3;
      *(undefined4 *)(iVar4 + 0x2c) = *(undefined4 *)(param_2 + 0x10 + (uVar3 % 1000) * 4);
      *(int *)(param_2 + 0x10 + (uVar3 % 1000) * 4) = iVar4;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
      local_14 = local_14 + 1;
    } while (local_14 < local_18);
  }
  ExceptionList = local_c;
  return;
}

