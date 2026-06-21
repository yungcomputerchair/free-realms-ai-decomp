// addr: 0x004613ae
// name: FUN_004613ae
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: int FUN_004613ae(void * state, int * rect, int * currentTexture, void *
   meshBuilder) */

int __thiscall FUN_004613ae(void *this,void *state,int *rect,int *currentTexture,void *meshBuilder)

{
  short *psVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  void *slot;
  code *pcVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  undefined4 *puVar17;
  uint3 extraout_var;
  int iVar19;
  int iVar20;
  int *piVar21;
  void *unaff_EDI;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float10 extraout_ST1_02;
  float10 extraout_ST1_03;
  float10 fVar25;
  double dVar26;
  int local_38;
  int local_34;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_10;
  float local_c;
  float local_8;
  uint uVar18;
  
                    /* Builds textured quads across atlas/tile boundaries, updating vertex/index
                       buffers and texture-change batches. No rules-specific strings or RTTI are
                       present, so this weak-tier helper is left unnamed. */
  piVar21 = (int *)((int)state + 0x28);
  if (*(char *)((int)state + 0x30) == '\0') {
    piVar21 = (int *)((int)state + 8);
    local_34 = 0;
    local_38 = 0;
  }
  else {
    local_38 = *(int *)state - *(int *)((int)state + 0x20);
    local_34 = *(int *)((int)state + 4) - *(int *)((int)state + 0x24);
  }
  if (*(char *)this == '\0') {
    iVar16 = *(int *)((int)state + 0x38);
  }
  else {
    iVar16 = *(int *)((int)this + 0x84);
  }
  fVar7 = (float)_DAT_01764650;
  fVar23 = (float10)1;
  fVar6 = 1.0;
  if (*(char *)this != '\0') goto LAB_00461c3d;
  *(float *)((int)this + 4) = (float)*(int *)state - fVar7;
  *(float *)((int)this + 8) = (float)*(int *)((int)state + 4) - fVar7;
  *(float *)((int)this + 0xc) = (float)(*(int *)state + *(int *)((int)state + 8)) - fVar7;
  *(float *)((int)this + 0x10) =
       (float)(*(int *)((int)state + 4) + *(int *)((int)state + 0xc)) - fVar7;
  fVar3 = _DAT_017649e0;
  if (((*(int *)((int)state + 0x18) == *(int *)((int)state + 8)) &&
      (*(int *)((int)state + 0x1c) == *(int *)((int)state + 0xc))) &&
     (*(char *)((int)state + 0x30) == '\0')) {
    local_28 = (float)*(int *)((int)state + 0x10);
    local_24 = (float)*(int *)((int)state + 0x14);
    local_20 = (float)(*(int *)((int)state + 0x18) + *(int *)((int)state + 0x10));
    local_1c = (float)(*(int *)((int)state + 0x1c) + *(int *)((int)state + 0x14));
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x28) = 0;
    *(float *)((int)this + 0x14) = (float)fVar23;
    *(float *)((int)this + 0x18) = (float)fVar23;
  }
  else {
    local_1c = 0.0;
    iVar20 = *piVar21 * 2 + -2;
    iVar19 = piVar21[1];
    iVar13 = *(int *)((int)state + 0x1c);
    iVar14 = piVar21[1] * 2 + -2;
    local_20 = local_1c;
    if (iVar20 != 0) {
      local_20 = (float)(*piVar21 - *(int *)((int)state + 0x18)) / (float)iVar20;
    }
    *(float *)((int)this + 0x24) = local_20;
    if (iVar14 != 0) {
      local_1c = (float)(iVar19 - iVar13) / (float)iVar14;
    }
    *(float *)((int)this + 0x28) = local_1c;
    local_28 = (float)*(int *)((int)state + 0x10) + local_20;
    local_24 = (float)*(int *)((int)state + 0x14) + local_1c;
    local_20 = (float)(*(int *)((int)state + 0x18) + *(int *)((int)state + 0x10)) - local_20;
    local_1c = (float)(*(int *)((int)state + 0x1c) + *(int *)((int)state + 0x14)) - local_1c;
    fVar2 = local_20 - local_28;
    fVar10 = local_1c - local_24;
    *(float *)((int)this + 0x14) = fVar2 / (float)*piVar21;
    *(float *)((int)this + 0x18) = fVar10 / (float)piVar21[1];
    fVar11 = 1.0;
    if (*(char *)((int)state + 0x30) != '\0') {
      if (fVar3 < fVar2) {
        fVar11 = (float)*piVar21 / fVar2;
      }
      *(float *)((int)this + 0x1c) = fVar11;
      if (fVar3 < fVar10) {
        fVar6 = (float)piVar21[1] / fVar10;
      }
      *(float *)((int)this + 0x20) = fVar6;
      local_28 = (float)local_38 * *(float *)((int)this + 0x14) + local_28;
      local_24 = (float)local_34 * *(float *)((int)this + 0x18) + local_24;
      local_20 = (float)*(int *)((int)state + 8) * *(float *)((int)this + 0x14) + local_28;
      local_1c = (float)*(int *)((int)state + 0xc) * *(float *)((int)this + 0x18) + local_24;
    }
  }
  if (*(char *)((int)state + 0x30) == '\0') {
    *(float *)((int)this + 0x30) = local_28;
    iVar20 = FUN_00d83cc6();
    *(int *)((int)this + 0x2c) = iVar20;
    iVar14 = *(int *)(iVar16 + 0x44) + -1;
    if (iVar14 < iVar20) {
      iVar20 = iVar14;
    }
    if (iVar20 < 0) {
      iVar20 = 0;
    }
    *(int *)((int)this + 0x2c) = iVar20;
    if ((*(int *)(iVar20 * 0x3c + 0x14 + *(int *)(iVar16 + 0x4c)) == *(int *)((int)state + 0x10)) &&
       (iVar20 < *(int *)(iVar16 + 0x44) + -1)) {
      *(int *)((int)this + 0x2c) = iVar20 + 1;
    }
    *(float *)((int)this + 0x40) = local_24;
    fVar25 = extraout_ST1_02;
    iVar20 = FUN_00d83cc6();
    *(int *)((int)this + 0x3c) = iVar20;
    iVar14 = *(int *)(iVar16 + 0x48) + -1;
    if (iVar14 < iVar20) {
      iVar20 = iVar14;
    }
    if (iVar20 < 0) {
      iVar20 = 0;
    }
    *(int *)((int)this + 0x3c) = iVar20;
    if ((*(int *)(*(int *)(iVar16 + 0x44) * iVar20 * 0x3c + 0x18 + *(int *)(iVar16 + 0x4c)) ==
         *(int *)((int)state + 0x14)) && (iVar20 < *(int *)(iVar16 + 0x48) + -1)) {
      *(int *)((int)this + 0x3c) = iVar20 + 1;
    }
    *(float *)((int)this + 0x38) = local_20;
    iVar20 = FUN_00d83cc6();
    *(int *)((int)this + 0x34) = iVar20;
    iVar14 = *(int *)(iVar16 + 0x44) + -1;
    if (iVar14 < iVar20) {
      iVar20 = iVar14;
    }
    if (iVar20 < 0) {
      iVar20 = 0;
    }
    *(int *)((int)this + 0x34) = iVar20;
    *(float *)((int)this + 0x48) = local_1c;
    iVar20 = FUN_00d83cc6();
    *(int *)((int)this + 0x44) = iVar20;
    iVar14 = *(int *)(iVar16 + 0x48) + -1;
    if (iVar14 < iVar20) {
      iVar20 = iVar14;
    }
    if (iVar20 < 0) {
      iVar20 = 0;
    }
    *(int *)((int)this + 0x44) = iVar20;
    fVar24 = extraout_ST0_00;
    fVar22 = extraout_ST1_03;
    goto LAB_00461912;
  }
  iVar20 = *(int *)((int)state + 8);
  fVar3 = *(float *)((int)this + 0x14) * fVar7;
  iVar14 = *(int *)((int)state + 0xc);
  fVar7 = *(float *)((int)this + 0x18) * fVar7;
  fVar6 = (float)local_38 * *(float *)((int)this + 0x14) + (float)*(int *)((int)state + 0x10) +
          *(float *)((int)this + 0x24);
  *(float *)((int)this + 0x30) = fVar6;
  fVar6 = fVar6 + fVar3;
  iVar13 = FUN_00d83cc6();
  *(int *)((int)this + 0x2c) = iVar13;
  iVar19 = *(int *)(iVar16 + 0x44) + -1;
  if (iVar13 <= iVar19) {
    iVar19 = iVar13;
  }
  if (iVar19 < 0) {
    iVar19 = 0;
  }
  *(int *)((int)this + 0x2c) = iVar19;
  iVar13 = *(int *)(iVar16 + 0x4c) + iVar19 * 0x3c;
  if ((*(float *)(iVar13 + 0x2c) <= fVar6) || (iVar19 == 0)) {
    fVar2 = *(float *)(iVar13 + 0x34);
    if ((fVar2 < fVar6 != (fVar2 == fVar6)) && (iVar19 < *(int *)(iVar16 + 0x44) + -1)) {
      iVar19 = iVar19 + 1;
      goto LAB_00461692;
    }
  }
  else {
    iVar19 = iVar19 + -1;
LAB_00461692:
    *(int *)((int)this + 0x2c) = iVar19;
  }
  fVar6 = (float)local_34 * *(float *)((int)this + 0x18) + (float)*(int *)((int)state + 0x14) +
          *(float *)((int)this + 0x28);
  *(float *)((int)this + 0x40) = fVar6;
  fVar6 = fVar6 + fVar7;
  iVar13 = FUN_00d83cc6();
  *(int *)((int)this + 0x3c) = iVar13;
  iVar19 = *(int *)(iVar16 + 0x48) + -1;
  if (iVar13 <= iVar19) {
    iVar19 = iVar13;
  }
  if (iVar19 < 0) {
    iVar19 = 0;
  }
  *(int *)((int)this + 0x3c) = iVar19;
  iVar13 = *(int *)(iVar16 + 0x4c) + *(int *)(iVar16 + 0x44) * iVar19 * 0x3c;
  if ((*(float *)(iVar13 + 0x30) <= fVar6) || (iVar19 == 0)) {
    fVar2 = *(float *)(iVar13 + 0x38);
    if ((fVar2 < fVar6 != (fVar2 == fVar6)) && (iVar19 < *(int *)(iVar16 + 0x48) + -1)) {
      iVar19 = iVar19 + 1;
      goto LAB_00461712;
    }
  }
  else {
    iVar19 = iVar19 + -1;
LAB_00461712:
    *(int *)((int)this + 0x3c) = iVar19;
  }
  fVar6 = (float)(iVar20 + local_38) * *(float *)((int)this + 0x14) +
          (float)*(int *)((int)state + 0x10) + *(float *)((int)this + 0x24);
  *(float *)((int)this + 0x38) = fVar6;
  fVar6 = fVar6 - fVar3;
  fVar23 = extraout_ST1;
  iVar19 = FUN_00d83cc6();
  *(int *)((int)this + 0x34) = iVar19;
  iVar20 = *(int *)(iVar16 + 0x44) + -1;
  if (iVar19 <= iVar20) {
    iVar20 = iVar19;
  }
  if (iVar20 < 0) {
    iVar20 = 0;
  }
  *(int *)((int)this + 0x34) = iVar20;
  iVar19 = *(int *)(iVar16 + 0x4c) + iVar20 * 0x3c;
  if ((*(float *)(iVar19 + 0x2c) <= fVar6) || (iVar20 == 0)) {
    fVar3 = *(float *)(iVar19 + 0x34);
    if ((fVar3 < fVar6 != (fVar3 == fVar6)) && (iVar20 < *(int *)(iVar16 + 0x44) + -1)) {
      iVar20 = iVar20 + 1;
      goto LAB_0046178e;
    }
  }
  else {
    iVar20 = iVar20 + -1;
LAB_0046178e:
    *(int *)((int)this + 0x34) = iVar20;
  }
  fVar6 = (float)(iVar14 + local_34) * *(float *)((int)this + 0x18) +
          (float)*(int *)((int)state + 0x14) + *(float *)((int)this + 0x28);
  *(float *)((int)this + 0x48) = fVar6;
  fVar6 = fVar6 - fVar7;
  fVar25 = extraout_ST1_00;
  iVar14 = FUN_00d83cc6();
  *(int *)((int)this + 0x44) = iVar14;
  iVar20 = *(int *)(iVar16 + 0x48) + -1;
  if (iVar14 <= iVar20) {
    iVar20 = iVar14;
  }
  if (iVar20 < 0) {
    iVar20 = 0;
  }
  *(int *)((int)this + 0x44) = iVar20;
  iVar14 = *(int *)(iVar16 + 0x4c) + *(int *)(iVar16 + 0x44) * iVar20 * 0x3c;
  fVar24 = extraout_ST0;
  fVar22 = extraout_ST1_01;
  if ((*(float *)(iVar14 + 0x30) <= fVar6) || (iVar20 == 0)) {
    fVar7 = *(float *)(iVar14 + 0x38);
    if ((fVar7 < fVar6 == (fVar7 == fVar6)) || (*(int *)(iVar16 + 0x48) + -1 <= iVar20))
    goto LAB_00461912;
    iVar20 = iVar20 + 1;
  }
  else {
    iVar20 = iVar20 + -1;
  }
  *(int *)((int)this + 0x44) = iVar20;
