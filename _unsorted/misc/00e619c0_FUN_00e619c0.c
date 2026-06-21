// addr: 0x00e619c0
// name: FUN_00e619c0
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00e619c0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_2 + 0xc);
    do {
      if (puVar2 != (undefined4 *)&DAT_0000000c) {
        puVar2[-3] = 0;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
      }
      if (0 < iVar1) {
        puVar2[3] = puVar2 + -10;
        puVar2[-5] = puVar2 + -3;
      }
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 7;
    } while (iVar1 < param_1[1]);
  }
  return;
}

