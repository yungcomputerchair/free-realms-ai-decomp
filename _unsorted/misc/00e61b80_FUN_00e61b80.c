// addr: 0x00e61b80
// name: FUN_00e61b80
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00e61b80(int *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    pvVar3 = _malloc(0x1c0c);
    *param_1 = (int)pvVar3;
    if (pvVar3 != (void *)0x0) {
      FUN_00e619c0((int)pvVar3 + 0xc,0x100);
    }
    param_1[1] = *(int *)*param_1;
    return;
  }
  iVar2 = *(int *)(iVar1 + 8);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar1 + 8);
    iVar2 = *(int *)(iVar1 + 8);
  }
  puVar4 = _malloc(0x1c0c);
  *(undefined4 **)(iVar1 + 8) = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    FUN_00e619c0(puVar4 + 3,0x100);
  }
  *(undefined4 *)(param_1[1] + 0x14) = *puVar4;
  return;
}

