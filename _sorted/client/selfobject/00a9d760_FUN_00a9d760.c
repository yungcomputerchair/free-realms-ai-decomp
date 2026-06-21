// addr: 0x00a9d760
// name: FUN_00a9d760
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00a9d760(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Clears and deserializes a counted linked list of unknown 0x1c-byte records
                       using the fixed five-dword parser at 00a9b480. No class evidence is present.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015c0dab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00a9bc20(DAT_01b839d8 ^ (uint)&stack0xffffffdc);
  piVar1 = *(int **)(param_1 + 8) + 1;
  if (*(int **)(param_1 + 0xc) < piVar1) {
    iVar3 = 0;
    *(undefined1 *)(param_1 + 0x10) = 1;
    *(int **)(param_1 + 8) = *(int **)(param_1 + 0xc);
  }
  else {
    iVar3 = **(int **)(param_1 + 8);
    *(int **)(param_1 + 8) = piVar1;
  }
  local_14 = 0;
  if (0 < iVar3) {
    do {
      if (*(char *)(param_1 + 0x10) != '\0') {
        ExceptionList = local_c;
        return;
      }
      puVar2 = Mem_Alloc(0x1c);
      puVar4 = (undefined4 *)0x0;
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar4 = puVar2;
      }
      local_4 = 0xffffffff;
      FUN_00a9b480(param_1);
      *puVar4 = param_2[1];
      if (param_2[1] == 0) {
        *param_2 = puVar4;
      }
      else {
        *(undefined4 **)(param_2[1] + 4) = puVar4;
      }
      param_2[2] = param_2[2] + 1;
      local_14 = local_14 + 1;
      param_2[1] = puVar4;
    } while (local_14 < iVar3);
  }
  ExceptionList = local_c;
  return;
}

