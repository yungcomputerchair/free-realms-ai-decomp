// addr: 0x00ff6400
// name: FUN_00ff6400
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00ff6400(int param_1,int param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  *(undefined1 *)(param_2 + 0x60) = 0;
  iVar4 = *(int *)(param_1 + 0x6c);
  local_50 = *(float *)(iVar4 + 0x10);
  local_4c = *(float *)(iVar4 + 0x14);
  local_48 = *(float *)(iVar4 + 0x18);
  local_44 = *(undefined4 *)(iVar4 + 0x1c);
  local_40 = *(float *)(iVar4 + 0x20);
  local_3c = *(float *)(iVar4 + 0x24);
  local_38 = *(float *)(iVar4 + 0x28);
  local_34 = *(undefined4 *)(iVar4 + 0x2c);
  local_30 = *(float *)(iVar4 + 0x30);
  local_2c = *(float *)(iVar4 + 0x34);
  local_28 = *(float *)(iVar4 + 0x38);
  local_24 = *(undefined4 *)(iVar4 + 0x3c);
  local_20 = *(float *)(iVar4 + 0x40);
  local_1c = *(float *)(iVar4 + 0x44);
  local_18 = *(float *)(iVar4 + 0x48);
  local_14 = *(undefined4 *)(iVar4 + 0x4c);
  if ((param_3 != '\0') && (*(int **)(iVar4 + 500) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar4 + 500) + 4))(&local_50);
  }
  fVar1 = *(float *)(param_2 + 0xb4);
  fVar2 = *(float *)(param_2 + 0xb0);
  fVar3 = *(float *)(param_2 + 0xb8);
  *(float *)(param_2 + 0x30) = fVar2 * local_50 + fVar1 * local_4c + fVar3 * local_48 + local_20;
  *(float *)(param_2 + 0x34) = fVar2 * local_40 + fVar1 * local_3c + fVar3 * local_38 + local_1c;
  *(float *)(param_2 + 0x38) = fVar2 * local_30 + fVar1 * local_2c + fVar3 * local_28 + local_18;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  fVar1 = *(float *)(param_2 + 0xd4);
  fVar2 = *(float *)(param_2 + 0xd0);
  fVar3 = *(float *)(param_2 + 0xd8);
  *(float *)(param_2 + 0x40) = fVar2 * local_50 + fVar1 * local_4c + fVar3 * local_48;
  *(float *)(param_2 + 0x44) = fVar2 * local_40 + fVar1 * local_3c + fVar3 * local_38;
  *(float *)(param_2 + 0x48) = fVar2 * local_30 + fVar1 * local_2c + fVar3 * local_28;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  fVar1 = *(float *)(param_2 + 0xe0);
  fVar2 = *(float *)(param_2 + 0xe4);
  fVar3 = *(float *)(param_2 + 0xe8);
  *(float *)(param_2 + 0x50) = fVar1 * local_50 + fVar2 * local_4c + fVar3 * local_48;
  *(float *)(param_2 + 0x54) = fVar1 * local_40 + fVar2 * local_3c + fVar3 * local_38;
  *(float *)(param_2 + 0x58) = fVar1 * local_30 + fVar2 * local_2c + fVar3 * local_28;
  *(undefined4 *)(param_2 + 0x5c) = 0;
  return;
}

