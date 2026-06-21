// addr: 0x00fef1b0
// name: FUN_00fef1b0
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00fef1b0(int param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float local_50 [12];
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  pfVar1 = (float *)FUN_00fe2700();
  pfVar3 = local_50;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar3 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar3 = pfVar3 + 1;
  }
  local_20 = *param_2 + local_20;
  fStack_1c = param_2[1] + fStack_1c;
  fStack_18 = param_2[2] + fStack_18;
  fStack_14 = param_2[3] + fStack_14;
  AppPhysics_RigidBody_setWorldTransformAndNotify(*(void **)(param_1 + 0x14),local_50);
  return;
}

