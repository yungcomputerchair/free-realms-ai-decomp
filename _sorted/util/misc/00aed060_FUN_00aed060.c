// addr: 0x00aed060
// name: FUN_00aed060
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_00aed060(int *param_1,float param_2,float param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  
                    /* Computes animation sample time/index and optionally queries a controller
                       duration for a previous key before returning a key record. No class evidence,
                       so left unnamed. */
  if (((int)param_2 < 0) || (param_1[3] <= (int)param_2)) {
    iVar2 = param_1[3];
    iVar1 = iVar2 + -1;
    if ((iVar1 < 0) || (iVar2 <= iVar1)) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = *(float *)(iVar1 * 0x20 + 4 + param_1[2]);
    }
  }
  else {
    fVar4 = *(float *)((int)param_2 * 0x20 + 4 + param_1[2]);
    iVar2 = (int)param_2;
  }
  param_2 = fVar4;
  if (0 < iVar2) {
    param_2 = DAT_017ebbb8;
    if ((int *)*param_1 != (int *)0x0) {
      fVar3 = (float10)(**(code **)(*(int *)*param_1 + 0x1c))(iVar2 + -1,param_4);
      param_2 = DAT_017ebbb8;
      if (DAT_01762a30 < (float)fVar3) {
        param_2 = (float)fVar3 / param_3;
      }
    }
    param_2 = param_2 + fVar4;
  }
  iVar1 = FUN_007daeb0(iVar2,1);
  *(float *)(iVar1 + 4) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = *param_4;
  *(undefined4 *)(iVar1 + 0x14) = param_4[1];
  *(undefined4 *)(iVar1 + 0x18) = param_4[2];
  *(undefined4 *)(iVar1 + 0x1c) = param_4[3];
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 0x20))();
  }
  return iVar2;
}

