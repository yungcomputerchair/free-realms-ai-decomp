// addr: 0x00fddaa0
// name: FUN_00fddaa0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00fddaa0(int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
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
  float fVar21;
  uint uVar22;
  void *pvVar23;
  int extraout_EAX;
  int extraout_EAX_00;
  int iVar24;
  float *pfVar25;
  float *pfVar26;
  int iVar27;
  uint uVar28;
  int local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined1 auStack_60 [68];
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Builds a camera/effect or render descriptor from two objects, allocating
                       0x28/0x38-byte helpers and deriving vector/float parameters. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0162fdfc;
  local_1c = ExceptionList;
  uVar22 = DAT_01b839d8 ^ (uint)&stack0xfffffec0;
  ExceptionList = &local_1c;
  uVar28 = 0;
  if (((param_1[0x40] == 0) && (param_1[0x2c] != 0)) && (*(int *)(param_1[0x2c] + 4) < 0x14)) {
    pvVar23 = Mem_Alloc(0x28);
    local_14 = 0;
    if (pvVar23 == (void *)0x0) {
      iVar24 = 0;
    }
    else {
      init_two_owned_spans(pvVar23);
      iVar24 = extraout_EAX;
    }
    local_110 = _DAT_017ebf0c;
    local_14 = 0xffffffff;
    param_1[0x40] = iVar24;
    local_10c = 0x1000;
    local_108 = 0x1000;
    local_120 = 1.4013e-45;
    local_11c = *(float *)(param_1[0x2c] + 0x84);
    local_118 = *(float *)(param_1[0x2c] + 0x8c);
    local_114 = 2.24208e-44;
    pvVar23 = Mem_Alloc(0x38);
    local_14 = 1;
    if (pvVar23 == (void *)0x0) {
      iVar24 = 0;
    }
    else {
      init_dual_owned_buffers(pvVar23);
      iVar24 = extraout_EAX_00;
    }
    local_14 = 0xffffffff;
    param_1[0x41] = iVar24;
    iVar24 = FUN_01165960(&local_120,iVar24);
    if (iVar24 == 1) {
      pvVar23 = (void *)param_1[0x41];
      if (pvVar23 != (void *)0x0) {
        clear_dual_owned_buffers(pvVar23);
                    /* WARNING: Subroutine does not return */
        _free(pvVar23);
      }
      param_1[0x41] = 0;
    }
  }
  if ((param_1[0x41] != 0) && (*(int *)(param_1[0x41] + 0x1c) != 0)) {
    pfVar25 = (float *)(**(code **)(*param_1 + 0xc))(uVar22);
    pfVar26 = (float *)FUN_0073a2b0(auStack_60,param_1 + 0xc);
    fVar6 = pfVar25[4];
    fVar7 = pfVar25[5];
    fVar8 = pfVar25[6];
    fVar9 = pfVar25[7];
    fVar10 = *pfVar25;
    fVar11 = pfVar25[1];
    fVar12 = pfVar25[2];
    fVar13 = pfVar25[3];
    fVar1 = pfVar26[1];
    fVar2 = *pfVar26;
    fVar14 = pfVar25[8];
    fVar15 = pfVar25[9];
    fVar16 = pfVar25[10];
    fVar17 = pfVar25[0xb];
    fVar18 = pfVar25[0xc];
    fVar19 = pfVar25[0xd];
    fVar20 = pfVar25[0xe];
    fVar21 = pfVar25[0xf];
    fVar3 = pfVar26[2];
    fVar4 = pfVar26[3];
    fStack_100 = fVar1 * fVar6 + fVar2 * fVar10 + fVar3 * fVar14 + fVar4 * fVar18;
    fStack_fc = fVar1 * fVar7 + fVar2 * fVar11 + fVar3 * fVar15 + fVar4 * fVar19;
    fStack_f8 = fVar1 * fVar8 + fVar2 * fVar12 + fVar3 * fVar16 + fVar4 * fVar20;
    fStack_f4 = fVar1 * fVar9 + fVar2 * fVar13 + fVar3 * fVar17 + fVar4 * fVar21;
    fVar1 = pfVar26[4];
    fVar2 = pfVar26[5];
    fVar3 = pfVar26[6];
    fVar4 = pfVar26[7];
    fStack_e0 = fVar2 * fVar6 + fVar1 * fVar10 + fVar3 * fVar14 + fVar4 * fVar18;
    fStack_dc = fVar2 * fVar7 + fVar1 * fVar11 + fVar3 * fVar15 + fVar4 * fVar19;
    fStack_d8 = fVar2 * fVar8 + fVar1 * fVar12 + fVar3 * fVar16 + fVar4 * fVar20;
    fStack_d4 = fVar2 * fVar9 + fVar1 * fVar13 + fVar3 * fVar17 + fVar4 * fVar21;
    fVar1 = pfVar26[8];
    fVar2 = pfVar26[9];
    fVar3 = pfVar26[10];
    fVar4 = pfVar26[0xb];
    fStack_d0 = fVar2 * fVar6 + fVar1 * fVar10 + fVar3 * fVar14 + fVar4 * fVar18;
    fStack_cc = fVar2 * fVar7 + fVar1 * fVar11 + fVar3 * fVar15 + fVar4 * fVar19;
    fStack_c8 = fVar2 * fVar8 + fVar1 * fVar12 + fVar3 * fVar16 + fVar4 * fVar20;
    fStack_c4 = fVar2 * fVar9 + fVar1 * fVar13 + fVar3 * fVar17 + fVar4 * fVar21;
    fVar1 = pfVar26[0xc];
    fVar2 = pfVar26[0xd];
    fVar3 = pfVar26[0xe];
    fVar4 = pfVar26[0xf];
    if (*(int *)(param_1[0x41] + 0x1c) != 0) {
      fStack_b0 = (fVar2 * fVar6 + fVar1 * fVar10 + fVar3 * fVar14 + fVar4 * fVar18) * _DAT_0175b420
      ;
      fStack_ac = (fVar2 * fVar7 + fVar1 * fVar11 + fVar3 * fVar15 + fVar4 * fVar19) * _DAT_0175b420
      ;
      fStack_a8 = (fVar2 * fVar8 + fVar1 * fVar12 + fVar3 * fVar16 + fVar4 * fVar20) * _DAT_0175b420
      ;
      fStack_a4 = (fVar2 * fVar9 + fVar1 * fVar13 + fVar3 * fVar17 + fVar4 * fVar21) * _DAT_0175b420
      ;
      local_128 = 0;
      fStack_80 = fStack_d0;
      fStack_7c = fStack_cc;
      fStack_78 = fStack_c8;
      fStack_74 = fStack_c4;
      do {
        iVar24 = *(int *)(param_1[0x41] + 0x30);
        iVar5 = *(int *)(param_1[0x41] + 0x14);
        iVar27 = local_128 + iVar24;
        iVar24 = *(int *)(local_128 + iVar24) * 0x10;
        fVar1 = *(float *)(iVar24 + iVar5);
        fVar2 = *(float *)(iVar24 + 4 + iVar5);
        fVar3 = *(float *)(iVar24 + 8 + iVar5);
        local_120 = fVar2 * fStack_e0 + fVar1 * fStack_100 + fVar3 * fStack_d0 + fStack_b0;
        local_11c = fVar2 * fStack_dc + fVar1 * fStack_fc + fVar3 * fStack_cc + fStack_ac;
        local_118 = fVar2 * fStack_d8 + fVar1 * fStack_f8 + fVar3 * fStack_c8 + fStack_a8;
        local_114 = fVar2 * fStack_d4 + fVar1 * fStack_f4 + fVar3 * fStack_c4 + fStack_a4;
        iVar24 = *(int *)(iVar27 + 4) * 0x10;
        fVar1 = *(float *)(iVar24 + iVar5);
        fVar2 = *(float *)(iVar24 + 4 + iVar5);
        fVar3 = *(float *)(iVar24 + 8 + iVar5);
        pfVar25 = (float *)(*(int *)(iVar27 + 8) * 0x10 + iVar5);
        fStack_f0 = fVar2 * fStack_e0 + fVar1 * fStack_100 + fVar3 * fStack_d0 + fStack_b0;
        fStack_ec = fVar2 * fStack_dc + fVar1 * fStack_fc + fVar3 * fStack_cc + fStack_ac;
        fStack_e8 = fVar2 * fStack_d8 + fVar1 * fStack_f8 + fVar3 * fStack_c8 + fStack_a8;
        fStack_e4 = fVar2 * fStack_d4 + fVar1 * fStack_f4 + fVar3 * fStack_c4 + fStack_a4;
        fVar1 = *pfVar25;
        fVar2 = pfVar25[1];
        fVar3 = pfVar25[2];
        fStack_c0 = fVar2 * fStack_e0 + fVar1 * fStack_100 + fVar3 * fStack_d0 + fStack_b0;
        fStack_bc = fVar2 * fStack_dc + fVar1 * fStack_fc + fVar3 * fStack_cc + fStack_ac;
        fStack_b8 = fVar2 * fStack_d8 + fVar1 * fStack_f8 + fVar3 * fStack_c8 + fStack_a8;
        fStack_b4 = fVar2 * fStack_d4 + fVar1 * fStack_f4 + fVar3 * fStack_c4 + fStack_a4;
        (**(code **)(*param_2 + 4))(&local_120,&fStack_f0,&fStack_c0,0xffffff00,0);
        local_128 = local_128 + 0xc;
        uVar28 = uVar28 + 1;
      } while (uVar28 < *(uint *)(param_1[0x41] + 0x1c));
    }
  }
  ExceptionList = local_1c;
  return;
}

