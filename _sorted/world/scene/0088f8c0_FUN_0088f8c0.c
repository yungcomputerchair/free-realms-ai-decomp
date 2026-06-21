// addr: 0x0088f8c0
// name: FUN_0088f8c0
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0088f8c0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float local_90 [4];
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50 [4];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
                    /* Composes the current visibility/Umbra transform with an input 4x4 matrix,
                       applies global scale/translation constants, submits the resulting matrix, and
                       links the object if it has a referenced target. */
  FUN_00dbf3a0();
  FUN_00dc0610(local_90);
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = param_2[4];
  local_50[0] = fVar1 * local_80 + fVar2 * local_90[0] + fVar3 * local_70 + fVar4 * local_60;
  local_50[1] = fVar1 * fStack_7c + fVar2 * local_90[1] + fVar3 * fStack_6c + fVar4 * fStack_5c;
  local_50[2] = fVar1 * fStack_78 + fVar2 * local_90[2] + fVar3 * fStack_68 + fVar4 * fStack_58;
  local_50[3] = fVar1 * fStack_74 + fVar2 * local_90[3] + fVar3 * fStack_64 + fVar4 * fStack_54;
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  fVar4 = param_2[8];
  local_40 = fVar1 * local_80 + fVar5 * local_90[0] + fVar2 * local_70 + fVar3 * local_60;
  fStack_3c = fVar1 * fStack_7c + fVar5 * local_90[1] + fVar2 * fStack_6c + fVar3 * fStack_5c;
  fStack_38 = fVar1 * fStack_78 + fVar5 * local_90[2] + fVar2 * fStack_68 + fVar3 * fStack_58;
  fStack_34 = fVar1 * fStack_74 + fVar5 * local_90[3] + fVar2 * fStack_64 + fVar3 * fStack_54;
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  fVar5 = param_2[0xc];
  local_30 = fVar1 * local_80 + fVar4 * local_90[0] + fVar2 * local_70 + fVar3 * local_60;
  fStack_2c = fVar1 * fStack_7c + fVar4 * local_90[1] + fVar2 * fStack_6c + fVar3 * fStack_5c;
  fStack_28 = fVar1 * fStack_78 + fVar4 * local_90[2] + fVar2 * fStack_68 + fVar3 * fStack_58;
  fStack_24 = fVar1 * fStack_74 + fVar4 * local_90[3] + fVar2 * fStack_64 + fVar3 * fStack_54;
  fVar1 = param_2[0xd];
  fVar2 = param_2[0xe];
  fVar3 = param_2[0xf];
  local_20 = fVar1 * local_80 + fVar5 * local_90[0] + fVar2 * local_70 + fVar3 * local_60;
  fStack_1c = fVar1 * fStack_7c + fVar5 * local_90[1] + fVar2 * fStack_6c + fVar3 * fStack_5c;
  fStack_18 = fVar1 * fStack_78 + fVar5 * local_90[2] + fVar2 * fStack_68 + fVar3 * fStack_58;
  fStack_14 = fVar1 * fStack_74 + fVar5 * local_90[3] + fVar2 * fStack_64 + fVar3 * fStack_54;
  pfVar7 = local_50;
  pfVar8 = local_90;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar8 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    pfVar8 = pfVar8 + 1;
  }
  local_90[0] = local_90[0] * _DAT_01cb54a0;
  local_90[1] = local_90[1] * fRam01cb54a4;
  local_90[2] = local_90[2] * fRam01cb54a8;
  local_90[3] = local_90[3] * fRam01cb54ac;
  local_80 = local_80 * _DAT_01cb54a0;
  fStack_7c = fStack_7c * fRam01cb54a4;
  fStack_78 = fStack_78 * fRam01cb54a8;
  fStack_74 = fStack_74 * fRam01cb54ac;
  local_70 = local_70 * _DAT_01cb54a0;
  fStack_6c = fStack_6c * fRam01cb54a4;
  fStack_68 = fStack_68 * fRam01cb54a8;
  fStack_64 = fStack_64 * fRam01cb54ac;
  local_60 = local_60 * _DAT_01cb54a0 + _DAT_01cb54f0;
  fStack_5c = fStack_5c * fRam01cb54a4 + fRam01cb54f4;
  fStack_58 = fStack_58 * fRam01cb54a8 + fRam01cb54f8;
  fStack_54 = fStack_54 * fRam01cb54ac + fRam01cb54fc;
  FUN_00dc0750(local_90);
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_0088cc00(param_1);
  }
  return;
}

