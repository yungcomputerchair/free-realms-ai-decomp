// addr: 0x00bf3160
// name: FUN_00bf3160
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void FUN_00bf3160(void * projectile, int deltaMs_) */

void __thiscall FUN_00bf3160(void *this,void *projectile,int deltaMs_)

{
  float *pfVar1;
  void *this_00;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  char cVar8;
  float *pfVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  undefined1 auVar21 [16];
  float fVar24;
  undefined1 in_XMM4 [16];
  undefined1 auVar25 [16];
  float fStack_80;
  undefined4 uStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [28];
  
                    /* Updates a projectile/effect simulation: advances time, samples target
                       position, computes normalized direction/velocity with acceleration, updates
                       transforms through virtual callbacks, and triggers completion when lifetime
                       expires. No class vtable/name is visible. */
  if ((*(char *)((int)this + 0x94) == '\0') && (*(int **)((int)this + 0x28) != (int *)0x0)) {
    (**(code **)(**(int **)((int)this + 0x28) + 4))(this,(float)(int)projectile * _DAT_017ebf0c);
  }
  FUN_00bf2880();
  if (*(char *)((int)this + 0x94) == '\0') {
    fStack_80 = (float)(int)projectile * _DAT_017ebf0c;
    this_00 = (void *)((int)this + 0xe8);
    cVar8 = FUN_00904540(this_00,&fStack_70);
    if (cVar8 == '\0') {
      fVar14 = *(float *)((int)this + 0x164) - *(float *)((int)this + 0x90);
      fVar14 = *(float *)((int)this + 200) * _DAT_01b67074 * fVar14 +
               *(float *)((int)this + 0xcc) * fVar14 * fVar14 * DAT_017649d4;
      fStack_70 = fVar14 * *(float *)((int)this + 0x70) + *(float *)((int)this + 0x50);
      fStack_6c = fVar14 * *(float *)((int)this + 0x74) + *(float *)((int)this + 0x54);
      fStack_68 = fVar14 * *(float *)((int)this + 0x78) + *(float *)((int)this + 0x58);
      fStack_64 = fVar14 * *(float *)((int)this + 0x7c) + *(float *)((int)this + 0x5c);
      TargetLocationHolder_setDefaultLocation(this_00,&fStack_70);
    }
    fVar13 = DAT_01762a30;
    fVar11 = *(float *)((int)this + 200) * _DAT_01b67074 * fStack_80;
    fVar12 = *(float *)((int)this + 0xcc) * fStack_80 + *(float *)((int)this + 200);
    fVar14 = *(float *)((int)this + 0x174);
    *(float *)((int)this + 200) = fVar12;
    if ((fVar13 < fVar14) && (fVar14 < fVar12)) {
      *(float *)((int)this + 200) = fVar14;
    }
    fVar16 = fStack_70 - *(float *)((int)this + 0x50);
    fVar17 = fStack_6c - *(float *)((int)this + 0x54);
    fVar18 = fStack_68 - *(float *)((int)this + 0x58);
    fVar19 = fStack_64 - *(float *)((int)this + 0x5c);
    fVar12 = fVar17 * fVar17 + fVar16 * fVar16;
    fVar15 = fVar19 * fVar19 + fVar18 * fVar18;
    fVar14 = fVar15 + fVar16 * fVar16 + fVar17 * fVar17;
    fVar13 = fVar12 + fVar18 * fVar18 + fVar19 * fVar19;
    auVar25._4_4_ = fVar14;
    auVar25._0_4_ = fVar15 + fVar12;
    auVar25._8_4_ = fVar12 + fVar15;
    auVar25._12_4_ = fVar13;
    auVar25 = rsqrtps(in_XMM4,auVar25);
    fVar20 = auVar25._0_4_;
    fVar22 = auVar25._4_4_;
    fVar23 = auVar25._8_4_;
    fVar24 = auVar25._12_4_;
    fStack_50 = DAT_017e99a8;
    fStack_4c = DAT_017e99a8;
    fStack_48 = DAT_017e99a8;
    fStack_44 = DAT_017e99a8;
    fStack_40 = DAT_017649d4;
    fStack_3c = DAT_017649d4;
    fStack_38 = DAT_017649d4;
    fStack_34 = DAT_017649d4;
    auVar21._0_4_ = DAT_017649d4 * fVar20;
    auVar21._4_4_ = DAT_017649d4 * fVar22;
    auVar21._8_4_ = DAT_017649d4 * fVar23;
    auVar21._12_4_ = DAT_017649d4 * fVar24;
    fVar16 = (DAT_017e99a8 - (fVar15 + fVar12) * fVar20 * fVar20) * auVar21._0_4_ * fVar16;
    fVar17 = (DAT_017e99a8 - fVar14 * fVar22 * fVar22) * auVar21._4_4_ * fVar17;
    fVar18 = (DAT_017e99a8 - (fVar12 + fVar15) * fVar23 * fVar23) * auVar21._8_4_ * fVar18;
    fVar19 = (DAT_017e99a8 - fVar13 * fVar24 * fVar24) * auVar21._12_4_ * fVar19;
    pfVar1 = (float *)((int)this + 0x70);
    uStack_30 = -(uint)(fVar16 - fVar16 == _DAT_01cb53d0) & (uint)fVar16;
    uStack_2c = -(uint)(fVar17 - fVar17 == fRam01cb53d4) & (uint)fVar17;
    uStack_28 = -(uint)(fVar18 - fVar18 == fRam01cb53d8) & (uint)fVar18;
    uStack_24 = -(uint)(fVar19 - fVar19 == fRam01cb53dc) & (uint)fVar19;
    pfVar9 = (float *)FUN_00bf2540(auStack_20,pfVar1,&uStack_30,*(undefined4 *)((int)this + 0x178),
                                   fStack_80);
    fVar14 = *pfVar9;
    fVar13 = pfVar9[1];
    fVar12 = pfVar9[2];
    fVar16 = pfVar9[3];
    fVar18 = fVar13 * fVar13 + fVar14 * fVar14;
    fVar19 = fVar16 * fVar16 + fVar12 * fVar12;
    fVar17 = fVar19 + fVar14 * fVar14 + fVar13 * fVar13;
    fVar15 = fVar18 + fVar12 * fVar12 + fVar16 * fVar16;
    auVar6._4_4_ = fVar17;
    auVar6._0_4_ = fVar19 + fVar18;
    auVar6._8_4_ = fVar18 + fVar19;
    auVar6._12_4_ = fVar15;
    auVar25 = rsqrtps(auVar21,auVar6);
    fVar20 = auVar25._0_4_;
    fVar22 = auVar25._4_4_;
    fVar23 = auVar25._8_4_;
    fVar24 = auVar25._12_4_;
    fVar14 = (fStack_50 - (fVar19 + fVar18) * fVar20 * fVar20) * fStack_40 * fVar20 * fVar14;
    fVar13 = (fStack_4c - fVar17 * fVar22 * fVar22) * fStack_3c * fVar22 * fVar13;
    fVar12 = (fStack_48 - (fVar18 + fVar19) * fVar23 * fVar23) * fStack_38 * fVar23 * fVar12;
    fVar16 = (fStack_44 - fVar15 * fVar24 * fVar24) * fStack_34 * fVar24 * fVar16;
    bVar3 = fVar13 - fVar13 == fRam01cb53d4;
    bVar4 = fVar12 - fVar12 == fRam01cb53d8;
    bVar5 = fVar16 - fVar16 == fRam01cb53dc;
    *pfVar1 = (float)(-(uint)(fVar14 - fVar14 == _DAT_01cb53d0) & (uint)fVar14);
    *(uint *)((int)this + 0x74) = -(uint)bVar3 & (uint)fVar13;
    *(uint *)((int)this + 0x78) = -(uint)bVar4 & (uint)fVar12;
    *(uint *)((int)this + 0x7c) = -(uint)bVar5 & (uint)fVar16;
    *(float *)((int)this + 0x90) = *(float *)((int)this + 0x90) + fStack_80;
    fVar14 = *(float *)((int)this + 0x74) * fRam01cb54a4;
    fVar13 = *(float *)((int)this + 0x78) * fRam01cb54a8;
    fVar12 = *(float *)((int)this + 0x7c) * fRam01cb54ac;
    *pfVar1 = *pfVar1 * _DAT_01cb54a0;
    *(float *)((int)this + 0x74) = fVar14;
    *(float *)((int)this + 0x78) = fVar13;
    *(float *)((int)this + 0x7c) = fVar12;
    fStack_60 = *pfVar1 * fVar11 + *(float *)((int)this + 0x50);
    fStack_74 = *(float *)((int)this + 0x74) * fVar11 + *(float *)((int)this + 0x54);
    fStack_58 = *(float *)((int)this + 0x78) * fVar11 + *(float *)((int)this + 0x58);
    fStack_54 = *(float *)((int)this + 0x7c) * fVar11 + *(float *)((int)this + 0x5c);
    uStack_78 = *(undefined4 *)((int)this + 0x84);
    if (*(float *)((int)this + 0x90) <= _DAT_017ef980) {
      fStack_80 = 0.0;
    }
    fStack_5c = fStack_74;
    fVar10 = (float10)FUN_00b00290(&fStack_74,&uStack_78,DAT_017ed858,fStack_80);
    fStack_5c = (float)fVar10;
    if (*(char *)((int)this + 0x94) == '\0') {
      (**(code **)(*(int *)this + 0xc))(projectile);
      (**(code **)(*(int *)this + 0x18))(pfVar1,fStack_80);
      (**(code **)(*(int *)this + 0x1c))(&fStack_6c);
      (**(code **)(*(int *)this + 0x20))
                (*(undefined4 *)((int)this + 0x90),*(undefined4 *)((int)this + 0x164));
    }
    uVar7 = DAT_017ed858;
    if ((*(char *)((int)this + 0x180) == '\0') &&
       (*(float *)((int)this + 0xa4) <= DAT_017ea718 && DAT_017ea718 != *(float *)((int)this + 0xa4)
       )) {
      pcVar2 = *(code **)(*(int *)this + 0x14);
      *(undefined1 *)((int)this + 0x180) = 1;
      *(undefined4 *)((int)this + 0x178) = uVar7;
      (*pcVar2)();
      TargetLocationHolder_setDefaultLocation(this_00,(void *)((int)this + 0x110));
    }
  }
  return;
}

