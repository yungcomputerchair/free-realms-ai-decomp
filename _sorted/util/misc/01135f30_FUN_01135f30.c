// addr: 0x01135f30
// name: FUN_01135f30
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_01135f30(int *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
                    /* Updates a Bullet btBoxShape implicit dimensions and recomputes
                       extents/margin-adjusted cached values. No class evidence. */
  fVar7 = (float10)(**(code **)(*param_1 + 0x28))();
  fVar8 = (float10)(**(code **)(*param_1 + 0x28))();
  fVar9 = (float10)(**(code **)(*param_1 + 0x28))();
  fVar1 = (float)param_1[8];
  fVar2 = (float)param_1[9];
  fVar3 = (float)param_1[10];
  fVar4 = (float)param_1[4];
  fVar5 = (float)param_1[5];
  fVar6 = (float)param_1[6];
  btBoxShape_setImplicitShapeDimensions(param_1,param_2);
  param_1[8] = (int)((float)param_1[4] * ((fVar1 + (float)fVar9) / fVar4) - (float)fVar9);
  param_1[9] = (int)((float)param_1[5] * ((fVar2 + (float)fVar8) / fVar5) - (float)fVar8);
  param_1[10] = (int)((float)param_1[6] * ((fVar3 + (float)fVar7) / fVar6) - (float)fVar7);
  param_1[0xb] = 0;
  return;
}

