// addr: 0x0086bd50
// name: AnimationCurve_emitNormalizedSegments
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void AnimationCurve_emitNormalizedSegments(void * curve, float duration_) */

void __thiscall AnimationCurve_emitNormalizedSegments(void *this,void *curve,float duration_)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  float fStack_34;
  float fStack_24;
  
                    /* Breaks a time interval into normalized curve segments and emits them with
                       start/end weights via FUN_0086b5c0. */
  fVar4 = (float10)(**(code **)(**(int **)(*(int *)((int)this + 0x18) + 0xe4) + 0xc))();
  fStack_34 = (float)fVar4;
  iVar2 = *(int *)((int)this + 0x18);
  fVar1 = *(float *)(*(int *)(iVar2 + 0xe0) + 0x178);
  if (fVar1 != DAT_01762a30) {
    iVar3 = *(int *)(iVar2 + 0xdc);
    fVar6 = *(float *)(iVar3 + 0x120) - *(float *)(iVar3 + 0xe0);
    fVar7 = *(float *)(iVar3 + 0x124) - *(float *)(iVar3 + 0xe4);
    fVar8 = *(float *)(iVar3 + 0x128) - *(float *)(iVar3 + 0xe8);
    fVar9 = *(float *)(iVar3 + 300) - *(float *)(iVar3 + 0xec);
    curve = (void *)(fVar1 * SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) *
                     fStack_34 + (float)curve);
  }
  if ((float)curve <= fStack_34) {
    FUN_0086b5c0(curve,0,0x3f800000,1);
    return;
  }
  fVar1 = *(float *)(*(int *)(iVar2 + 0xe4) + 0x18);
  fVar6 = fVar1 + (float)curve;
  fVar5 = (float10)FUN_00d843f0((double)(((float10)1 / fVar4) * (float10)fVar1));
  fStack_24 = (float)(fVar5 * (float10)fStack_34);
  dVar10 = CRT_floor((double)((float)((float10)1 / fVar4) * fVar6));
  fStack_34 = (float)dVar10 * fStack_34;
  fVar7 = (fStack_24 - fVar1) * (_DAT_0175b420 / (float)curve);
  fVar8 = (fStack_34 - fVar1) * (_DAT_0175b420 / (float)curve);
  if (fStack_24 < fVar1) {
    fStack_24 = fVar1;
  }
  if (fVar6 <= fStack_34) {
    fStack_34 = fVar6;
  }
  FUN_0086b5c0(fStack_24 - fVar1,0,fVar7,1);
  if (fStack_24 < fStack_34) {
    FUN_0086b5c0(fStack_34 - fStack_24,fVar7,fVar8,0);
  }
  FUN_0086b5c0(fVar6 - fStack_34,fVar8,0x3f800000,1);
  return;
}