LAB_00461912:
  piVar15 = (int *)((*(int *)(iVar16 + 0x44) * *(int *)((int)this + 0x3c) +
                    *(int *)((int)this + 0x2c)) * 0x3c + *(int *)(iVar16 + 0x4c));
  *(int **)((int)this + 100) = piVar15;
  if ((*(int *)((int)this + 0x2c) == *(int *)((int)this + 0x34)) &&
     (*(int *)((int)this + 0x3c) == *(int *)((int)this + 0x44))) {
    *(int **)((int)this + 0x68) = piVar15;
    piVar21 = (int *)(*piVar15 * 0x14 + *(int *)(iVar16 + 0x40));
    if (*rect != *piVar21) {
      if (currentTexture[0x28] != 0) {
        puVar17 = (undefined4 *)
                  (*(int *)(currentTexture[0x26] + 0x1c) + *(int *)(currentTexture[0x26] + 0x24) * 8
                  );
        puVar17[1] = currentTexture[0x28];
        *puVar17 = 1;
        *(int *)(currentTexture[0x26] + 0x24) = *(int *)(currentTexture[0x26] + 0x24) + 1;
        currentTexture[0x28] = 0;
      }
      iVar16 = *piVar21;
      *rect = iVar16;
      if (iVar16 == 0) {
        pcVar9 = (code *)swi(3);
        iVar16 = (*pcVar9)();
        return iVar16;
      }
      unknown_refSlot_setObject
                ((void *)(*(int *)(currentTexture[0x26] + 0x1c) +
                         *(int *)(currentTexture[0x26] + 0x24) * 8),(void *)*rect,unaff_EDI);
      fVar23 = (float10)1;
      fVar22 = (float10)0;
      *(int *)(currentTexture[0x26] + 0x24) = *(int *)(currentTexture[0x26] + 0x24) + 1;
    }
    iVar16 = *(int *)((int)this + 0x68);
    fVar6 = ((*(float *)((int)this + 0x30) - *(float *)(iVar16 + 0x1c)) +
            (float)*(int *)(iVar16 + 4)) * (float)piVar21[3];
    fVar7 = ((*(float *)((int)this + 0x38) - *(float *)(iVar16 + 0x1c)) +
            (float)*(int *)(iVar16 + 4)) * (float)piVar21[3];
    fVar3 = ((*(float *)((int)this + 0x40) - *(float *)(iVar16 + 0x20)) +
            (float)*(int *)(iVar16 + 8)) * (float)piVar21[4];
    fVar2 = ((*(float *)((int)this + 0x48) - *(float *)(iVar16 + 0x20)) +
            (float)*(int *)(iVar16 + 8)) * (float)piVar21[4];
    piVar21 = (int *)currentTexture[0x26];
    uVar4 = *(undefined4 *)((int)this + 0x10);
    puVar17 = (undefined4 *)(piVar21[2] * 0x1c + *piVar21);
    psVar1 = (short *)(piVar21[4] + piVar21[6] * 2);
    sVar8 = (short)piVar21[3];
    *puVar17 = *(undefined4 *)((int)this + 4);
    puVar17[1] = uVar4;
    puVar17[2] = (float)fVar22;
    puVar17[3] = (float)fVar23;
    puVar17[4] = *(undefined4 *)((int)state + 0x34);
    puVar17[5] = fVar6;
    puVar17[6] = fVar2;
    uVar4 = *(undefined4 *)((int)this + 8);
    puVar17[7] = *(undefined4 *)((int)this + 4);
    puVar17[8] = uVar4;
    puVar17[9] = (float)fVar22;
    puVar17[10] = (float)fVar23;
    puVar17[0xb] = *(undefined4 *)((int)state + 0x34);
    puVar17[0xc] = fVar6;
    puVar17[0xd] = fVar3;
    uVar4 = *(undefined4 *)((int)this + 8);
    puVar17[0xe] = *(undefined4 *)((int)this + 0xc);
    puVar17[0xf] = uVar4;
    puVar17[0x10] = (float)fVar22;
    puVar17[0x11] = (float)fVar23;
    puVar17[0x12] = *(undefined4 *)((int)state + 0x34);
    puVar17[0x13] = fVar7;
    puVar17[0x14] = fVar3;
    uVar4 = *(undefined4 *)((int)this + 0x10);
    puVar17[0x15] = *(undefined4 *)((int)this + 0xc);
    puVar17[0x16] = uVar4;
    puVar17[0x17] = (float)fVar22;
    puVar17[0x18] = (float)fVar23;
    puVar17[0x19] = *(undefined4 *)((int)state + 0x34);
    puVar17[0x1a] = fVar7;
    puVar17[0x1b] = fVar2;
    psVar1[1] = sVar8 + 1;
    *psVar1 = sVar8;
    psVar1[3] = sVar8;
    psVar1[2] = sVar8 + 2;
    psVar1[4] = sVar8 + 2;
    psVar1[5] = sVar8 + 3;
    currentTexture[0x28] = currentTexture[0x28] + 2;
    uVar18 = currentTexture[0x26];
    *(int *)(uVar18 + 8) = *(int *)(uVar18 + 8) + 4;
    *(int *)(uVar18 + 0x18) = *(int *)(uVar18 + 0x18) + 6;
    *(int *)(uVar18 + 0xc) = *(int *)(uVar18 + 0xc) + 4;
  }
  else {
    if (*(char *)((int)state + 0x30) == '\0') {
      if ((*(int *)((int)state + 0x18) == *(int *)((int)state + 8)) &&
         (*(int *)((int)state + 0x1c) == *(int *)((int)state + 0xc))) {
        *(float *)((int)this + 0x20) = (float)fVar23;
        *(float *)((int)this + 0x1c) = (float)fVar23;
        *(float *)((int)this + 0x18) = (float)fVar23;
        *(float *)((int)this + 0x14) = (float)fVar23;
      }
      else {
        fVar23 = fVar24;
        if (fVar25 < (float10)(local_20 - local_28)) {
          fVar23 = (float10)*piVar21 / (float10)(local_20 - local_28);
        }
        *(float *)((int)this + 0x1c) = (float)fVar23;
        if (fVar25 < (float10)(local_1c - local_24)) {
          fVar24 = (float10)piVar21[1] / (float10)(local_1c - local_24);
        }
        *(float *)((int)this + 0x20) = (float)fVar24;
      }
    }
    *(float *)((int)this + 0x6c) =
         (*(float *)((int)this + 4) - (float)local_38) -
         *(float *)((int)this + 0x1c) * (float)*(int *)((int)state + 0x10);
    *(float *)((int)this + 0x70) =
         (*(float *)((int)this + 8) - (float)local_34) -
         *(float *)((int)this + 0x20) * (float)*(int *)((int)state + 0x14);
    *(undefined4 *)((int)this + 0x80) = *(undefined4 *)((int)state + 0x34);
    uVar4 = *(undefined4 *)((int)state + 0x38);
    *(undefined4 *)((int)this + 0x58) = *(undefined4 *)((int)this + 8);
    *(undefined4 *)((int)this + 0x84) = uVar4;
    *(undefined4 *)((int)this + 0x60) = *(undefined4 *)((int)this + 0x40);
    *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)((int)this + 0x3c);
    while (uVar18 = *(uint *)((int)this + 0x4c), uVar18 <= *(uint *)((int)this + 0x44)) {
      *(undefined4 *)((int)this + 0x54) = *(undefined4 *)((int)this + 4);
      *(undefined4 *)((int)this + 0x50) = *(undefined4 *)((int)this + 0x2c);
      *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)((int)this + 0x30);
      *(undefined1 *)((int)this + 0x74) = 0;
      *(undefined4 *)((int)this + 0x68) = *(undefined4 *)((int)this + 100);
      while (*(uint *)((int)this + 0x50) <= *(uint *)((int)this + 0x34)) {
LAB_00461c3d:
        bVar12 = unknown_allocator_hasAvailableSpace
                           ((void *)currentTexture[0x26],&DAT_00000004,6,3,(uint)unaff_EDI);
        uVar18 = CONCAT31(extraout_var,bVar12);
        if (!bVar12) {
          if (*(char *)this == '\0') {
            *(undefined1 *)this = 1;
            return (uint)extraout_var << 8;
          }
          goto LAB_00461b25;
        }
        *(undefined1 *)this = 0;
        piVar21 = (int *)(**(int **)((int)this + 0x68) * 0x14 + *(int *)(iVar16 + 0x40));
        if (*rect != *piVar21) {
          iVar20 = currentTexture[0x28];
          if (iVar20 != 0) {
            puVar17 = (undefined4 *)
                      (*(int *)(currentTexture[0x26] + 0x1c) +
                      *(int *)(currentTexture[0x26] + 0x24) * 8);
            *puVar17 = 1;
            puVar17[1] = iVar20;
            *(int *)(currentTexture[0x26] + 0x24) = *(int *)(currentTexture[0x26] + 0x24) + 1;
            currentTexture[0x28] = 0;
          }
          slot = (void *)*piVar21;
          *rect = (int)slot;
          unknown_refSlot_setObject
                    ((void *)(*(int *)(currentTexture[0x26] + 0x1c) +
                             *(int *)(currentTexture[0x26] + 0x24) * 8),slot,unaff_EDI);
          *(int *)(currentTexture[0x26] + 0x24) = *(int *)(currentTexture[0x26] + 0x24) + 1;
        }
        uVar4 = *(undefined4 *)((int)this + 0x54);
        uVar5 = *(undefined4 *)((int)this + 0x58);
        fVar6 = *(float *)((int)this + 0x5c);
        fVar7 = *(float *)((int)this + 0x60);
        if (*(int *)((int)this + 0x50) == *(int *)((int)this + 0x34)) {
          local_8 = *(float *)((int)this + 0xc);
          local_10 = *(float *)((int)this + 0x38);
        }
        else {
          dVar26 = CRT_floor((double)((*(float *)(*(int *)((int)this + 0x68) + 0x34) -
                                      *(float *)((int)this + 0x24)) * *(float *)((int)this + 0x1c)))
          ;
          local_8 = (float)dVar26;
          if ((local_8 + (float)_DAT_01764650) * *(float *)((int)this + 0x14) +
              *(float *)((int)this + 0x24) <= *(float *)(*(int *)((int)this + 0x68) + 0x34)) {
            local_8 = local_8 + (float)_DAT_01764658;
          }
          local_10 = *(float *)((int)this + 0x14) * local_8 + *(float *)((int)this + 0x24);
          local_8 = *(float *)((int)this + 0x6c) + local_8;
          *(float *)((int)this + 0x54) = local_8;
          *(float *)((int)this + 0x5c) = local_10;
        }
        if (*(int *)((int)this + 0x4c) == *(int *)((int)this + 0x44)) {
          state = *(void **)((int)this + 0x10);
          local_c = *(float *)((int)this + 0x48);
        }
        else if (*(char *)((int)this + 0x74) == '\0') {
          dVar26 = CRT_floor((double)((*(float *)(*(int *)((int)this + 0x68) + 0x38) -
                                      *(float *)((int)this + 0x28)) * *(float *)((int)this + 0x20)))
          ;
          fVar3 = (float)dVar26;
          if ((fVar3 + (float)_DAT_01764650) * *(float *)((int)this + 0x18) +
              *(float *)((int)this + 0x28) <= *(float *)(*(int *)((int)this + 0x68) + 0x38)) {
            fVar3 = fVar3 + (float)_DAT_01764658;
          }
          *(undefined1 *)((int)this + 0x74) = 1;
          local_c = fVar3 * *(float *)((int)this + 0x18) + *(float *)((int)this + 0x28);
          state = (void *)(*(float *)((int)this + 0x70) + fVar3);
          *(void **)((int)this + 0x78) = state;
          *(float *)((int)this + 0x7c) = local_c;
        }
        else {
          state = *(void **)((int)this + 0x78);
          local_c = *(float *)((int)this + 0x7c);
        }
        iVar20 = *(int *)((int)this + 0x68);
        fVar6 = ((fVar6 - *(float *)(iVar20 + 0x1c)) + (float)*(int *)(iVar20 + 4)) *
                (float)piVar21[3];
        fVar3 = ((local_10 - *(float *)(iVar20 + 0x1c)) + (float)*(int *)(iVar20 + 4)) *
                (float)piVar21[3];
        fVar7 = ((fVar7 - *(float *)(iVar20 + 0x20)) + (float)*(int *)(iVar20 + 8)) *
                (float)piVar21[4];
        piVar15 = (int *)currentTexture[0x26];
        iVar14 = piVar15[6];
        fVar2 = ((local_c - *(float *)(iVar20 + 0x20)) + (float)*(int *)(iVar20 + 8)) *
                (float)piVar21[4];
        iVar20 = piVar15[4];
        puVar17 = (undefined4 *)(piVar15[2] * 0x1c + *piVar15);
        sVar8 = (short)piVar15[3];
        *puVar17 = uVar4;
        psVar1 = (short *)(iVar20 + iVar14 * 2);
        puVar17[1] = state;
        puVar17[2] = 0;
        puVar17[3] = 0x3f800000;
        puVar17[4] = *(undefined4 *)((int)this + 0x80);
        puVar17[5] = fVar6;
        puVar17[6] = fVar2;
        puVar17[7] = uVar4;
        puVar17[8] = uVar5;
        puVar17[9] = 0;
        puVar17[10] = 0x3f800000;
        puVar17[0xb] = *(undefined4 *)((int)this + 0x80);
        puVar17[0xc] = fVar6;
        puVar17[0xd] = fVar7;
        puVar17[0xe] = local_8;
        puVar17[0xf] = uVar5;
        puVar17[0x10] = 0;
        puVar17[0x11] = 0x3f800000;
        puVar17[0x12] = *(undefined4 *)((int)this + 0x80);
        puVar17[0x13] = fVar3;
        puVar17[0x14] = fVar7;
        puVar17[0x15] = local_8;
        puVar17[0x16] = state;
        puVar17[0x17] = 0;
        puVar17[0x18] = 0x3f800000;
        puVar17[0x19] = *(undefined4 *)((int)this + 0x80);
        puVar17[0x1a] = fVar3;
        puVar17[0x1b] = fVar2;
        *psVar1 = sVar8;
        psVar1[3] = sVar8;
        psVar1[1] = sVar8 + 1;
        psVar1[2] = sVar8 + 2;
        psVar1[4] = sVar8 + 2;
        psVar1[5] = sVar8 + 3;
        currentTexture[0x28] = currentTexture[0x28] + 2;
        iVar20 = currentTexture[0x26];
        *(int *)(iVar20 + 8) = *(int *)(iVar20 + 8) + 4;
        *(int *)(iVar20 + 0x18) = *(int *)(iVar20 + 0x18) + 6;
        *(int *)(iVar20 + 0xc) = *(int *)(iVar20 + 0xc) + 4;
        *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) + 1;
        *(int *)((int)this + 0x68) = *(int *)((int)this + 0x68) + 0x3c;
      }
      *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + 1;
      *(undefined4 *)((int)this + 0x58) = *(undefined4 *)((int)this + 0x78);
      *(undefined4 *)((int)this + 0x60) = *(undefined4 *)((int)this + 0x7c);
      *(int *)((int)this + 100) = *(int *)((int)this + 100) + *(int *)(iVar16 + 0x44) * 0x3c;
    }
  }
LAB_00461b25:
  return CONCAT31((int3)(uVar18 >> 8),1);
}

