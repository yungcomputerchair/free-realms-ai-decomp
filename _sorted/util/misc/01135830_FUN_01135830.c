// addr: 0x01135830
// name: FUN_01135830
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_01135830(void *param_1,float *param_2)

{
  float fVar1;
  
                    /* Updates Bullet box/shape dimensions and derived axis scale values from a new
                       local scaling vector. No class evidence. */
  *(float *)((int)param_1 + 0x48) =
       (param_2[*(int *)((int)param_1 + 0x50)] /
       *(float *)((int)param_1 + *(int *)((int)param_1 + 0x50) * 4 + 0x10)) *
       *(float *)((int)param_1 + 0x48);
  fVar1 = (param_2[*(int *)((int)param_1 + 0x54)] /
           *(float *)((int)param_1 + *(int *)((int)param_1 + 0x54) * 4 + 0x10) +
          param_2[*(int *)((int)param_1 + 0x4c)] /
          *(float *)((int)param_1 + *(int *)((int)param_1 + 0x4c) * 4 + 0x10)) *
          *(float *)((int)param_1 + 0x44) * DAT_017649d4;
  *(float *)((int)param_1 + 0x44) = fVar1;
  *(float *)((int)param_1 + 0x40) =
       fVar1 / SQRT(fVar1 * fVar1 +
                    *(float *)((int)param_1 + 0x48) * *(float *)((int)param_1 + 0x48));
  btBoxShape_setImplicitShapeDimensions(param_1,param_2);
  return;
}

