// addr: 0x00dcc480
// name: FUN_00dcc480
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00dcc480(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
                    /* Copies a 3x4 matrix/transform, using a transposed layout when a global flag
                       is set and a straight 12-word copy otherwise. Exact math type is not proven.
                        */
  if (DAT_01bf3f20 != '\0') {
    *param_1 = *param_2;
    param_1[1] = param_2[4];
    param_1[2] = param_2[8];
    param_1[3] = param_2[0xc];
    param_1[4] = param_2[1];
    param_1[5] = param_2[5];
    param_1[6] = param_2[9];
    param_1[7] = param_2[0xd];
    param_1[8] = param_2[2];
    param_1[9] = param_2[6];
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xe];
    return;
  }
  iVar2 = 0xc;
  puVar1 = param_1;
  do {
    iVar2 = iVar2 + -1;
    *puVar1 = *(undefined4 *)(((int)param_2 - (int)param_1) + (int)puVar1);
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0);
  return;
}

