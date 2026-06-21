// addr: 0x0080a350
// name: SkyDefinition_sampleVector4Curve
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SkyDefinition_sampleVector4Curve(int param_1,undefined4 *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float fVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float fVar10;
  
                    /* Samples a wrapped float-keyed curve into a 4-float/vector value,
                       interpolating between neighboring keys. */
  CRT_floor((double)(param_3 * _DAT_017ed854));
  iVar7 = FUN_00d83c90();
  param_3 = param_3 - (float)iVar7 * DAT_017ed850;
  puVar8 = (undefined4 *)FloatKeyTree_findFloorOrEqual();
  fVar5 = DAT_017ed850;
  if (puVar8 == (undefined4 *)0x0) {
    puVar9 = *(undefined4 **)(param_1 + 4);
    while (puVar4 = puVar9, puVar4 != (undefined4 *)0x0) {
      puVar8 = puVar4;
      puVar9 = (undefined4 *)puVar4[7];
    }
  }
  puVar9 = (undefined4 *)puVar8[7];
  fVar1 = (float)puVar8[4];
  if (puVar9 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)puVar8[5];
    puVar4 = puVar8;
    while ((puVar9 = puVar6, puVar9 != (undefined4 *)0x0 && ((undefined4 *)puVar9[7] == puVar4))) {
      puVar4 = puVar9;
      puVar6 = (undefined4 *)puVar9[5];
    }
  }
  else {
    for (puVar4 = (undefined4 *)puVar9[6]; puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[6]) {
      puVar9 = puVar4;
    }
  }
  if (puVar9 == (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_1 + 4);
    while (puVar6 = puVar4, puVar6 != (undefined4 *)0x0) {
      puVar9 = puVar6;
      puVar4 = (undefined4 *)puVar6[6];
    }
  }
  fVar2 = (float)puVar9[4];
  fVar10 = (float)(param_3 < fVar1) * DAT_017ed850;
  *param_2 = *puVar8;
  param_2[1] = puVar8[1];
  uVar3 = puVar8[3];
  param_2[2] = puVar8[2];
  param_2[3] = uVar3;
  param_2[4] = *puVar9;
  param_2[5] = puVar9[1];
  uVar3 = puVar9[3];
  param_2[6] = puVar9[2];
  param_2[7] = uVar3;
  param_2[8] = ((fVar10 + param_3) - fVar1) / (((float)(fVar2 <= fVar1) * fVar5 + fVar2) - fVar1);
  return;
}

