// addr: 0x00ae9d30
// name: FUN_00ae9d30
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00ae9d30(int param_1)

{
  float *pfVar1;
  void *target;
  void *this;
  bool bVar2;
  int *piVar3;
  float *pfVar4;
  undefined3 extraout_var;
  int *piVar6;
  uint unaff_EDI;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  float fVar15;
  undefined1 in_XMM3 [16];
  undefined1 auVar13 [16];
  float fVar16;
  float fStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  int iVar5;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  piVar3 = (int *)FUN_0094cf60();
  pfVar1 = (float *)(param_1 + 400);
  local_20 = 0.0;
  fStack_1c = 0.0;
  fStack_18 = 0.0;
  fStack_14 = 0.0;
  fVar8 = 0.0 - fRam01cb54c4;
  fVar9 = 0.0 - fRam01cb54c8;
  fVar10 = 0.0 - fRam01cb54cc;
  *pfVar1 = 0.0 - _DAT_01cb54c0;
  *(float *)(param_1 + 0x194) = fVar8;
  *(float *)(param_1 + 0x198) = fVar9;
  *(float *)(param_1 + 0x19c) = fVar10;
  if (piVar3 != (int *)0x0) {
    pfVar4 = (float *)(**(code **)(*piVar3 + 0x1c))();
    fStack_60 = *pfVar4;
    fStack_5c = pfVar4[1];
    fStack_58 = pfVar4[2];
    fStack_54 = pfVar4[3];
    target = *(void **)(param_1 + 0x74);
    this = *(void **)((int)target + 0x224);
    bVar2 = CharacterRailPath_compareTargetTransform
                      (*(void **)((int)target + 0x228),target,&fStack_60);
    iVar5 = CONCAT31(extraout_var,bVar2);
    if (iVar5 == 0) {
      fVar8 = (float)piVar3[0x185];
      fVar9 = (float)piVar3[0x186];
      fVar10 = (float)piVar3[0x187];
      *pfVar1 = local_20 - (float)piVar3[0x184];
      *(float *)(param_1 + 0x194) = fStack_1c - fVar8;
      *(float *)(param_1 + 0x198) = fStack_18 - fVar9;
      *(float *)(param_1 + 0x19c) = fStack_14 - fVar10;
      return;
    }
    lookup_hash64_bucket_node(this,*(int *)(iVar5 + 0xc),unaff_EDI);
    lookup_hash64_bucket_node(this,*(int *)(iVar5 + 8),unaff_EDI);
    piVar3 = (int *)FUN_010718e0();
    piVar6 = (int *)FUN_010718e0();
    if ((int *)*piVar3 == (int *)0x0) {
      fStack_68 = 0.0;
    }
    else {
      fVar7 = (float10)(**(code **)(*(int *)*piVar3 + 0x28))(&fStack_60);
      fStack_68 = (float)fVar7;
    }
    pfVar4 = (float *)FUN_00ae9940(&fStack_40,fStack_68);
    fStack_60 = *pfVar4;
    fStack_5c = pfVar4[1];
    fStack_58 = pfVar4[2];
    fStack_54 = pfVar4[3];
    if ((int *)*piVar3 == (int *)0x0) {
      fStack_6c = 0.0;
    }
    else {
      fVar7 = (float10)(**(code **)(*(int *)*piVar3 + 0x2c))();
      fStack_6c = (float)fVar7;
    }
    if ((int *)*piVar6 == (int *)0x0) {
      fVar8 = 0.0;
    }
    else {
      fVar7 = (float10)(**(code **)(*(int *)*piVar6 + 0x2c))();
      fVar8 = (float)fVar7;
      fStack_44 = fVar8;
    }
    FUN_00ae9940(&fStack_40,(fStack_68 / fStack_6c) * fVar8);
    fStack_34 = _DAT_0175b420;
    fStack_54 = _DAT_0175b420;
    fStack_30 = (fStack_40 - fStack_60) * _DAT_01cb5460;
    fStack_2c = (fStack_3c - fStack_5c) * fRam01cb5464;
    fStack_28 = (fStack_38 - fStack_58) * fRam01cb5468;
    fStack_24 = (_DAT_0175b420 - _DAT_0175b420) * fRam01cb546c;
    fVar10 = fStack_2c * fStack_2c + fStack_30 * fStack_30;
    fVar11 = fStack_24 * fStack_24 + fStack_28 * fStack_28;
    fVar8 = fVar11 + fStack_30 * fStack_30 + fStack_2c * fStack_2c;
    fVar9 = fVar10 + fStack_28 * fStack_28 + fStack_24 * fStack_24;
    auVar13._4_4_ = fVar8;
    auVar13._0_4_ = fVar11 + fVar10;
    auVar13._8_4_ = fVar10 + fVar11;
    auVar13._12_4_ = fVar9;
    auVar13 = rsqrtps(in_XMM3,auVar13);
    fVar12 = auVar13._0_4_;
    fVar14 = auVar13._4_4_;
    fVar15 = auVar13._8_4_;
    fVar16 = auVar13._12_4_;
    fStack_30 = (DAT_017e99a8 - (fVar11 + fVar10) * fVar12 * fVar12) * DAT_017649d4 * fVar12 *
                fStack_30;
    fStack_2c = (DAT_017e99a8 - fVar8 * fVar14 * fVar14) * DAT_017649d4 * fVar14 * fStack_2c;
    fStack_28 = (DAT_017e99a8 - (fVar10 + fVar11) * fVar15 * fVar15) * DAT_017649d4 * fVar15 *
                fStack_28;
    fStack_24 = (DAT_017e99a8 - fVar9 * fVar16 * fVar16) * DAT_017649d4 * fVar16 * fStack_24;
    fStack_30 = (float)(-(uint)(fStack_30 - fStack_30 == _DAT_01cb53d0) & (uint)fStack_30);
    fStack_2c = (float)(-(uint)(fStack_2c - fStack_2c == fRam01cb53d4) & (uint)fStack_2c);
    fStack_28 = (float)(-(uint)(fStack_28 - fStack_28 == fRam01cb53d8) & (uint)fStack_28);
    fStack_24 = (float)(-(uint)(fStack_24 - fStack_24 == fRam01cb53dc) & (uint)fStack_24);
    FUN_0095dae0(&fStack_30,0);
    *pfVar1 = local_20 - fStack_30;
    *(float *)(param_1 + 0x194) = fStack_1c - fStack_2c;
    *(float *)(param_1 + 0x198) = fStack_18 - fStack_28;
    *(float *)(param_1 + 0x19c) = fStack_14 - fStack_24;
  }
  return;
}

