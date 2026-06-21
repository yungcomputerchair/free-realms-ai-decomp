// addr: 0x00805cd0
// name: Vector4_lerp
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void Vector4_lerp(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
                    /* Linearly interpolates four float components from start to end by a scalar
                       factor and writes the result. Named by behavior only; no class evidence. */
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  *param_1 = (*param_3 - *param_2) * param_4 + *param_2;
  param_1[1] = (fVar4 - fVar1) * param_4 + fVar1;
  param_1[2] = (fVar5 - fVar2) * param_4 + fVar2;
  param_1[3] = (fVar6 - fVar3) * param_4 + fVar3;
  return;
}

