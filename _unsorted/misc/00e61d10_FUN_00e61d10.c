// addr: 0x00e61d10
// name: FUN_00e61d10
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00e61d10(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(*(int *)(param_1 + 4) + 0x14) == 0)) {
    FUN_00e61b80();
  }
  puVar1 = *(undefined4 **)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = puVar1[5];
  *puVar1 = *param_2;
  puVar1[1] = *param_3;
  puVar1[2] = param_3[1];
  puVar1[3] = param_3[2];
  puVar1[4] = param_3[3];
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}

