// addr: 0x0080f530
// name: SkyDefinition_updateAnimation
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SkyDefinition_updateAnimation(void *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  undefined4 *puVar4;
  void *this;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  float *pfVar8;
  void *pvVar9;
  undefined1 *puVar10;
  int iVar11;
  void *unused;
  int *piVar12;
  void *pvVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float fVar17;
  float t_;
  float fVar18;
  float fVar19;
  void *local_e48;
  float fStack_e44;
  float fStack_e40;
  float fStack_e3c;
  float fStack_e38;
  float fStack_e34;
  float fStack_e28;
  float fStack_e24;
  float fStack_e20;
  float fStack_e1c;
  float fStack_e18;
  float fStack_e14;
  float fStack_e00;
  float fStack_dfc;
  float fStack_df8;
  float fStack_df4;
  undefined1 auStack_c40 [12];
  float fStack_c34;
  float fStack_c30;
  float fStack_c2c;
  float fStack_c28;
  float fStack_c24;
  float fStack_c20;
  float fStack_c1c;
  float fStack_c18;
  float fStack_c14;
  float fStack_c10;
  float fStack_c0c;
  float fStack_c08;
  float fStack_c04;
  float fStack_c00;
  float fStack_bfc;
  float fStack_bf8;
  float fStack_bf4;
  float fStack_bf0;
  float fStack_bec;
  float fStack_be8;
  float fStack_be4;
  float fStack_be0;
  float fStack_bdc;
  float fStack_bd8;
  float fStack_bd4;
  float fStack_bd0;
  float fStack_bcc;
  float fStack_bc8;
  float fStack_bc4;
  float fStack_bc0;
  float fStack_bbc;
  float fStack_bb8;
  float fStack_bb4;
  float fStack_bb0;
  float fStack_bac;
  float fStack_ba8;
  float fStack_ba4;
  float fStack_ba0;
  float fStack_b9c;
  float fStack_b98;
  float fStack_b94;
  float fStack_b90;
  float fStack_b8c;
  float fStack_b88;
  float fStack_b84;
  undefined1 auStack_b80 [16];
  void *pvStack_b70;
  undefined1 auStack_b60 [16];
  float fStack_b50;
  float fStack_b4c;
  float fStack_b48;
  void *pvStack_b30;
  undefined1 auStack_b20 [16];
  float fStack_b10;
  float fStack_b0c;
  float fStack_b08;
  undefined4 uStack_b00;
  void *pvStack_ae0;
  undefined1 auStack_ad0 [16];
  float fStack_ac0;
  float fStack_abc;
  float fStack_ab8;
  void *pvStack_aa0;
  undefined1 auStack_a90 [16];
  float fStack_a80;
  float fStack_a7c;
  float fStack_a78;
  undefined4 uStack_a70;
  undefined4 uStack_a60;
  undefined1 auStack_a50 [16];
  void *pvStack_a40;
  undefined1 auStack_a30 [16];
  float fStack_a20;
  undefined1 auStack_a10 [16];
  void *pvStack_a00;
  undefined1 auStack_9f0 [16];
  float fStack_9e0;
  float fStack_9d0;
  undefined1 auStack_9c0 [16];
  void *pvStack_9b0;
  undefined1 auStack_990 [16];
  void *pvStack_980;
  float fStack_960;
  float fStack_950;
  float fStack_94c;
  float fStack_948;
  float fStack_944;
  float fStack_940;
  float fStack_93c;
  float fStack_938;
  float fStack_934;
  float fStack_930;
  float fStack_92c;
  float fStack_928;
  float fStack_924;
  float fStack_920;
  float fStack_91c;
  float fStack_918;
  float fStack_914;
  float fStack_910;
  float fStack_90c;
  float fStack_908;
  float fStack_904;
  float fStack_900;
  float fStack_8fc;
  float fStack_8f8;
  float fStack_8f4;
  float fStack_8f0;
  float fStack_8ec;
  float fStack_8e8;
  float fStack_8e4;
  float fStack_8e0;
  float fStack_8dc;
  float fStack_8d8;
  float fStack_8d4;
  undefined1 auStack_8d0 [80];
  undefined1 auStack_880 [48];
  undefined1 auStack_850 [16];
  undefined1 auStack_840 [16];
  undefined1 auStack_830 [16];
  undefined1 auStack_820 [16];
  undefined1 auStack_810 [16];
  undefined1 auStack_800 [16];
  undefined1 auStack_7f0 [16];
  undefined1 auStack_7e0 [16];
  undefined1 auStack_7d0 [16];
  undefined1 auStack_7c0 [48];
  undefined1 auStack_790 [112];
  undefined1 auStack_720 [16];
  undefined1 auStack_710 [16];
  undefined1 auStack_700 [48];
  undefined1 auStack_6d0 [48];
  undefined1 auStack_6a0 [16];
  undefined1 auStack_690 [16];
  undefined1 auStack_680 [16];
  void *pvStack_670;
  void *pvStack_640;
  float fStack_620;
  void *pvStack_600;
  void *pvStack_5d0;
  float fStack_5b0;
  float fStack_5a0;
  undefined1 auStack_590 [16];
  int iStack_580;
  int iStack_550;
  undefined4 uStack_530;
  int iStack_510;
  int iStack_4e0;
  undefined4 uStack_4c0;
  undefined4 uStack_4b0;
  undefined1 auStack_4a0 [16];
  void *pvStack_490;
  void *pvStack_460;
  undefined4 uStack_440;
  void *pvStack_420;
  void *pvStack_3f0;
  undefined4 uStack_3d0;
  undefined4 uStack_3c0;
  undefined1 auStack_3b0 [64];
  undefined1 auStack_370 [112];
  undefined1 auStack_300 [112];
  undefined1 auStack_290 [112];
  undefined1 auStack_220 [48];
  undefined1 auStack_1f0 [144];
  undefined1 auStack_160 [48];
  undefined1 auStack_130 [112];
  undefined1 auStack_c0 [144];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Large SkyDefinition animation update routine that samples many wrapped
                       float/vector/quaternion/tinted-texture/satellite tracks and applies them to
                       animation bindings/model state for the supplied time. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_01568d55;
  local_1c = ExceptionList;
  uVar5 = DAT_01b839d8 ^ (uint)&stack0xfffff190;
  ExceptionList = &local_1c;
  fVar17 = param_2 * *(float *)((int)param_1 + 0x834) + *(float *)((int)param_1 + 0x830);
  if (_DAT_0175b420 <= fVar17) {
    fVar17 = _DAT_0175b420;
  }
  piVar12 = (int *)0x0;
  *(float *)((int)param_1 + 0x830) = fVar17;
  if ((*(int *)((int)param_1 + 0x18) == 0) ||
     (iVar7 = *(int *)((int)param_1 + 0x18), *(char *)(iVar7 + 0x27dc) == '\0')) {
    if (*(int *)((int)param_1 + 0x44) != 0) {
      ChannelSet_updateBindingFlags(*(void **)((int)param_1 + 0x44));
    }
    if (*(int *)((int)param_1 + 0x48) != 0) {
      ChannelSet_updateBindingFlags(*(void **)((int)param_1 + 0x48));
    }
    if (*(int *)((int)param_1 + 0x50) != 0) {
      ChannelSet_updateBindingFlags(*(void **)((int)param_1 + 0x50));
    }
    if (*(int *)((int)param_1 + 0x54) != 0) {
      ChannelSet_updateBindingFlags(*(void **)((int)param_1 + 0x54));
    }
    if (*(int *)((int)param_1 + 0x58) != 0) {
      ChannelSet_updateBindingFlags(*(void **)((int)param_1 + 0x58));
    }
    if (*(int *)((int)param_1 + 0x5c) != 0) {
      ChannelSet_updateBindingFlags(*(void **)((int)param_1 + 0x5c));
    }
    FUN_00808000();
    FUN_00807f30();
    FUN_00808000();
    FUN_00808000();
    FUN_00805890();
    FUN_00805910();
    goto LAB_00811c35;
  }
  if (*(int *)((int)param_1 + 0x78) == 0) {
    iVar7 = *(int *)(iVar7 + 0x27f0);
    if (((iVar7 != 0) && (*(int *)(iVar7 + 0x14) != 0)) &&
       (*(char *)(*(int *)(iVar7 + 0x14) + 0x1c) != '\0')) {
      local_e48 = Mem_Alloc(0x1c0);
      local_14 = 0;
      if (local_e48 != (void *)0x0) {
        iVar7 = *(int *)(*(int *)((int)param_1 + 0x18) + 0x27f0);
        if (*(int *)(iVar7 + 0x14) == 0) {
          piVar12 = (int *)Deep_ModelEntity_ctor(0,0,0);
        }
        else {
          piVar12 = (int *)Deep_ModelEntity_ctor(*(undefined4 *)(*(int *)(iVar7 + 0x14) + 0x38),0,0)
          ;
        }
      }
LAB_0080f6f9:
      local_14 = 0xffffffff;
      *(int **)((int)param_1 + 0x78) = piVar12;
      iVar7 = *piVar12;
      uVar6 = FUN_00729610();
      (**(code **)(iVar7 + 0x28))(uVar6);
    }
  }
  else if (*(int *)(iVar7 + 0x27f0) == 0) {
    if (*(undefined4 **)((int)param_1 + 0x78) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x78))(1,uVar5);
    }
    *(undefined4 *)((int)param_1 + 0x78) = 0;
  }
  else if (((*(int *)((int)param_1 + 0x78) != 0) &&
           (pvVar13 = *(void **)(iVar7 + 0x27f0), pvVar13 != (void *)0x0)) &&
          (iVar7 = AnimationBinding_isPrimaryReady(pvVar13), (char)iVar7 != '\0')) {
    if (*(int *)((int)pvVar13 + 0x14) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(*(int *)((int)pvVar13 + 0x14) + 0x38);
    }
    puVar4 = *(undefined4 **)((int)param_1 + 0x78);
    if (iVar7 != *(int *)(*(int *)puVar4[0x4c] + 0x10)) {
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)(1);
      }
      local_e48 = Mem_Alloc(0x1c0);
      local_14 = 1;
      if (local_e48 == (void *)0x0) {
        piVar12 = (int *)0x0;
      }
      else {
        iVar7 = *(int *)(*(int *)((int)param_1 + 0x18) + 0x27f0);
        if (*(int *)(iVar7 + 0x14) == 0) {
          piVar12 = (int *)Deep_ModelEntity_ctor(0,0,0);
        }
        else {
          piVar12 = (int *)Deep_ModelEntity_ctor(*(undefined4 *)(*(int *)(iVar7 + 0x14) + 0x38),0,0)
          ;
        }
      }
      goto LAB_0080f6f9;
    }
  }
  if (*(int *)((int)param_1 + 0x78) != 0) {
    if (*(int *)((int)param_1 + 4) == 0) {
      if (*(int *)((int)param_1 + 8) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_00729610();
      }
    }
    else {
      iVar7 = *(int *)(*(int *)((int)param_1 + 4) + 0x38);
    }
    FUN_00738c30(&DAT_01bc2660,&DAT_01bc2670,&DAT_01bc2680,*(int *)(iVar7 + 0x18) + 0x40);
    (**(code **)(**(int **)((int)param_1 + 0x78) + 0x1c))(auStack_3b0);
  }
  iVar7 = *(int *)(*(int *)((int)param_1 + 0x18) + 0x27f8);
  if (iVar7 == 0) {
LAB_0080f7b7:
    if ((*(int *)((int)param_1 + 0x894) != 0) && (iVar7 == 0)) {
      *(undefined4 *)((int)param_1 + 0x894) = 0;
    }
  }
  else {
    if (*(int *)(iVar7 + 0x14) == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(*(int *)(iVar7 + 0x14) + 0x2c);
    }
    if (iVar11 == *(int *)((int)param_1 + 0x894)) goto LAB_0080f7b7;
    if (*(int *)(iVar7 + 0x14) == 0) {
      *(undefined4 *)((int)param_1 + 0x894) = 0;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x894) = *(undefined4 *)(*(int *)(iVar7 + 0x14) + 0x2c);
    }
  }
  fVar17 = *(float *)((int)param_1 + 0x830);
  t_ = fVar17 * fVar17 * DAT_017e99a8 - fVar17 * fVar17 * fVar17 * DAT_017ea718;
  fVar17 = _DAT_0175b420 - t_;
  if (*(int *)((int)param_1 + 0x1c) == 0) {
    pvVar13 = *(void **)((int)param_1 + 0x18);
  }
  else {
    pvVar13 = *(void **)((int)param_1 + 0x1c);
  }
  pfVar8 = &fStack_30;
  SkyDefinition_sampleVector4Curve(auStack_220,*(undefined4 *)((int)param_1 + 0x83c));
  Quaternion_slerp(pfVar8);
  pfVar8 = &fStack_e40;
  SkyDefinition_sampleVector4Curve(auStack_160,*(undefined4 *)((int)param_1 + 0x83c));
  Quaternion_slerp(pfVar8);
  Quaternion_slerp(&fStack_e00,&fStack_e40,&fStack_30,t_);
  if (0 < *(int *)(*(int *)((int)param_1 + 0x18) + 0x14)) {
    SkyDefinition_sampleTintedTextureTrack0(auStack_290,*(undefined4 *)((int)param_1 + 0x83c));
    local_14 = 2;
    FUN_0080ab00(auStack_290,t_,param_2,*(undefined4 *)((int)param_1 + 0x834));
    FUN_0080ad50(auStack_590);
    local_14._0_1_ = 3;
    if (*(int *)((int)param_1 + 0x44) != 0) {
      if ((iStack_580 == 0) || (*(int *)(iStack_580 + 0x14) == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(*(int *)(iStack_580 + 0x14) + 0x2c);
      }
      uVar6 = FUN_00755770(uVar6);
      local_14._0_1_ = 4;
      FUN_00759b30(0x87ff2e9a,uVar6);
      local_14._0_1_ = 3;
      FUN_00748150();
      if ((iStack_550 == 0) || (*(int *)(iStack_550 + 0x14) == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(*(int *)(iStack_550 + 0x14) + 0x2c);
      }
      uVar6 = FUN_00755770(uVar6);
      local_14._0_1_ = 5;
      FUN_00759b30(0x62c973db,uVar6);
      local_14._0_1_ = 3;
      FUN_00748150();
      if ((iStack_510 == 0) || (*(int *)(iStack_510 + 0x14) == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(*(int *)(iStack_510 + 0x14) + 0x2c);
      }
      uVar6 = FUN_00755770(uVar6);
      local_14._0_1_ = 6;
      FUN_00759b30(0x7499177e,uVar6);
      local_14._0_1_ = 3;
      FUN_00748150();
      if ((iStack_4e0 == 0) || (*(int *)(iStack_4e0 + 0x14) == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(*(int *)(iStack_4e0 + 0x14) + 0x2c);
      }
      uVar6 = FUN_00755770(uVar6);
      local_14._0_1_ = 7;
      FUN_00759b30(0x7d5328f2,uVar6);
      local_14._0_1_ = 3;
      FUN_00748150();
      uVar6 = FUN_00737e90(uStack_530);
      local_14._0_1_ = 8;
      FUN_00759b30(0xbc0a3372,uVar6);
      local_14._0_1_ = 3;
      FUN_00737fe0();
      uVar6 = FUN_00737e90(uStack_4c0);
      local_14._0_1_ = 9;
      FUN_00759b30(0xfc632448,uVar6);
      local_14._0_1_ = 3;
      FUN_00737fe0();
      uVar6 = FUN_00737e90(uStack_4b0);
      local_14._0_1_ = 10;
      FUN_00759b30(0x4bd6432d,uVar6);
      local_14._0_1_ = 3;
      FUN_00737fe0();
      uVar6 = FUN_00758ec0(*(int *)((int)param_1 + 0x14) + 0x20);
      local_14._0_1_ = 0xb;
      FUN_00759b30(0x20cdbf43,uVar6);
      local_14._0_1_ = 3;
      FUN_00758f50();
    }
    local_14 = CONCAT31(local_14._1_3_,2);
    FUN_00807a80();
    local_14 = 0xffffffff;
    SkyDefinition_TintedTexturePair_dtor();
  }
  if (0 < *(int *)(*(int *)((int)param_1 + 0x18) + 0x5f4)) {
    SkyDefinition_sampleTintedTextureTrack1(auStack_300,*(undefined4 *)((int)param_1 + 0x83c));
    local_14 = 0xc;
    FUN_0080ab00(auStack_300,t_,param_2,*(undefined4 *)((int)param_1 + 0x834));
    FUN_0080ad50(auStack_4a0);
    local_14._0_1_ = 0xd;
    if (*(int *)((int)param_1 + 0x4c) != 0) {
      iVar7 = AnimationBinding_getPrimaryValue2C(pvStack_490);
      uVar6 = FUN_00755770(iVar7);
      local_14._0_1_ = 0xe;
      FUN_00759b30(0x87ff2e9a,uVar6);
      local_14._0_1_ = 0xd;
      FUN_00748150();
      iVar7 = AnimationBinding_getPrimaryValue2C(pvStack_460);
      uVar6 = FUN_00755770(iVar7);
      local_14._0_1_ = 0xf;
      FUN_00759b30(0x62c973db,uVar6);
      local_14._0_1_ = 0xd;
      FUN_00748150();
      iVar7 = AnimationBinding_getPrimaryValue2C(pvStack_420);
      uVar6 = FUN_00755770(iVar7);
      local_14._0_1_ = 0x10;
      FUN_00759b30(0x7499177e,uVar6);
      local_14._0_1_ = 0xd;
      FUN_00748150();
      iVar7 = AnimationBinding_getPrimaryValue2C(pvStack_3f0);
      uVar6 = FUN_00755770(iVar7);
      local_14._0_1_ = 0x11;
      FUN_00759b30(0x7d5328f2,uVar6);
      local_14._0_1_ = 0xd;
      FUN_00748150();
      uVar6 = FUN_00737e90(uStack_440);
      local_14._0_1_ = 0x12;
      FUN_00759b30(0xbc0a3372,uVar6);
      local_14._0_1_ = 0xd;
      FUN_00737fe0();
      uVar6 = FUN_00737e90(uStack_3d0);
      local_14._0_1_ = 0x13;
      FUN_00759b30(0xfc632448,uVar6);
      local_14._0_1_ = 0xd;
      FUN_00737fe0();
      uVar6 = FUN_00737e90(uStack_3c0);
      local_14._0_1_ = 0x14;
      FUN_00759b30(0x4bd6432d,uVar6);
      local_14._0_1_ = 0xd;
      FUN_00737fe0();
      uVar6 = FUN_00758ec0(*(int *)((int)param_1 + 0x14) + 0x20);
      local_14._0_1_ = 0x15;
      FUN_00759b30(0x20cdbf43,uVar6);
      local_14._0_1_ = 0xd;
      FUN_00758f50();
    }
    local_14 = CONCAT31(local_14._1_3_,0xc);
    FUN_00807a80();
    local_14 = 0xffffffff;
    SkyDefinition_TintedTexturePair_dtor();
  }
  fStack_e44 = _DAT_0175b420;
  if (0 < *(int *)(*(int *)((int)param_1 + 0x18) + 0x2c4)) {
    SkyDefinition_sampleTwoTrackBlendTrack(auStack_1f0,*(undefined4 *)((int)param_1 + 0x83c));
    local_14 = 0x16;
    FUN_0080a840(auStack_1f0,t_,param_2,*(undefined4 *)((int)param_1 + 0x834));
    FUN_0080d240(auStack_b80);
    local_14._0_1_ = 0x17;
    if (*(int *)((int)param_1 + 0x48) != 0) {
      uVar6 = Vector4_lerp(auStack_7e0,auStack_ad0,auStack_a90,uStack_a70,uStack_a60);
      uVar6 = Vector4_lerp(auStack_7c0,auStack_b60,auStack_b20,uStack_b00,uVar6);
      Vector4_lerp(auStack_c40,uVar6);
      fStack_e44 = fStack_c34;
      uVar6 = FUN_00737d30(1);
      local_14._0_1_ = 0x18;
      FUN_00759b30(0xf09e2019,uVar6);
      local_14._0_1_ = 0x17;
      FUN_00737e40();
      uVar6 = FUN_00745ec0(auStack_c40);
      local_14._0_1_ = 0x19;
      FUN_00759b30(0x996a02df,uVar6);
      local_14._0_1_ = 0x17;
      FUN_00745f50();
      iVar7 = AnimationBinding_getPrimaryValue2C(pvStack_b70);
      uVar6 = FUN_00755770(iVar7);
      local_14._0_1_ = 0x1a;
      FUN_00759b30(0x87ff2e9a,uVar6);
      local_14._0_1_ = 0x17;
      FUN_00748150();
      iVar7 = AnimationBinding_getPrimaryValue2C(pvStack_b30);
      uVar6 = FUN_00755770(iVar7);
      local_14._0_1_ = 0x1b;
      FUN_00759b30(0x62c973db,uVar6);
      local_14._0_1_ = 0x17;
      FUN_00748150();
      iVar7 = AnimationBinding_getPrimaryValue2C(pvStack_ae0);
      uVar6 = FUN_00755770(iVar7);
      local_14._0_1_ = 0x1c;
      FUN_00759b30(0x7499177e,uVar6);
      local_14._0_1_ = 0x17;
      FUN_00748150();
      iVar7 = AnimationBinding_getPrimaryValue2C(pvStack_aa0);
      uVar6 = FUN_00755770(iVar7);
      local_14._0_1_ = 0x1d;
      FUN_00759b30(0x7d5328f2,uVar6);
      local_14._0_1_ = 0x17;
      FUN_00748150();
      fStack_e3c = DAT_017f1928 / (fStack_b4c - fStack_b50);
      fStack_e40 = fStack_b48;
      fStack_e38 = 0.0;
      fStack_e34 = 0.0;
      uVar6 = FUN_00738030(&fStack_e40);
      local_14._0_1_ = 0x1e;
      FUN_00759b30(0xcf8f8090,uVar6);
      local_14._0_1_ = 0x17;
      FUN_007380d0();
      fStack_e3c = DAT_017f1928 / (fStack_b0c - fStack_b10);
      fStack_e40 = fStack_b08;
      fStack_e38 = 0.0;
      fStack_e34 = 0.0;
      uVar6 = FUN_00738030(&fStack_e40);
      local_14._0_1_ = 0x1f;
      FUN_00759b30(0x65d176a6,uVar6);
      local_14._0_1_ = 0x17;
      FUN_007380d0();
      fStack_e3c = DAT_017f1928 / (fStack_abc - fStack_ac0);
      fStack_e40 = fStack_ab8;
      fStack_e38 = 0.0;
      fStack_e34 = 0.0;
      uVar6 = FUN_00738030(&fStack_e40);
      local_14._0_1_ = 0x20;
      FUN_00759b30(0xa1dceebc,uVar6);
      local_14._0_1_ = 0x17;
      FUN_007380d0();
      fStack_e3c = DAT_017f1928 / (fStack_a7c - fStack_a80);
      fStack_e40 = fStack_a78;
      fStack_e38 = 0.0;
      fStack_e34 = 0.0;
      uVar6 = FUN_00738030(&fStack_e40);
      local_14._0_1_ = 0x21;
      FUN_00759b30(0x430c311c,uVar6);
      local_14._0_1_ = 0x17;
      FUN_007380d0();
      fStack_e3c = (fStack_b4c - DAT_017ed818) / (fStack_b4c - fStack_b50);
      fStack_e40 = 0.0;
      fStack_e38 = 0.0;
      fStack_e34 = 0.0;
      uVar6 = FUN_00738030(&fStack_e40);
      local_14._0_1_ = 0x22;
      FUN_00759b30(0x37ad34a3,uVar6);
      local_14._0_1_ = 0x17;
      FUN_007380d0();
      fStack_e3c = (fStack_b0c - DAT_017ed818) / (fStack_b0c - fStack_b10);
      fStack_e40 = 0.0;
      fStack_e38 = 0.0;
      fStack_e34 = 0.0;
      uVar6 = FUN_00738030(&fStack_e40);
      local_14._0_1_ = 0x23;
      FUN_00759b30(0x87863e84,uVar6);
      local_14._0_1_ = 0x17;
      FUN_007380d0();
      fStack_e3c = (fStack_abc - DAT_017ed818) / (fStack_abc - fStack_ac0);
      fStack_e40 = 0.0;
      fStack_e38 = 0.0;
      fStack_e34 = 0.0;
      uVar6 = FUN_00738030(&fStack_e40);
      local_14._0_1_ = 0x24;
      FUN_00759b30(0x76d09d19,uVar6);
      local_14._0_1_ = 0x17;
      FUN_007380d0();
      fStack_e3c = (fStack_a7c - DAT_017ed818) / (fStack_a7c - fStack_a80);
      fStack_e40 = 0.0;
      fStack_e38 = 0.0;
      fStack_e34 = 0.0;
      uVar6 = FUN_00738030(&fStack_e40);
      local_14._0_1_ = 0x25;
      FUN_00759b30(0x3d67aa40,uVar6);
      local_14._0_1_ = 0x17;
      FUN_007380d0();
      uVar6 = FUN_00737e90(uStack_b00);
      local_14._0_1_ = 0x26;
      FUN_00759b30(0xbc0a3372,uVar6);
      local_14._0_1_ = 0x17;
      FUN_00737fe0();
      uVar6 = FUN_00737e90(uStack_a70);
      local_14._0_1_ = 0x27;
      FUN_00759b30(0xfc632448,uVar6);
      local_14._0_1_ = 0x17;
      FUN_00737fe0();
      uVar6 = FUN_00737e90(uStack_a60);
      local_14._0_1_ = 0x28;
      FUN_00759b30(0x4bd6432d,uVar6);
      local_14._0_1_ = 0x17;
      FUN_00737fe0();
      uVar6 = FUN_00758ec0(*(int *)((int)param_1 + 0x14) + 0x20);
      local_14._0_1_ = 0x29;
      FUN_00759b30(0x20cdbf43,uVar6);
      local_14._0_1_ = 0x17;
      FUN_00758f50();
    }
    local_14 = CONCAT31(local_14._1_3_,0x16);
    FUN_00809ef0();
    local_14 = 0xffffffff;
    FUN_00809510();
  }
  if (*(int *)((int)param_1 + 0x50) != 0) {
    pfVar8 = (float *)SkyDefinition_lerpVector4(auStack_790,*(undefined4 *)((int)param_1 + 0x83c));
    fStack_30 = t_ * *pfVar8;
    fStack_2c = t_ * pfVar8[1];
    fStack_28 = t_ * pfVar8[2];
    fStack_24 = t_ * pfVar8[3];
    pfVar8 = (float *)SkyDefinition_lerpVector4(auStack_690,*(undefined4 *)((int)param_1 + 0x83c));
    fStack_bc0 = fVar17 * *pfVar8 + fStack_30;
    fStack_bbc = fVar17 * pfVar8[1] + fStack_2c;
    fStack_bb8 = fVar17 * pfVar8[2] + fStack_28;
    fStack_bb4 = fVar17 * pfVar8[3] + fStack_24;
    uVar6 = FUN_00745ec0(&fStack_bc0);
    local_14 = 0x2a;
    FUN_00759b30(0x3997d8cf,uVar6);
    local_14 = 0xffffffff;
    FUN_00745f50();
    uVar6 = *(undefined4 *)((int)param_1 + 0x83c);
    fVar14 = (float10)SkyDefinition_sampleFloatTrack5(uVar6);
    fVar15 = (float10)SkyDefinition_sampleFloatTrack5(uVar6);
    fVar14 = (float10)fcos(fVar15 * (float10)fVar17 + (float10)(float)(fVar14 * (float10)t_));
    uVar6 = FUN_00737e90((float)((float10)1 - fVar14));
    local_14 = 0x2b;
    FUN_00759b30(0x8085228a,uVar6);
    local_14 = 0xffffffff;
    FUN_00737fe0();
    uVar6 = *(undefined4 *)((int)param_1 + 0x83c);
    fVar14 = (float10)SkyDefinition_sampleFloatTrack6(uVar6);
    fVar15 = (float10)SkyDefinition_sampleFloatTrack6(uVar6);
    uVar6 = FUN_00737e90((float)(fVar15 * (float10)fVar17 + (float10)(float)(fVar14 * (float10)t_)))
    ;
    local_14 = 0x2c;
    FUN_00759b30(0x32d8cd69,uVar6);
    local_14 = 0xffffffff;
    FUN_00737fe0();
    uVar6 = *(undefined4 *)((int)param_1 + 0x83c);
    fVar14 = (float10)SkyDefinition_sampleFloatTrack7(uVar6);
    fVar15 = (float10)SkyDefinition_sampleFloatTrack7(uVar6);
    uVar6 = FUN_00737e90((float)(fVar15 * (float10)fVar17 + (float10)(float)(fVar14 * (float10)t_)))
    ;
    local_14 = 0x2d;
    FUN_00759b30(0x3a6dd1,uVar6);
    local_14 = 0xffffffff;
    FUN_00737fe0();
    fStack_30 = 0.0 - fStack_e00;
    fStack_2c = 0.0 - fStack_dfc;
    fStack_28 = 0.0 - fStack_df8;
    fStack_24 = 0.0 - fStack_df4;
    FUN_0073b8f0(&fStack_c30,*(int *)((int)param_1 + 0x14) + 0x40,&fStack_30);
    iVar7 = *(int *)((int)param_1 + 0x14);
    fVar18 = *(float *)(iVar7 + 0x24);
    fVar19 = *(float *)(iVar7 + 0x20);
    fVar1 = *(float *)(iVar7 + 0x28);
    fVar2 = *(float *)(iVar7 + 0x2c);
    fStack_950 = fVar19 * fStack_c30 + fVar18 * fStack_c20 + fVar1 * fStack_c10 + fVar2 * fStack_c00
    ;
    fStack_94c = fVar19 * fStack_c2c + fVar18 * fStack_c1c + fVar1 * fStack_c0c + fVar2 * fStack_bfc
    ;
    fStack_948 = fVar19 * fStack_c28 + fVar18 * fStack_c18 + fVar1 * fStack_c08 + fVar2 * fStack_bf8
    ;
    fStack_944 = fVar19 * fStack_c24 + fVar18 * fStack_c14 + fVar1 * fStack_c04 + fVar2 * fStack_bf4
    ;
    fVar18 = *(float *)(iVar7 + 0x34);
    fVar19 = *(float *)(iVar7 + 0x30);
    fVar1 = *(float *)(iVar7 + 0x38);
    fVar2 = *(float *)(iVar7 + 0x3c);
    fStack_940 = fVar19 * fStack_c30 + fVar18 * fStack_c20 + fVar1 * fStack_c10 + fVar2 * fStack_c00
    ;
    fStack_93c = fVar19 * fStack_c2c + fVar18 * fStack_c1c + fVar1 * fStack_c0c + fVar2 * fStack_bfc
    ;
    fStack_938 = fVar19 * fStack_c28 + fVar18 * fStack_c18 + fVar1 * fStack_c08 + fVar2 * fStack_bf8
    ;
    fStack_934 = fVar19 * fStack_c24 + fVar18 * fStack_c14 + fVar1 * fStack_c04 + fVar2 * fStack_bf4
    ;
    fVar18 = *(float *)(iVar7 + 0x44);
    fVar19 = *(float *)(iVar7 + 0x40);
    fVar1 = *(float *)(iVar7 + 0x48);
    fVar2 = *(float *)(iVar7 + 0x4c);
    fStack_930 = fVar19 * fStack_c30 + fVar18 * fStack_c20 + fVar1 * fStack_c10 + fVar2 * fStack_c00
    ;
    fStack_92c = fVar19 * fStack_c2c + fVar18 * fStack_c1c + fVar1 * fStack_c0c + fVar2 * fStack_bfc
    ;
    fStack_928 = fVar19 * fStack_c28 + fVar18 * fStack_c18 + fVar1 * fStack_c08 + fVar2 * fStack_bf8
    ;
    fStack_924 = fVar19 * fStack_c24 + fVar18 * fStack_c14 + fVar1 * fStack_c04 + fVar2 * fStack_bf4
    ;
    fVar18 = *(float *)(iVar7 + 0x54);
    fVar19 = *(float *)(iVar7 + 0x50);
    fVar1 = *(float *)(iVar7 + 0x58);
    fVar2 = *(float *)(iVar7 + 0x5c);
    fStack_920 = fVar19 * fStack_c30 + fVar18 * fStack_c20 + fVar1 * fStack_c10 + fVar2 * fStack_c00
    ;
    fStack_91c = fVar19 * fStack_c2c + fVar18 * fStack_c1c + fVar1 * fStack_c0c + fVar2 * fStack_bfc
    ;
    fStack_918 = fVar19 * fStack_c28 + fVar18 * fStack_c18 + fVar1 * fStack_c08 + fVar2 * fStack_bf8
    ;
    fStack_914 = fVar19 * fStack_c24 + fVar18 * fStack_c14 + fVar1 * fStack_c04 + fVar2 * fStack_bf4
    ;
    uVar6 = FUN_00758ec0(&fStack_950);
    local_14 = 0x2e;
    FUN_00759b30(0x20cdbf43,uVar6);
    local_14 = 0xffffffff;
    FUN_00758f50();
  }
  SkyDefinition_sampleSatelliteTrack(auStack_a50,*(undefined4 *)((int)param_1 + 0x83c));
  local_14 = 0x2f;
  puVar10 = auStack_a50;
  if (_DAT_0175b420 <= fStack_9d0) {
    puVar10 = auStack_a10;
  }
  Sky_LinearBlendControllerTransform5_setTarget
            ((void *)((int)param_1 + 0x750),puVar10,1.0,param_2,*(float *)((int)param_1 + 0x834));
  pvVar9 = (void *)FUN_0080adc0(auStack_c0);
  local_14._0_1_ = 0x30;
  AnimationBinding_copyTwoChannels(auStack_a50,pvVar9);
  local_14._0_1_ = 0x2f;
  FUN_00809570();
  if (*(int *)((int)param_1 + 0x54) != 0) {
    fVar14 = (float10)fsin((float10)fStack_a20 * (float10)DAT_017649d4);
    uVar6 = FUN_00737e90((float)((float10)1 / fVar14));
    local_14._0_1_ = 0x31;
    FUN_00759b30(0xa25dfe23,uVar6);
    local_14._0_1_ = 0x2f;
    FUN_00737fe0();
    fVar14 = (float10)fsin((float10)fStack_9e0 * (float10)DAT_017649d4);
    uVar6 = FUN_00737e90((float)((float10)1 / fVar14));
    local_14._0_1_ = 0x32;
    FUN_00759b30(0x8c13d18f,uVar6);
    local_14._0_1_ = 0x2f;
    FUN_00737fe0();
    iVar7 = AnimationBinding_getPrimaryValue2C(pvStack_a40);
    uVar6 = FUN_00755770(iVar7);
    local_14._0_1_ = 0x33;
    FUN_00759b30(0x35ea75c5,uVar6);
    local_14._0_1_ = 0x2f;
    FUN_00748150();
    iVar7 = AnimationBinding_getPrimaryValue2C(pvStack_a00);
    uVar6 = FUN_00755770(iVar7);
    local_14._0_1_ = 0x34;
    FUN_00759b30(0xc39f1130,uVar6);
    local_14._0_1_ = 0x2f;
    FUN_00748150();
    uVar6 = Vector4_lerp(auStack_720,auStack_a30,auStack_9f0,fStack_9d0);
    uVar6 = FUN_00738030(uVar6);
    local_14._0_1_ = 0x35;
    FUN_00759b30(0x24de135,uVar6);
    local_14._0_1_ = 0x2f;
    FUN_007380d0();
    uVar6 = FUN_00737e90(fStack_9d0);
    local_14._0_1_ = 0x36;
    FUN_00759b30(0xbc0a3372,uVar6);
    local_14._0_1_ = 0x2f;
    FUN_00737fe0();
    pfVar8 = (float *)SkyDefinition_lerpVector4(auStack_830,*(undefined4 *)((int)param_1 + 0x83c));
    fStack_30 = t_ * *pfVar8;
    fStack_2c = t_ * pfVar8[1];
    fStack_28 = t_ * pfVar8[2];
    fStack_24 = t_ * pfVar8[3];
    pfVar8 = (float *)SkyDefinition_lerpVector4(auStack_710,*(undefined4 *)((int)param_1 + 0x83c));
    fStack_bd0 = fVar17 * *pfVar8 + fStack_30;
    fStack_bcc = fVar17 * pfVar8[1] + fStack_2c;
    fStack_bc8 = fVar17 * pfVar8[2] + fStack_28;
    fStack_bc4 = fVar17 * pfVar8[3] + fStack_24;
    uVar6 = FUN_00745ec0(&fStack_bd0);
    local_14._0_1_ = 0x37;
    FUN_00759b30(0x3ccd8fa4,uVar6);
    local_14._0_1_ = 0x2f;
    FUN_00745f50();
    uVar6 = *(undefined4 *)((int)param_1 + 0x83c);
    fVar14 = (float10)SkyDefinition_sampleFloatTrack2(uVar6);
    fVar15 = (float10)SkyDefinition_sampleFloatTrack2(uVar6);
    uVar6 = FUN_00737e90((float)(fVar15 * (float10)fVar17 + (float10)(float)(fVar14 * (float10)t_)))
    ;
    local_14._0_1_ = 0x38;
    FUN_00759b30(0xf0d0cbbb,uVar6);
    local_14._0_1_ = 0x2f;
    FUN_00737fe0();
    uVar6 = *(undefined4 *)((int)param_1 + 0x83c);
    fVar14 = (float10)SkyDefinition_sampleFloatTrack3(uVar6);
    fVar15 = (float10)SkyDefinition_sampleFloatTrack3(uVar6);
    fVar14 = (float10)fcos(fVar15 * (float10)fVar17 + (float10)(float)(fVar14 * (float10)t_));
    uVar6 = FUN_00737e90((float)((float10)1 - fVar14));
    local_14._0_1_ = 0x39;
    FUN_00759b30(0x30189985,uVar6);
    local_14._0_1_ = 0x2f;
    FUN_00737fe0();
    uVar6 = *(undefined4 *)((int)param_1 + 0x83c);
    fVar14 = (float10)SkyDefinition_sampleFloatTrack4(uVar6);
    fVar15 = (float10)SkyDefinition_sampleFloatTrack4(uVar6);
    uVar6 = FUN_00737e90((float)(fVar15 * (float10)fVar17 + (float10)(float)(fVar14 * (float10)t_)))
    ;
    local_14._0_1_ = 0x3a;
    FUN_00759b30(0x1eb8f8a6,uVar6);
    local_14._0_1_ = 0x2f;
    FUN_00737fe0();
    uVar6 = FUN_00737e90(_DAT_0175b420 / fStack_e44);
    local_14._0_1_ = 0x3b;
    FUN_00759b30(0xaabde40e,uVar6);
    local_14._0_1_ = 0x2f;
    FUN_00737fe0();
    fStack_30 = 0.0 - fStack_e00;
    fStack_2c = 0.0 - fStack_dfc;
    fStack_28 = 0.0 - fStack_df8;
    fStack_24 = 0.0 - fStack_df4;
    uVar6 = FUN_007388b0(2);
    FUN_0073b8f0(&fStack_c30,uVar6);
    iVar7 = *(int *)((int)param_1 + 0x14);
    fVar18 = *(float *)(iVar7 + 0x24);
    fVar19 = *(float *)(iVar7 + 0x20);
    fVar1 = *(float *)(iVar7 + 0x28);
    fVar2 = *(float *)(iVar7 + 0x2c);
    fStack_910 = fVar19 * fStack_c30 + fVar18 * fStack_c20 + fVar1 * fStack_c10 + fVar2 * fStack_c00
    ;
    fStack_90c = fVar19 * fStack_c2c + fVar18 * fStack_c1c + fVar1 * fStack_c0c + fVar2 * fStack_bfc
    ;
    fStack_908 = fVar19 * fStack_c28 + fVar18 * fStack_c18 + fVar1 * fStack_c08 + fVar2 * fStack_bf8
    ;
    fStack_904 = fVar19 * fStack_c24 + fVar18 * fStack_c14 + fVar1 * fStack_c04 + fVar2 * fStack_bf4
    ;
    fVar18 = *(float *)(iVar7 + 0x34);
    fVar19 = *(float *)(iVar7 + 0x30);
    fVar1 = *(float *)(iVar7 + 0x38);
    fVar2 = *(float *)(iVar7 + 0x3c);
    fStack_900 = fVar19 * fStack_c30 + fVar18 * fStack_c20 + fVar1 * fStack_c10 + fVar2 * fStack_c00
    ;
    fStack_8fc = fVar19 * fStack_c2c + fVar18 * fStack_c1c + fVar1 * fStack_c0c + fVar2 * fStack_bfc
    ;
    fStack_8f8 = fVar19 * fStack_c28 + fVar18 * fStack_c18 + fVar1 * fStack_c08 + fVar2 * fStack_bf8
    ;
    fStack_8f4 = fVar19 * fStack_c24 + fVar18 * fStack_c14 + fVar1 * fStack_c04 + fVar2 * fStack_bf4
    ;
    fVar18 = *(float *)(iVar7 + 0x44);
    fVar19 = *(float *)(iVar7 + 0x40);
    fVar1 = *(float *)(iVar7 + 0x48);
    fVar2 = *(float *)(iVar7 + 0x4c);
    fStack_8f0 = fVar19 * fStack_c30 + fVar18 * fStack_c20 + fVar1 * fStack_c10 + fVar2 * fStack_c00
    ;
    fStack_8ec = fVar19 * fStack_c2c + fVar18 * fStack_c1c + fVar1 * fStack_c0c + fVar2 * fStack_bfc
    ;
    fStack_8e8 = fVar19 * fStack_c28 + fVar18 * fStack_c18 + fVar1 * fStack_c08 + fVar2 * fStack_bf8
    ;
    fStack_8e4 = fVar19 * fStack_c24 + fVar18 * fStack_c14 + fVar1 * fStack_c04 + fVar2 * fStack_bf4
    ;
    fVar18 = *(float *)(iVar7 + 0x54);
    fVar19 = *(float *)(iVar7 + 0x50);
    fVar1 = *(float *)(iVar7 + 0x58);
    fVar2 = *(float *)(iVar7 + 0x5c);
    fStack_8e0 = fVar19 * fStack_c30 + fVar18 * fStack_c20 + fVar1 * fStack_c10 + fVar2 * fStack_c00
    ;
    fStack_8dc = fVar19 * fStack_c2c + fVar18 * fStack_c1c + fVar1 * fStack_c0c + fVar2 * fStack_bfc
    ;
    fStack_8d8 = fVar19 * fStack_c28 + fVar18 * fStack_c18 + fVar1 * fStack_c08 + fVar2 * fStack_bf8
    ;
    fStack_8d4 = fVar19 * fStack_c24 + fVar18 * fStack_c14 + fVar1 * fStack_c04 + fVar2 * fStack_bf4
    ;
    uVar6 = FUN_00758ec0(&fStack_910);
    local_14._0_1_ = 0x3c;
    FUN_00759b30(0x20cdbf43,uVar6);
    local_14 = CONCAT31(local_14._1_3_,0x2f);
    FUN_00758f50();
  }
  local_14 = 0xffffffff;
  FUN_00809570();
  SkyDefinition_sampleTintedTextureTrack2(auStack_370,*(undefined4 *)((int)param_1 + 0x83c));
  local_14 = 0x3d;
  FUN_0080ab00(auStack_370,t_,param_2,*(undefined4 *)((int)param_1 + 0x834));
  FUN_0080ad50(auStack_680);
  local_14._0_1_ = 0x3e;
  if (*(int *)((int)param_1 + 0x58) != 0) {
    iVar7 = AnimationBinding_getPrimaryValue2C(pvStack_670);
    uVar6 = FUN_00755770(iVar7);
    local_14._0_1_ = 0x3f;
    FUN_00759b30(0x87ff2e9a,uVar6);
    local_14._0_1_ = 0x3e;
    FUN_00748150();
    iVar7 = AnimationBinding_getPrimaryValue2C(pvStack_640);
    uVar6 = FUN_00755770(iVar7);
    local_14._0_1_ = 0x40;
    FUN_00759b30(0x62c973db,uVar6);
    local_14._0_1_ = 0x3e;
    FUN_00748150();
    iVar7 = AnimationBinding_getPrimaryValue2C(pvStack_600);
    uVar6 = FUN_00755770(iVar7);
    local_14._0_1_ = 0x41;
    FUN_00759b30(0x7499177e,uVar6);
    local_14._0_1_ = 0x3e;
    FUN_00748150();
    iVar7 = AnimationBinding_getPrimaryValue2C(pvStack_5d0);
    uVar6 = FUN_00755770(iVar7);
    local_14._0_1_ = 0x42;
    FUN_00759b30(0x7d5328f2,uVar6);
    local_14._0_1_ = 0x3e;
    FUN_00748150();
    fVar18 = SkyDefinition_floorWrappedTime(fStack_620);
    uVar6 = FUN_00737e90(fVar18);
    local_14._0_1_ = 0x43;
    FUN_00759b30(0xbc0a3372,uVar6);
    local_14._0_1_ = 0x3e;
    FUN_00737fe0();
    fVar18 = SkyDefinition_floorWrappedTime(fStack_5b0);
    uVar6 = FUN_00737e90(fVar18);
    local_14._0_1_ = 0x44;
    FUN_00759b30(0xfc632448,uVar6);
    local_14._0_1_ = 0x3e;
    FUN_00737fe0();
    fVar18 = SkyDefinition_floorWrappedTime(fStack_5a0);
    uVar6 = FUN_00737e90(fVar18);
    local_14._0_1_ = 0x45;
    FUN_00759b30(0x4bd6432d,uVar6);
    local_14._0_1_ = 0x3e;
    FUN_00737fe0();
    uVar6 = FUN_00758ec0(*(int *)((int)param_1 + 0x14) + 0x20);
    local_14._0_1_ = 0x46;
    FUN_00759b30(0x20cdbf43,uVar6);
    local_14._0_1_ = 0x3e;
    FUN_00758f50();
    AnimationBinding_setOwnerDirty(*(void **)((int)param_1 + 0x14),param_1);
  }
  local_14 = CONCAT31(local_14._1_3_,0x3d);
  FUN_00807a80();
  local_14 = 0xffffffff;
  SkyDefinition_TintedTexturePair_dtor();
  SkyDefinition_sampleTintedTextureTrack3(auStack_9c0,*(undefined4 *)((int)param_1 + 0x83c));
  local_14 = 0x47;
  puVar10 = auStack_9c0;
  if (_DAT_0175b420 <= fStack_960) {
    puVar10 = auStack_990;
  }
  Sky_LinearBlendControllerTransform4_setTarget
            ((void *)((int)param_1 + 0x6a0),unused,puVar10,t_,param_2,
             *(float *)((int)param_1 + 0x834));
  uVar6 = FUN_008082d0(auStack_130);
  local_14._0_1_ = 0x48;
  FUN_00805340(uVar6);
  local_14._0_1_ = 0x47;
  SkyDefinition_TintedTexturePair_dtor();
  if (*(int *)((int)param_1 + 0x5c) != 0) {
    iVar7 = AnimationBinding_getPrimaryValue2C(pvStack_9b0);
    uVar6 = FUN_00755770(iVar7);
    local_14._0_1_ = 0x49;
    FUN_00759b30(0x87ff2e9a,uVar6);
    local_14._0_1_ = 0x47;
    FUN_00748150();
    iVar7 = AnimationBinding_getPrimaryValue2C(pvStack_980);
    uVar6 = FUN_00755770(iVar7);
    local_14._0_1_ = 0x4a;
    FUN_00759b30(0x62c973db,uVar6);
    local_14._0_1_ = 0x47;
    FUN_00748150();
    fVar18 = SkyDefinition_floorWrappedTime(fStack_960);
    uVar6 = FUN_00737e90(fVar18);
    local_14._0_1_ = 0x4b;
    FUN_00759b30(0xbc0a3372,uVar6);
    local_14._0_1_ = 0x47;
    FUN_00737fe0();
    uVar6 = FUN_00758ec0(*(int *)((int)param_1 + 0x14) + 0x20);
    local_14._0_1_ = 0x4c;
    FUN_00759b30(0x20cdbf43,uVar6);
    local_14 = CONCAT31(local_14._1_3_,0x47);
    FUN_00758f50();
  }
  local_14 = 0xffffffff;
  SkyDefinition_TintedTexturePair_dtor();
  uVar6 = *(undefined4 *)((int)param_1 + 0x83c);
  fVar14 = (float10)SkyDefinition_sampleFloatTrack0(uVar6);
  fVar15 = (float10)SkyDefinition_sampleFloatTrack0(uVar6);
  fStack_e44 = (float)(fVar15 * (float10)t_ + (float10)(float)(fVar14 * (float10)fVar17));
  fVar15 = (float10)SkyDefinition_sampleFloatTrack1(uVar6);
  fVar16 = (float10)SkyDefinition_sampleFloatTrack1(uVar6);
  bVar3 = *(byte *)(*(int *)((int)param_1 + 0x68) + 0x138);
  fVar14 = (float10)fStack_e44;
  if (*(int *)((int)param_1 + 0x60) == 0) {
    pvVar9 = (void *)0x0;
  }
  else {
    pvVar9 = *(void **)(*(int *)((int)param_1 + 0x60) + 0x18);
  }
  AnimationBinding_setSharedTarget(*(void **)((int)param_1 + 0x6c),pvVar9);
  pfVar8 = (float *)SkyDefinition_sampleTintedTextureAndDestroy
                              (auStack_880,*(undefined4 *)((int)param_1 + 0x83c));
  fStack_30 = *pfVar8;
  fStack_2c = pfVar8[1];
  fStack_28 = pfVar8[2];
  fStack_24 = pfVar8[3];
  pfVar8 = (float *)SkyDefinition_sampleTintedTextureAndDestroy
                              (auStack_840,*(undefined4 *)((int)param_1 + 0x83c));
  fStack_b90 = *pfVar8 * fVar17 + t_ * fStack_30;
  fStack_b8c = pfVar8[1] * fVar17 + t_ * fStack_2c;
  fStack_b88 = pfVar8[2] * fVar17 + t_ * fStack_28;
  fStack_b84 = pfVar8[3] * fVar17 + t_ * fStack_24;
  fStack_e40 = t_;
  fStack_e3c = t_;
  fStack_e38 = t_;
  fStack_e34 = t_;
  fStack_e20 = fVar17;
  fStack_e1c = fVar17;
  fStack_e18 = fVar17;
  fStack_e14 = fVar17;
  AnimationBinding_applySlotB4(*(void **)((int)param_1 + 0x6c),(int)&fStack_b90);
  pfVar8 = (float *)SkyDefinition_sampleTintedTextureTrackAndDestroy
                              (auStack_850,*(undefined4 *)((int)param_1 + 0x83c));
  fStack_30 = *pfVar8;
  fStack_2c = pfVar8[1];
  fStack_28 = pfVar8[2];
  fStack_24 = pfVar8[3];
  pfVar8 = (float *)SkyDefinition_sampleTintedTextureTrackAndDestroy
                              (auStack_820,*(undefined4 *)((int)param_1 + 0x83c));
  fStack_bb0 = *pfVar8 * fStack_e20 + fStack_e40 * fStack_30;
  fStack_bac = pfVar8[1] * fStack_e1c + fStack_e3c * fStack_2c;
  fStack_ba8 = pfVar8[2] * fStack_e18 + fStack_e38 * fStack_28;
  fStack_ba4 = pfVar8[3] * fStack_e14 + fStack_e34 * fStack_24;
  AnimationBinding_applySlotB8(*(void **)((int)param_1 + 0x6c),(int)&fStack_bb0);
  pfVar8 = (float *)SkyDefinition_sampleTwoTintedTextureTracks
                              (auStack_800,*(undefined4 *)((int)param_1 + 0x83c));
  fStack_30 = *pfVar8;
  fStack_2c = pfVar8[1];
  fStack_28 = pfVar8[2];
  fStack_24 = pfVar8[3];
  pfVar8 = (float *)SkyDefinition_sampleTwoTintedTextureTracks
                              (auStack_6d0,*(undefined4 *)((int)param_1 + 0x83c));
  fStack_ba0 = *pfVar8 * fStack_e20 + fStack_e40 * fStack_30;
  fStack_b9c = pfVar8[1] * fStack_e1c + fStack_e3c * fStack_2c;
  fStack_b98 = pfVar8[2] * fStack_e18 + fStack_e38 * fStack_28;
  fStack_b94 = pfVar8[3] * fStack_e14 + fStack_e34 * fStack_24;
  AnimationBinding_applySlotC0(*(void **)((int)param_1 + 0x6c),(int)&fStack_ba0);
  FUN_007fc620(&fStack_e00,param_2);
  pfVar8 = (float *)SkyDefinition_lerpVector4(auStack_810,*(undefined4 *)((int)param_1 + 0x83c));
  fStack_30 = *pfVar8;
  fStack_2c = pfVar8[1];
  fStack_28 = pfVar8[2];
  fStack_24 = pfVar8[3];
  pfVar8 = (float *)SkyDefinition_lerpVector4(auStack_700,*(undefined4 *)((int)param_1 + 0x83c));
  fStack_be4 = _DAT_0175b420 -
               (float)(((float10)1 - (float10)bVar3 * fVar14) *
                      (fVar16 * (float10)t_ + (float10)(float)(fVar15 * (float10)fVar17)));
  fStack_bf0 = (*pfVar8 * fStack_e20 + fStack_e40 * fStack_30) * fStack_be4;
  fStack_bec = (pfVar8[1] * fStack_e1c + fStack_e3c * fStack_2c) * fStack_be4;
  fStack_be8 = (pfVar8[2] * fStack_e18 + fStack_e38 * fStack_28) * fStack_be4;
  fStack_be4 = (pfVar8[3] * fStack_e14 + fStack_e34 * fStack_24) * fStack_be4;
  AnimationBinding_applySlotAC(*(void **)((int)param_1 + 0x68),(int)&fStack_bf0);
  pvVar9 = *(void **)((int)param_1 + 0x68);
  iVar7 = *(int *)((int)param_1 + 0x18);
  *(float *)((int)pvVar9 + 0x134) = fStack_e44;
  AnimationBinding_applySlotB0(pvVar9,*(int *)(iVar7 + 0x27f4));
  thunk_FUN_007faed0(*(undefined4 *)((int)param_1 + 0x894));
  thunk_FUN_007fa900(*(int *)((int)param_1 + 0x18) + 0x2800);
  thunk_FUN_007fa980(*(int *)((int)param_1 + 0x18) + 0x2810);
  pvVar9 = *(void **)((int)param_1 + 0x83c);
  this = *(void **)((int)param_1 + 0x18);
  fVar18 = FloatKeyTree_sampleInterpolated(pvVar13,pvVar9);
  fVar19 = FloatKeyTree_sampleInterpolated(this,pvVar9);
  fVar19 = fVar19 * t_ + fVar18 * fVar17;
  fVar14 = (float10)SkyDefinition_sampleFloatTrack10(pvVar9);
  fStack_e24 = (float)(fVar14 * (float10)fVar17);
  fVar14 = (float10)SkyDefinition_sampleFloatTrack10(pvVar9);
  fStack_e44 = _DAT_0175b420;
  local_e48 = *(void **)((int)param_1 + 0x840);
  fStack_e24 = (float)(fVar14 * (float10)t_ + (float10)fStack_e24);
  fStack_e28 = (float)local_e48 / fVar19;
  fVar14 = (float10)FUN_00759770(&fStack_e28,&fStack_e44);
  fStack_e44 = (float)fVar14;
  fStack_e28 = _DAT_0175b420;
  local_e48 = (void *)((float)local_e48 / fStack_e24);
  fVar14 = (float10)FUN_0075bcb0(&local_e48,&fStack_e44,&fStack_e28);
  fStack_e28 = (float)fVar14;
  fVar18 = (float)(fVar14 * (float10)fStack_e24);
  fVar14 = (float10)SkyDefinition_sampleFloatTrack9(pvVar9);
  local_e48 = (void *)(float)(fVar14 * (float10)fVar17);
  fVar14 = (float10)SkyDefinition_sampleFloatTrack9(pvVar9);
  AnimationBinding_applyFloatPairB8
            (*(void **)((int)param_1 + 0x70),
             (float)((fVar14 * (float10)t_ + (float10)(float)local_e48) * (float10)fStack_e28),
             fVar18);
  uVar6 = *(undefined4 *)((int)param_1 + 0x83c);
  fVar19 = fStack_e44 * fVar19;
  fVar14 = (float10)SkyDefinition_sampleFloatTrack11(uVar6);
  local_e48 = (void *)(float)(fVar14 * (float10)t_);
  fVar14 = (float10)SkyDefinition_sampleFloatTrack11(uVar6);
  AnimationBinding_applyFloatPairBC
            (*(void **)((int)param_1 + 0x70),
             (float)((fVar14 * (float10)fVar17 + (float10)(float)local_e48) * (float10)fStack_e44),
             fVar19);
  pfVar8 = (float *)SkyDefinition_lerpVector4(auStack_7f0,*(undefined4 *)((int)param_1 + 0x83c));
  fStack_30 = *pfVar8;
  fStack_2c = pfVar8[1];
  fStack_28 = pfVar8[2];
  fStack_24 = pfVar8[3];
  pfVar8 = (float *)SkyDefinition_lerpVector4(auStack_6a0,*(undefined4 *)((int)param_1 + 0x83c));
  fStack_be0 = *pfVar8 * fStack_e20 + fStack_e40 * fStack_30;
  fStack_bdc = pfVar8[1] * fStack_e1c + fStack_e3c * fStack_2c;
  fStack_bd8 = pfVar8[2] * fStack_e18 + fStack_e38 * fStack_28;
  fStack_bd4 = pfVar8[3] * fStack_e14 + fStack_e34 * fStack_24;
  AnimationBinding_applySlotC4(*(void **)((int)param_1 + 0x70),(int)&fStack_be0);
  uVar6 = *(undefined4 *)((int)param_1 + 0x83c);
  fVar14 = (float10)SkyDefinition_sampleFloatTrack8(uVar6);
  local_e48 = (void *)(float)(fVar14 * (float10)t_);
  fVar14 = (float10)SkyDefinition_sampleFloatTrack8(uVar6);
  AnimationBinding_applySlotBC
            (*(void **)((int)param_1 + 0x70),
             (int)(float)(fVar14 * (float10)fVar17 + (float10)(float)local_e48));
  uVar6 = *(undefined4 *)((int)param_1 + 0x83c);
  fVar14 = (float10)SkyDefinition_sampleFloatTrack12(uVar6);
  local_e48 = (void *)(float)(fVar14 * (float10)fVar17);
  fVar14 = (float10)SkyDefinition_sampleFloatTrack12(uVar6);
  fStack_30 = 0.0;
  fStack_2c = 0.0;
  *(float *)(*(int *)((int)param_1 + 0x74) + 0xa0) =
       (float)(fVar14 * (float10)t_ + (float10)(float)local_e48);
  uVar6 = *(undefined4 *)((int)param_1 + 0x83c);
  fVar14 = (float10)SkyDefinition_sampleFloatTrack14(uVar6);
  local_e48 = (void *)(float)(fVar14 * (float10)fVar17);
  fVar14 = (float10)SkyDefinition_sampleFloatTrack14(uVar6);
  fStack_28 = (float)(fVar14 * (float10)t_ + (float10)(float)local_e48);
  fVar14 = (float10)SkyDefinition_sampleFloatTrack13(uVar6);
  local_e48 = (void *)(float)(fVar14 * (float10)fVar17);
  fVar14 = (float10)SkyDefinition_sampleFloatTrack13(uVar6);
  fStack_24 = (float)(fVar14 * (float10)t_ + (float10)(float)local_e48);
  AnimationBinding_setSecondarySlots(*(void **)((int)param_1 + 0x74),(int *)&fStack_30);
  pfVar8 = (float *)SkyDefinition_lerpVector4(auStack_7d0,*(undefined4 *)((int)param_1 + 0x83c));
  fStack_30 = *pfVar8;
  fStack_2c = pfVar8[1];
  fStack_28 = pfVar8[2];
  fStack_24 = pfVar8[3];
  pfVar8 = (float *)SkyDefinition_lerpVector4(auStack_8d0,*(undefined4 *)((int)param_1 + 0x83c));
  fStack_30 = *pfVar8 * fStack_e20 + fStack_e40 * fStack_30;
  fStack_2c = pfVar8[1] * fStack_e1c + fStack_e3c * fStack_2c;
  fStack_28 = pfVar8[2] * fStack_e18 + fStack_e38 * fStack_28;
  fStack_24 = pfVar8[3] * fStack_e14 + fStack_e34 * fStack_24;
  AnimationBinding_setTertiarySlots(*(void **)((int)param_1 + 0x74),(int *)&fStack_30);
  AnimationBinding_setFlagD0(*(void **)((int)param_1 + 0x74),*(char *)((int)param_1 + 0x839));
LAB_00811c35:
  if (*(float *)((int)param_1 + 0x830) == _DAT_0175b420) {
    FUN_008038d0((int)param_1 + 0x1c);
  }
  ExceptionList = local_1c;
  return;
}

